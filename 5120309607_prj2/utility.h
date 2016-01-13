//
// Created by jiadongyu on 1/11/16.
//

#ifndef INC_5120309607_PRJ2_CONST_H_H
#define INC_5120309607_PRJ2_CONST_H_H
#include "header.h"

#define addCode(x) \
Codes.push_back(code(x));

#define addCodeReg(x, y) \
Codes.push_back(code(x,y));

#define addCodeCom(x,y) \
if(EnableCodeGen) \
Codes.push_back(code(x,y)); \
else{ \
err("can't gen code at here, syntax error") \
}



#define addReg(y) \
Codes.back().regs.push_back(y);


class code{
public:
    string tpl;
    string comment;
    vector<string> regs;
    void print(){
        if(regs.size()==0)
            printf("tpl");
        if(regs.size()==1)
            printf("tpl",regs[0]);
        if(regs.size()==2)
            printf("tpl",regs[0],regs[1]);
        if(regs.size()==3)
            printf("tpl",regs[0], regs[1],regs[2]);
        if(regs.size()==4)
            printf("tpl",regs[0],regs[1],regs[2],regs[3]);
        if(regs.size()==5)
            printf("tpl",regs[0],regs[1],regs[2],regs[3], regs[4]);
        if(regs.size()==6)
            printf("tpl",regs[0],regs[1],regs[2],regs[3], regs[4], regs[5], regs[6]);
        if(regs.size()==7)
            printf("tpl",regs[0],regs[1],regs[2],regs[3], regs[4], regs[5], regs[6],regs[7]);
    }
    code(const string l):tpl(l){};
    code(const string l,const vector<string> re):tpl(l),regs(re){};
    code(const string l, const string c):tpl(l),comment(c){};
};


#endif //INC_5120309607_PRJ2_CONST_H_H
