//
// Created by jiadongyu on 1/11/16.
//

#ifndef INC_5120309607_PRJ2_CONST_H_H
#define INC_5120309607_PRJ2_CONST_H_H
#include "header.h"

#define addCode(x) \
TreeNode::Codes.push_back(code(x)); \
Codes.back().comment=getToRoot(); \
//cerr<<Codes.back().tpl<<endl; \
//cerr<<Codes.back().comment<<endl;

#define addDefs(x) \
TreeNode::Defs.push_back(code(x)); \
Defs.back().comment=getToRoot(); \

#define addDefReg(y) \
Defs.back().regs.push_back(y);


#define addReg(y) \
Codes.back().regs.push_back(y);

#define addLabel(y) \
addCode("br label %%%s") \
addReg(y) \
addCode("%s:") \
addReg(y)



class code{
public:
    string tpl;
    string comment;
    vector<string> regs;
    void print(){
        if(tpl.size()>0 &&tpl.back()=='\n') tpl=tpl.substr(0,(int)tpl.size()-1);

        if(regs.size()==0)
            printf(tpl.c_str());
        if(regs.size()==1)
            printf(tpl.c_str(),regs[0].c_str());
        if(regs.size()==2)
            printf(tpl.c_str(),regs[0].c_str(),regs[1].c_str());
        if(regs.size()==3)
            printf(tpl.c_str(),regs[0].c_str(), regs[1].c_str(),regs[2].c_str());
        if(regs.size()==4)
            printf(tpl.c_str(),regs[0].c_str(),regs[1].c_str(),regs[2].c_str(),regs[3].c_str());
        if(regs.size()==5)
            printf(tpl.c_str(),regs[0].c_str(),regs[1].c_str(),regs[2].c_str(),regs[3].c_str(), regs[4].c_str());
        if(regs.size()==6)
            printf(tpl.c_str(),regs[0].c_str(),regs[1].c_str(),regs[2].c_str(),regs[3].c_str(), regs[4].c_str(), regs[5].c_str(), regs[6].c_str());
        if(regs.size()==7)
            printf(tpl.c_str(),regs[0].c_str(),regs[1].c_str(),regs[2].c_str(),regs[3].c_str(), regs[4].c_str(), regs[5].c_str(), regs[6].c_str(),regs[7].c_str());
    }

    void printComment(){
        printf("\n;%s\n\n",comment.c_str());
    }
    code(const string l):tpl(l){};
    code(const string l,const vector<string> re):tpl(l),regs(re){};
    code(const string l, const string c):tpl(l),comment(c){};
};


#endif //INC_5120309607_PRJ2_CONST_H_H
