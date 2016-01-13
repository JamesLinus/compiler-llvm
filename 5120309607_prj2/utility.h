//
// Created by jiadongyu on 1/11/16.
//

#ifndef INC_5120309607_PRJ2_CONST_H_H
#define INC_5120309607_PRJ2_CONST_H_H
#include "header.h"

#define addCode(x) \
Codes.push_back(code(x));




#define addReg(y) \
Codes.back().regs.push_back(y);


class code{
public:
    string tpl;
    string comment;
    vector<string> regs;
    void print(){
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
    code(const string l):tpl(l){};
    code(const string l,const vector<string> re):tpl(l),regs(re){};
    code(const string l, const string c):tpl(l),comment(c){};
};


#endif //INC_5120309607_PRJ2_CONST_H_H
