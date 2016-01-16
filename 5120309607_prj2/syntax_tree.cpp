//
// Created by jiadongyu on 1/11/16.
//
#include "syntax_tree.h"


vector<code> TreeNode::Codes;
bool TreeNode::EnableCodeGen;
vector<string> TreeNode::paras;
int TreeNode::insideStmtBlocks;
int TreeNode::insideFor;
stack<string> TreeNode::labelForContinue;
stack<string> TreeNode::labelForBreak;
bool TreeNode::insideFunction;
bool TreeNode::getPointer;
int TreeNode::arrsize;
string TreeNode::arrid;
int TreeNode::registerNum;
int TreeNode::arrindex;


void TreeNode::init() {
    insideStmtBlocks = 0;
    insideFor = 0;
    EnableCodeGen = true;
    getPointer = false;
    insideFunction = false;
    arrsize = 0;
    arrindex = 0;
    registerNum = 0;
}

string TreeNode::allocateRegister(const string prefix) {
    string tmp = "%" + prefix + to_string(registerNum++);
    return tmp;
}

int TreeNode::SearchIdType(const string &id, string &type) const {
    const TreeNode *treeNode = this;

    while (treeNode) {
        if (treeNode->className != "STMTBLOCK" && treeNode->className != "PROGRAM") {
            treeNode = treeNode->parent;
            continue;
        }
        if (treeNode->GetIdType(id, type) == 0) {
            return 0;
        } else {
            treeNode = treeNode->parent;
        }
    }
    return -1;
}

int TreeNode::GetIdType(const string &id, string &type) const {
    if (symbolTable.count(id) == 0) {
        return -1;
    }
    type = symbolTable.at(id).type;
    return 0;
}

int TreeNode::GetIdPointer(const string &id, string &MemPtr) const {

    if (symbolTable.count(id) == 0) {
        return -1;
    }
    MemPtr.clear();
    IdInfo tmp = symbolTable.at(id);

    if (className == "STMTBLOCK") {
        MemPtr.push_back('%');
    } else if (className == "PROGRAM") {
        MemPtr.push_back('@');
    }
    MemPtr.append("ptr_");
    MemPtr.append(id);
    MemPtr.append(".line" + to_string(tmp.lineno));
    MemPtr.append(tmp.suffix);
    return 0;
}

int TreeNode::SearchIdPointer(const string &id, string &MemPtr) const {
    const TreeNode *treeNode = this;

    while (treeNode) {
        if (treeNode->className != "STMTBLOCK" && treeNode->className != "PROGRAM") {
            treeNode = treeNode->parent;
            continue;
        }
        if (treeNode->GetIdPointer(id, MemPtr) == 0) {
            return 0;
        } else {
            treeNode = treeNode->parent;
        }
    }
    return -1;
}

int TreeNode::saveIdtoTable(const string & id,  const string & type, string & MemPtr) {
    cerr<<"first layer:"<<id<<type<<endl;
    string n;
    return saveIdtoTable(id, type, n, MemPtr);
}

int TreeNode::saveIdtoTable(const string & id, const string & type) {
    string tmp;
    string n;
    return saveIdtoTable(id, type, n, tmp);
}

int TreeNode::saveIdtoTable(const string & id, const string & type, const string & suffix, string &MemPtr) {
    cerr<<"saving symbol:"<<id<<endl;
    TreeNode *treeNode = (TreeNode *) this;
    while (treeNode && treeNode->className != "STMTBLOCK" && treeNode->className != "PROGRAM") {
        treeNode = treeNode->parent;
    }

    if (treeNode->GetIdPointer(id, MemPtr) == 0) {
        err("find duplicate definition :" + id);
        return -1;
    }
    else {
        IdInfo tmp;
        tmp.lineno = lineCount;
        tmp.type = type;
        tmp.suffix = suffix;
        treeNode->symbolTable[id] = tmp;
        return treeNode->GetIdPointer(id, MemPtr);
    }
}

void printTree(TreeNode *t, int level) {
    int i = 0;
    if (level == 0) {
        printf("\n");
        printf("syntax tree:\n");
        printf("\n");
    }
    for (; i < level; i++) {
        printf("--");
    }
    printf("%s", t->content.c_str());
    printf("  (");
    printf(" block_end_at_line:%d", t->lineCount);
    printf(" children_num:%d", t->childrenSize);
    printf(")\n");
    i = 0;
    for (; i < t->childrenSize; i++) {
        printTree(t->children[i], level + 1);
    }
}

void TreeNode::CodePrint() {
    init();
    this->Codegen();
    for (int i = 0; i < Codes.size(); i++) {
        Codes[i].print();
        Codes[i].printComment();

    }
}
