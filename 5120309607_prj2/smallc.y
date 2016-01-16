%{
#include "header.h"
#include "lex.yy.c"
#include "syntax_tree.h"
#include "TreeNode.h"

using namespace std;
void yyerror(char*);
extern int yylineno;

TreeNode * root;

%}

%union {
    char* string;
    TreeNode* node;
}


%token <string> ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN AND_ASSIGN MOD_ASSIGN
%token <string> XOR_ASSIGN OR_ASSIGN RIGHT_OP LEFT_OP 
%token <string> AND_OP OR_OP EQ_OP NE_OP RIGHT_ASSIGN LEFT_ASSIGN 
%token <string> LOG_NOT_OP BIT_NOT_OP READ WRITE
%token <string> INT ID SEMI COMMA
%token <string> TYPE LP RP LB RB LC RC STRUCT RETURN
%token <string> IF ELSE BREAK CONT FOR DOT ASSIGN
%type <node> PROGRAM EXTDEFS EXTDEF SEXTVARS EXTVARS STSPEC FUNC PARAS STMTBLOCK STMTS
%type <node> STMT DEFS SDEFS SDECS DECS VAR INIT EXP EXPS ARRS ARGS UNARYOP

%nonassoc  IF_NO_ELSE
%nonassoc ELSE_AFTER_IF
%right ASSIGN ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN AND_ASSIGN MOD_ASSIGN XOR_ASSIGN OR_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN
%left  OR_OP
%left  AND_OP
%left <string> BIT_OR_OP
%left <string> BIT_XOR_OP
%left <string> BIT_AND_OP
%left  EQ_OP NE_OP
%left <string> GE_OP LE_OP GT_OP LT_OP
%left LEFT_OP RIGHT_OP
%left <string> PLUS_OP MINUS_OP
%left <string> PRODUCT_OP DIV_OP MOD_OP
%right <string> INC_OP DEC_OP UNARY 
%left  DOT LP LB
%%
PROGRAM: EXTDEFS {root = $$ = getNodeInstance(@$.first_line,"PROGRAM","PROGRAM: EXTDEFS",1,$1);}
;//done
EXTDEFS: EXTDEF EXTDEFS {$$ = getNodeInstance(@$.first_line,"EXTDEFS","EXTDEFS: EXTDEF EXTDEFS",2,$1,$2);}
| {$$ = getNodeInstance(@$.first_line,"EXTDEFS", "EXTDEFS:null", 0);}
;//done

EXTDEF: TYPE EXTVARS SEMI { $$ = getNodeInstance(@$.first_line,"EXTDEF", "EXTDEF: TYPE EXTVARS ;", 2, getNodeInstance(@$.first_line,"TYPE", $1, 0),$2); }
| STSPEC SEXTVARS SEMI { $$ = getNodeInstance(@$.first_line, "EXTDEF","EXTDEF: STSPEC SEXTVARS ;", 2, $1,$2); }
| TYPE FUNC STMTBLOCK { $$ = getNodeInstance(@$.first_line,"EXTDEF", "EXTDEF: TYPE FUNC STMTBLOCK", 3, getNodeInstance(@$.first_line,"TYPE", $1, 0),$2,$3); }
;

//seperate struct
SEXTVARS: ID { $$ = getNodeInstance(@$.first_line,"SEXTVARS", "SEXTVARS: ID",1,getNodeInstance(@$.first_line,"ID",$1,0)); }
| ID COMMA SEXTVARS { $$ = getNodeInstance(@$.first_line, "SEXTVARS", "SEXTVARS: ID , SEXTVARS", 2, getNodeInstance(@$.first_line,"ID", $1, 0),$3); }
| {$$ = getNodeInstance(@$.first_line,"SEXTVARS", "SEXTVARS: null", 0);}
;//jump

EXTVARS: VAR { $$ = getNodeInstance(@$.first_line,"EXTVARS", "EXTVARS: VAR", 1, $1); }
|VAR COMMA EXTVARS { $$ = getNodeInstance(@$.first_line,"EXTVARS", "EXTVARS:VAR , EXTVARS", 2, $1,$3); }
|VAR ASSIGN INIT { $$ = getNodeInstance(@$.first_line,"EXTVARS", "EXTVARS:VAR ASSIGN INIT", 3, $1,getNodeInstance(@$.first_line,"ASSIGN",$2,0),$3); }
|VAR ASSIGN INIT COMMA EXTVARS { $$ = getNodeInstance(@$.first_line,"EXTVARS", "EXTVARS:VAR ASSIGN INIT , EXTVARS", 4, $1,getNodeInstance(@$.first_line,"ASSIGN",$2,0),$3,$5); }
| {$$ = getNodeInstance(@$.first_line,"EXTVARS", "EXTVARS:null", 0);}
;

