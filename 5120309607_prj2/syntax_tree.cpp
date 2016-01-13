//
// Created by jiadongyu on 1/11/16.
//
#include "syntax_tree.h"


int TreeNode::SearchIdType(const string &id, string &type) const {
    const TreeNode * treeNode=this;

    while(treeNode){
        if(treeNode->className!="STMTBLOCK" && treeNode->className!="PROGRAM"){
            treeNode=treeNode->parent;
            continue;
        }
        if(treeNode->GetIdType(id,type)==0){
            return 0;
        }else{
            treeNode=treeNode->parent;
        }
    }
    return -1;
}

int TreeNode::GetIdType(const string &id, string &type) const {
    if(symbolTable.count(id)==0){
        return -1;
    }
    type=symbolTable[id].type;
    return 0;
}

int TreeNode::GetIdPointer(const string & id, string & MemPtr) const{

    if(symbolTable.count(id)==0){
        return -1;
    }
    MemPtr.clear();
    IdInfo tmp = symbolTable[id];

    if(className=="STMTBLOCK" ){
        MemPtr.push_back('%');
    }else if(className=="PROGRAM"){
        MemPtr.push_back('@');
    }
    MemPtr.append("ptr_");
    MemPtr.append(id);
    MemPtr.append(".line"+to_string(tmp.lineno));
    MemPtr.append(tmp.suffix);
    return 0;
}

int TreeNode::SearchIdPointer(const string &id, string &MemPtr) const {
    const TreeNode * treeNode=this;

    while(treeNode){
        if(treeNode->className!="STMTBLOCK" && treeNode->className!="PROGRAM"){
            treeNode=treeNode->parent;
            continue;
        }
        if(treeNode->GetIdPointer(id,MemPtr)==0){
            return 0;
        }else{
            treeNode=treeNode->parent;
        }
    }
    return -1;
}

int TreeNode::saveIdtoTable(const string id, const string type, string &MemPtr)  {
    return saveIdtoTable(id,type,"",MemPtr);
}

int TreeNode::saveIdtoTable(const string id,  const string type)  {
    string tmp;
    return saveIdtoTable(id, type,"",tmp);
}

int TreeNode::saveIdtoTable(const string id, const string type, const string suffix, string &MemPtr)  {
    TreeNode *treeNode = (TreeNode *) this;
    while(treeNode && treeNode->className!="STMTBLOCK" && treeNode->className!="PROGRAM" ){
        treeNode=treeNode->parent;
    }

    if(treeNode->GetIdPointer(id,MemPtr)==0){
        err("find duplicate definition :"+id);
        return -1;
    }
    else{
        IdInfo tmp;
        tmp.lineno=lineCount;
        tmp.type=type;
        tmp.suffix=suffix;
        treeNode->symbolTable[id]=tmp;
        return treeNode->GetIdPointer(id,MemPtr);
    }
}
