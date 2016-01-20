---
title: Report of Compiler Principle
layout: post
author: dongyuj.vip
permalink: /report-of-compiler-principle/
source-id: 1tONBUmLnBsV1VjflQ5XMpU3WLNFiC7uWsflQ-jzs26c
published: true
---
Report of Compiler Principle

Project 2

[Dongyu Jia (5120309607)](mailto:jiady@sjtu.edu.cn)

01/20/2016 

[[TOC]]

# Introduction

In this project, you are required to implement a code generator to translate the intermediate representation, which is produced by your syntax analyzer implemented in project 1, into LLVM instructions. Your code generator should return a LLVM assembly program, which can be run on LLVM (http://llvm.org/). After finishing this project, you will get a compiler, which can translate Small-C source programs to LLVM assembly programs.

## Lexical Analyzer

## Examples

Since the logic are pretty the same for all symbols, we use define to avoid duplicate and if you want to change some logic, you only need to fix the define instead of fixing them one by one.

#define printReturn(x)  return x;

#define load yylval.string = strdup(yytext);

…...

"/" {load printReturn(DIV_OP)}

"%" {load printReturn(MOD_OP)}

"<" {load printReturn(LT_OP)}

## Line number

## DEC HEX & OCT Numbers

## Comments

# Syntax Analyzer

## Precedence of IF and IF ELSE Statement

## Error Message

## Node reduction

# Semantic Analyzer 

## Parse Tree Generation

## Error Checking

### operand type checking

### Resevered word

### main entrance

### usage after declaration

### break & continue

### return 

## Symbol Table

# Intermediate Representation

## Data Structure

# Register Allocation

# Optimization

## Unused function

## Unused struct definition

# Conclusion

## Philosophy

# Reference

allocate register

not use, can be abadon 

read ret 

write ret

exps

only internal use no tree structure

init array 

a={1,0}

if(x)

for(;x;)

dead code elimination

1. unused function

2. unused def of struct

3. unjumped section (will not happpen)

4. dependency parse inside function, (use tree, depency id)