STSPEC: STRUCT ID LC SDEFS RC { $$ = getNodeInstance(@$.first_line,"STSPEC", "STSPEC: STRUCT ID { SDEFS }", 3, getNodeInstance(@$.first_line,"STRUCT",$1,0),getNodeInstance(@$.first_line,"ID", $2, 0),$4); }
| STRUCT LC SDEFS RC { $$ = getNodeInstance(@$.first_line, "STSPEC","STSPEC: STRUCT { SDEFS }", 2, getNodeInstance(@$.first_line,"STRUCT",$1,0),$3); }
| STRUCT ID { $$ = getNodeInstance(@$.first_line, "STSPEC","STSPEC: STRUCT ID", 2, getNodeInstance(@$.first_line,"STRUCT",$1,0),getNodeInstance(@$.first_line,"ID", $2, 0)); }
;

FUNC: ID LP PARAS RP { $$ = getNodeInstance(@$.first_line, "FUNC","FUNC: ID ( PARAS )", 2, getNodeInstance(@$.first_line,"ID" ,$1, 0),$3); }
;


PARAS: TYPE ID COMMA PARAS { $$ = getNodeInstance(@$.first_line,"PARAS", "PARAS: TYPE ID , PARAS", 3, getNodeInstance(@$.first_line,"TYPE", $1, 0), getNodeInstance(@$.first_line,"ID", $2, 0),$4); }
| TYPE ID { $$ = getNodeInstance(@$.first_line, "PARAS","PARAS: TYPE ID", 2, getNodeInstance(@$.first_line,"TYPE", $1, 0), getNodeInstance(@$.first_line,"ID", $2, 0)); }
| {$$ = getNodeInstance(@$.first_line, "PARAS","PARAS: null", 0);}
;

STMTBLOCK: LC DEFS STMTS RC { $$ = getNodeInstance(@$.first_line,"STMTBLOCK", "STMTBLOCK: { DEFS STMTS }", 2, $2,$3); }
;

STMTS: STMT STMTS { $$ = getNodeInstance(@$.first_line, "STMTS","STMTS: STMT STMTS", 2, $1,$2); }
| {$$ = getNodeInstance(@$.first_line,"STMTS", "STMTS: null", 0);}
;

STMT: EXP SEMI { $$ = getNodeInstance(@$.first_line,"STMT", "STMT: EXP ;", 1, $1); }
| STMTBLOCK { $$ = getNodeInstance(@$.first_line,"STMT", "STMT: STMTBLOCK", 1, $1); }
| RETURN EXPS SEMI { $$ = getNodeInstance(@$.first_line,"STMT" ,"STMT: RETURN EXPS ;", 2, getNodeInstance(@$.first_line,"RETURN", $1, 0),$2); }
| IF LP EXPS RP STMT %prec IF_NO_ELSE { $$ = getNodeInstance(@$.first_line,"STMT" ,"STMT: if ( EXPS ) STMT", 2, $3,$5); }
| IF LP EXPS RP STMT ELSE STMT %prec ELSE_AFTER_IF { $$ = getNodeInstance(@$.first_line,"STMT", "STMT: if ( EXPS ) STMT else STMT", 3, $3,$5,$7);}
| FOR LP EXP SEMI EXP SEMI EXP RP STMT { $$ = getNodeInstance(@$.first_line, "STMT","STMT: for ( EXP ; EXP ; EXP ) STMT", 4, $3,$5,$7,$9); }
| CONT SEMI { $$ = getNodeInstance(@$.first_line,"STMT", "STMT: CONT ;", 1, getNodeInstance(@$.first_line, "CONT",$1, 0)); }
| BREAK SEMI { $$ = getNodeInstance(@$.first_line, "STMT","STMT: BREAK ;", 1, getNodeInstance(@$.first_line, "BREAK",$1, 0)); }
| READ LP EXPS RP SEMI{$$ = getNodeInstance(@$.first_line,"STMT", "STMT: read ( EXPS )",1, $3);}
| WRITE LP EXPS RP SEMI{$$ = getNodeInstance(@$.first_line,"STMT", "STMT: write ( EXPS )",1, $3);}
;

DEFS: TYPE DECS SEMI DEFS { $$ = getNodeInstance(@$.first_line,"DEFS", "DEFS: TYPE DECS ; DEFS", 3, getNodeInstance(@$.first_line,"TYPE", $1, 0),$2,$4); }
| STSPEC SDECS SEMI DEFS { $$ = getNodeInstance(@$.first_line, "DEFS","DEFS: STSPEC SDECS ; DEFS", 3, $1,$2,$4); }
| {$$ = getNodeInstance(@$.first_line, "DEFS","DEFS: null", 0);}
;

