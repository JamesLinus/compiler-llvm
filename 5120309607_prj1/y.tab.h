/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ADD_ASSIGN = 258,
    SUB_ASSIGN = 259,
    MUL_ASSIGN = 260,
    DIV_ASSIGN = 261,
    AND_ASSIGN = 262,
    MOD_ASSIGN = 263,
    XOR_ASSIGN = 264,
    OR_ASSIGN = 265,
    RIGHT_OP = 266,
    LEFT_OP = 267,
    AND_OP = 268,
    OR_OP = 269,
    EQ_OP = 270,
    NE_OP = 271,
    RIGHT_ASSIGN = 272,
    LEFT_ASSIGN = 273,
    LOG_NOT_OP = 274,
    BIT_NOT_OP = 275,
    INT = 276,
    ID = 277,
    SEMI = 278,
    COMMA = 279,
    TYPE = 280,
    LP = 281,
    RP = 282,
    LB = 283,
    RB = 284,
    LC = 285,
    RC = 286,
    STRUCT = 287,
    RETURN = 288,
    IF = 289,
    ELSE = 290,
    BREAK = 291,
    CONT = 292,
    FOR = 293,
    DOT = 294,
    ASSIGN = 295,
    IF_NO_ELSE = 296,
    ELSE_AFTER_IF = 297,
    BIT_OR_OP = 298,
    BIT_XOR_OP = 299,
    BIT_AND_OP = 300,
    GE_OP = 301,
    LE_OP = 302,
    GT_OP = 303,
    LT_OP = 304,
    PLUS_OP = 305,
    MINUS_OP = 306,
    PRODUCT_OP = 307,
    DIV_OP = 308,
    MOD_OP = 309,
    INC_OP = 310,
    DEC_OP = 311,
    UNARY = 312
  };
#endif
/* Tokens.  */
#define ADD_ASSIGN 258
#define SUB_ASSIGN 259
#define MUL_ASSIGN 260
#define DIV_ASSIGN 261
#define AND_ASSIGN 262
#define MOD_ASSIGN 263
#define XOR_ASSIGN 264
#define OR_ASSIGN 265
#define RIGHT_OP 266
#define LEFT_OP 267
#define AND_OP 268
#define OR_OP 269
#define EQ_OP 270
#define NE_OP 271
#define RIGHT_ASSIGN 272
#define LEFT_ASSIGN 273
#define LOG_NOT_OP 274
#define BIT_NOT_OP 275
#define INT 276
#define ID 277
#define SEMI 278
#define COMMA 279
#define TYPE 280
#define LP 281
#define RP 282
#define LB 283
#define RB 284
#define LC 285
#define RC 286
#define STRUCT 287
#define RETURN 288
#define IF 289
#define ELSE 290
#define BREAK 291
#define CONT 292
#define FOR 293
#define DOT 294
#define ASSIGN 295
#define IF_NO_ELSE 296
#define ELSE_AFTER_IF 297
#define BIT_OR_OP 298
#define BIT_XOR_OP 299
#define BIT_AND_OP 300
#define GE_OP 301
#define LE_OP 302
#define GT_OP 303
#define LT_OP 304
#define PLUS_OP 305
#define MINUS_OP 306
#define PRODUCT_OP 307
#define DIV_OP 308
#define MOD_OP 309
#define INC_OP 310
#define DEC_OP 311
#define UNARY 312

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 12 "smallc_prj1.y" /* yacc.c:1909  */

    char* string;
    TreeNode* node;

#line 173 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
