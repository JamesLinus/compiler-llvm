#ifndef SYNTAX_TREE_H
#define SYNTAX_TREE_H
#include "header.h"
#include "utility.h"

#define err(x) \
cerr<<"error at line"<<lineCount<<"; content: "<<content<<" #"<<(x)<<endl;

#define CHECK_RTN(y) \
if (rtn!=0) { err(y) }

#define CHECK_RTN_EXIT(y) \
if(rtn!=0) { err(y) exit(-1);}


struct IdInfo{
    int lineno;
    string type;
    string suffix;

    IdInfo():lineno(0),type(""),suffix(""){}
};

class TreeNode {
public:
    int rtn;
    static vector<code> Codes;
	static bool EnableCodeGen;
    static vector<string> paras;
    static int insideStmtBlocks;
    static int insideFor;
    static stack<string> labelForContinue;
    static stack<string> labelForBreak;

    static bool insideFunction;
    static bool getPointer;

    static int arrsize;
    static string arrid;

    static void init(){
        insideStmtBlocks=0;
        insideFor=0;
        EnableCodeGen=true;
        getPointer=false;
        insideFunction=false;
        arrsize=0;
        registerNum=0;
    }
private:
    static int registerNum;
public:
    static  string allocateRegister(const string prefix="r_");
    int lineCount;
    string content;
    string className;
    int childrenSize ;
    vector<TreeNode*> children;
    virtual ~TreeNode(){
        for(auto a:children){
            delete a;
        }
    }
    TreeNode * parent;
    TreeNode():parent(NULL),rtn(0){};

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



void printTree(TreeNode * t, int level);

#endif