SDEFS: TYPE SDECS SEMI SDEFS { $$ = getNodeInstance(@$.first_line, "SDEFS","SDEFS: TYPE SDECS ; SDEFS", 3, getNodeInstance(@$.first_line, "SDEFS",$1, 0),$2,$4); }
| {$$ = getNodeInstance(@$.first_line, "SDEFS", "SDEFS: null", 0);}
;

SDECS: ID COMMA SDECS { $$ = getNodeInstance(@$.first_line,"SDECS", "SDECS: ID , SDECS", 2, getNodeInstance(@$.first_line, "ID",$1, 0),$3); }
| ID { $$ = getNodeInstance(@$.first_line,"SDECS", "SDECS: ID ", 1,getNodeInstance(@$.first_line,"ID",$1,0)); }
;

DECS: VAR { $$ = getNodeInstance(@$.first_line, "DECS", "DECS: VAR", 1, $1); }
| VAR COMMA DECS { $$ = getNodeInstance(@$.first_line, "DECS", "DECS: VAR, DECS", 2, $1,$3); }
| VAR ASSIGN INIT COMMA DECS { $$ = getNodeInstance(@$.first_line,"DECS",  "DECS: VAR ASSIGN INIT, DECS", 4, $1,getNodeInstance(@$.first_line,"ASSIGN", $2, 0),$3,$5); }
| VAR ASSIGN INIT { $$ = getNodeInstance(@$.first_line,"DECS",  "DECS: VAR ASSIGN INIT", 3, $1,getNodeInstance(@$.first_line,"ASSIGN", $2, 0),$3); }
;

VAR:ID { $$ = getNodeInstance(@$.first_line,"VAR", "VAR: ID", 1,getNodeInstance(@$.first_line,"ID", $1, 0)); }
|ID LB INT RB { $$ = getNodeInstance(@$.first_line,"VAR",  "VAR: ID [ INT ]", 2, $1,getNodeInstance(@$.first_line,"INT", $3, 0)); }
;

INIT: EXPS { $$ = getNodeInstance(@$.first_line,"INIT",  "INIT: EXPS", 1, $1); }
| LC ARGS RC { $$ = getNodeInstance(@$.first_line,"INIT",   "INIT: { ARGS }", 1, $2); }
; 

EXP: EXPS { $$ = getNodeInstance(@$.first_line,"EXP",   "EXP: EXPS", 1, $1); }
| {$$ = getNodeInstance(@$.first_line, "EXP", "EXP: null", 0);}
;

