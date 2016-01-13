
#include "header.h"
#include "utility.h"
#ifndef SYNTAX_TREE_H
#define SYNTAX_TREE_H

#define err(x) \
cerr<<"error at line"<<lineCount<<"; content: "<<content<<" #"<<(x)<<endl;

#define CHECK_RTN(y) \
if (rtn!=0) { err(y) }

#define CHECK_RTN_EXIT(y) \
if(rtn!=0) { err(y) exit(-1);}


class TreeNode {
public:
    int rtn;
    static vector<code> Codes;
	static bool EnableCodeGen;
    static vector<string> paras;
    static int insideStmtBlocks=0;
    static int insideFor=0;
    static stack<string> labelForContinue;
    static stack<string> labelForBreak;

    static bool insideFunction=false;
    static bool getPointer=false;

    static int arrsize=0;
    static string arrid="";
private:
    static int registerNum=0;
public:
    static  string allocateRegister(const string prefix="r_"){
        string tmp="%"+prefix+to_string(registerNum++);
    }

    int lineCount;
    string content;
    string className;

    int childrenSize ;
    vector<TreeNode*> children;
    ~TreeNode(){
        for(auto a:children){
            delete a;
        }
    }
    TreeNode * parent;
    TreeNode():parent(NULL),rtn(0),EnableCodeGen(true){};

    virtual string Codegen(){
        for(auto a:children){
            a->Codegen();
        }
        return "NULL";
    }

    virtual void CodeHelperGen(){
        return;
    }


public:// symbolTable
    unordered_map<string, IdInfo> symbolTable;
    int GetIdPointer(const string & id, string & MemPtr) const;
    int SearchIdPointer(const string & id, string &MemPtr) const;

    int GetIdType(const string & id, string & type) const;
    int SearchIdType(const string & id, string &type) const;

    int saveIdtoTable(const string id, const string type="i32") ;
    int saveIdtoTable(const string id, const string type ,string &MemPtr) ;
    int saveIdtoTable(const string id, const string type, const string suffix, string &MemPtr) ;

};

struct IdInfo{
    int lineno;
    string type;
    string suffix;

    IdInfo():lineno(0),type(""),suffix(""){}
};




TreeNode * root;


void printTree(TreeNode * t, int level){
	int i=0;
	if(level==0){
		printf("\n");
		printf("syntax tree:\n");
		printf("\n");
	}
	for(;i<level;i++){
		printf("--");
	}
	printf("%s", t->content.c_str());
    printf("  (");
	printf(" block_end_at_line:%d",t->lineCount);
	printf(" children_num:%d",t->childrenSize);
	printf(")\n");
	i=0;
	for(;i< t->childrenSize;i++){
		printTree(t->children[i],level+1);
	}
}

#endif
