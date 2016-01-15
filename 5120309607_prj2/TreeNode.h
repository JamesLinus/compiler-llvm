//
// Created by jiadongyu on 1/12/16.
//

#ifndef INC_5120309607_PRJ2_TREENODE_H
#define INC_5120309607_PRJ2_TREENODE_H
#include "syntax_tree.h"
#define GenNode(x) \
class x##TreeNode: public TreeNode{ \
public:\
virtual string Codegen() override; \
}; \

#define SwitchClass(x) \
if(#x == classname) return new x##TreeNode();




GenNode(PROGRAM);
GenNode(EXTDEFS);
GenNode(EXTDEF);
GenNode(SEXTVARS);
GenNode(EXTVARS);
GenNode(STSPEC);
GenNode(FUNC);
GenNode(PARAS);
GenNode(STMTBLOCK);
GenNode(STMTS);
GenNode(STMT);
GenNode(DEFS);
GenNode(SDEFS);
GenNode(SDECS);
GenNode(DECS);
GenNode(VAR);
GenNode(INIT);
GenNode(EXP);
GenNode(EXPS);
GenNode(ARRS);
class ARGSTreeNode: public TreeNode{
public:
    virtual void CodeHelperGen() override;

    virtual string Codegen() override;
};
GenNode(UNARYOP);

class ConstValue{
public:
    static unordered_set<string> nTer;
    static void init() {
        nTer.insert("Program");
        nTer.insert("EXTDEFS");
        nTer.insert("EXTDEF");
        nTer.insert("SEXTVARS");
        nTer.insert("EXTVARS");
        nTer.insert("STSPEC");
        nTer.insert("FUNC");
        nTer.insert("PARAS");
        nTer.insert("STMTBLOCK");
        nTer.insert("STMTS");
        nTer.insert("STMT");
        nTer.insert("DEFS");
        nTer.insert("SDEFS");
        nTer.insert("SDECS");
        nTer.insert("DECS");
        nTer.insert("VAR");
        nTer.insert("INIT");
        nTer.insert("EXP");
        nTer.insert("EXPS");
        nTer.insert("ARRS");
        nTer.insert("ARGS");
        nTer.insert("UNARYOP");
    }
    static TreeNode * get(const string classname){
        SwitchClass(PROGRAM);
        SwitchClass(EXTDEFS);
        SwitchClass(EXTDEF);
        SwitchClass(SEXTVARS);
        SwitchClass(EXTVARS);
        SwitchClass(STSPEC);
        SwitchClass(FUNC);
        SwitchClass(PARAS);
        SwitchClass(STMTBLOCK);
        SwitchClass(STMTS);
        SwitchClass(STMT);
        SwitchClass(DEFS);
        SwitchClass(SDEFS);
        SwitchClass(SDECS);
        SwitchClass(DECS);
        SwitchClass(VAR);
        SwitchClass(INIT);
        SwitchClass(EXP);
        SwitchClass(EXPS);
        SwitchClass(ARRS);
        SwitchClass(ARGS);
        SwitchClass(UNARYOP);
        return new TreeNode();
    };
};

TreeNode* getNodeInstance(int line, string content, int childrenSize, ...);

#endif //INC_5120309607_PRJ2_TREENODE_H