EXPS: EXPS AND_OP EXPS { $$ = getNodeInstance(@$.first_line,"EXPS",  $2, 2, $1,$3); }
| EXPS OR_OP EXPS { $$ = getNodeInstance(@$.first_line,"EXPS", $2, 2, $1,$3); }
| EXPS LE_OP EXPS { $$ = getNodeInstance(@$.first_line,"EXPS",  $2, 2, $1,$3); }
| EXPS GE_OP EXPS { $$ = getNodeInstance(@$.first_line, "EXPS", $2, 2, $1,$3); }
| EXPS EQ_OP EXPS { $$ = getNodeInstance(@$.first_line, "EXPS", $2, 2, $1,$3); }
| EXPS NE_OP EXPS { $$ = getNodeInstance(@$.first_line,"EXPS",  $2, 2, $1,$3); }
| EXPS ASSIGN EXPS { $$ = getNodeInstance(@$.first_line, "EXPS", $2, 2, $1,$3); }
| EXPS ADD_ASSIGN EXPS { $$ = getNodeInstance(@$.first_line, "EXPS", $2, 2, $1,$3); }
| EXPS SUB_ASSIGN EXPS { $$ = getNodeInstance(@$.first_line, "EXPS", $2, 2, $1,$3); }
| EXPS MUL_ASSIGN EXPS { $$ = getNodeInstance(@$.first_line, "EXPS", $2, 2, $1,$3); }
| EXPS DIV_ASSIGN EXPS { $$ = getNodeInstance(@$.first_line, "EXPS", $2, 2, $1,$3); }
| EXPS AND_ASSIGN EXPS { $$ = getNodeInstance(@$.first_line, "EXPS", $2, 2, $1,$3); }
| EXPS MOD_ASSIGN EXPS { $$ = getNodeInstance(@$.first_line, "EXPS", $2, 2, $1,$3); }
| EXPS XOR_ASSIGN EXPS { $$ = getNodeInstance(@$.first_line,"EXPS",  $2, 2, $1,$3); }
| EXPS OR_ASSIGN EXPS { $$ = getNodeInstance(@$.first_line, "EXPS", $2, 2, $1,$3); }
| EXPS RIGHT_OP EXPS { $$ = getNodeInstance(@$.first_line, "EXPS", $2, 2, $1,$3); }
| EXPS LEFT_OP EXPS { $$ = getNodeInstance(@$.first_line,"EXPS",  $2, 2, $1,$3); }
| EXPS RIGHT_ASSIGN EXPS { $$ = getNodeInstance(@$.first_line, "EXPS", $2, 2, $1,$3); }
| EXPS LEFT_ASSIGN EXPS { $$ = getNodeInstance(@$.first_line,"EXPS",  $2, 2, $1,$3); }
| EXPS PLUS_OP EXPS { $$ = getNodeInstance(@$.first_line, "EXPS", $2, 2, $1,$3); }
| EXPS MINUS_OP EXPS { $$ = getNodeInstance(@$.first_line,"EXPS",  $2, 2, $1,$3); }
| EXPS BIT_AND_OP EXPS { $$ = getNodeInstance(@$.first_line, "EXPS", $2, 2, $1,$3); }
| EXPS PRODUCT_OP EXPS { $$ = getNodeInstance(@$.first_line, "EXPS", $2, 2, $1,$3); }
| EXPS DIV_OP EXPS { $$ = getNodeInstance(@$.first_line, "EXPS", $2, 2, $1,$3); }
| EXPS MOD_OP EXPS { $$ = getNodeInstance(@$.first_line, "EXPS", $2, 2, $1,$3); }
| EXPS LT_OP EXPS { $$ = getNodeInstance(@$.first_line,"EXPS",  $2, 2, $1,$3); }
| EXPS GT_OP EXPS { $$ = getNodeInstance(@$.first_line,"EXPS",  $2, 2, $1,$3); }
| EXPS BIT_XOR_OP EXPS { $$ = getNodeInstance(@$.first_line, "EXPS", $2, 2, $1,$3); }
| EXPS BIT_OR_OP EXPS { $$ = getNodeInstance(@$.first_line,"EXPS",  $2, 2, $1,$3); }
| UNARYOP EXPS %prec UNARY { $$ = getNodeInstance(@$.first_line,"EXPS",  "EXPS: UNARYOP EXPS", 2, $1,$2); }
| LP EXPS RP { $$ = getNodeInstance(@$.first_line, "EXPS", "EXPS: ( EXPS )", 1, $2); }
| ID LP ARGS RP { $$ = getNodeInstance(@$.first_line,"EXPS",  "EXPS: ID ( ARGS )", 2, getNodeInstance(@$.first_line,"ID", $1, 0),$3); }
| ID ARRS { $$ = getNodeInstance(@$.first_line,"EXPS",  "EXPS: ID ARRS", 2, getNodeInstance(@$.first_line,"ID", $1, 0),$2); }
| ID DOT ID { $$ = getNodeInstance(@$.first_line, "EXPS", "EXPS: ID DOT ID", 3, getNodeInstance(@$.first_line,"ID", $1, 0),getNodeInstance(@$.first_line,"DOT", $2, 0),getNodeInstance(@$.first_line, "ID",$3, 0)); }
| INT { $$ = getNodeInstance(@$.first_line,"EXPS",  $1, 0); }
;

ARRS: LB EXPS RB  { $$ = getNodeInstance(@$.first_line, "ARRS", "ARRS: [ EXPS ]", 1, $2); }
| {$$ = getNodeInstance(@$.first_line, "ARRS", "ARRS: null", 0);}
;

ARGS: EXPS COMMA ARGS { $$ = getNodeInstance(@$.first_line,"ARGS",  "ARGS: EXPS, ARGS", 2, $1,$3); }
| EXP { $$ = getNodeInstance(@$.first_line,"ARGS", "args", 1, $1); }
;

UNARYOP:
	PLUS_OP {$$ = getNodeInstance(@$.first_line, "UNARYOP",$1, 0);}
	|MINUS_OP {$$ = getNodeInstance(@$.first_line,"UNARYOP", $1, 0);}
	|BIT_NOT_OP {$$ = getNodeInstance(@$.first_line, "UNARYOP",$1, 0);}
	|LOG_NOT_OP {$$ = getNodeInstance(@$.first_line, "UNARYOP",$1, 0);}
	|INC_OP {$$ = getNodeInstance(@$.first_line, "UNARYOP",$1, 0);}
	|DEC_OP {$$ = getNodeInstance(@$.first_line, "UNARYOP",$1, 0);}
;

%%

#include "header.h"
#include "syntax_tree.h"

void yyerror(char *s)
{
	fflush(stdout);
	fprintf(stderr,"yyerror: %d :%s %s\n",yylineno,s,yytext);
}


int main(int argc, char *argv[])
{
	freopen(argv[1], "r", stdin);
    	freopen(argv[2], "w", stdout);
	if(!yyparse()){
		fprintf(stderr,"Parsing complete.\n");
		//printTree(root,0);
        root->CodePrint();
        fprintf(stderr,"Translation success\n\n\n");
	}
	else{
		printf("ERROR! parse failed.\n");
	}

	return 0;
}
int yywrap()
{
	return 1;
}
