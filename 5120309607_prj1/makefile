LEX=lex
YACC=yacc
CC="g++"
STD="-std=c++11"

compiler:lex.yy.o y.tab.o
	$(CC) $(STD) y.tab.c -g -ly -ll -o compiler 2> error_compiler.err

lex.yy.o:lex.yy.c y.tab.h
	$(CC) -c $(STD) lex.yy.c 2> error_lex_yy.err

y.tab.o:y.tab.c header.h syntax_tree.h
	$(CC) -c $(STD) y.tab.c 2> error_y_tab.err

y.tab.c y.tab.h:smallc_prj1.y header.h syntax_tree.h
	$(YACC) smallc_prj1.y -v -d

lex.yy.c:tokens_prj1.l header.h syntax_tree.h
	$(LEX) tokens_prj1.l

clean:
	rm -f *.o *.c *.tab.h *.output *.err compiler
