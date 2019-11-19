flex mylexer.l

bison -dv myparser.y

g++ -o lab.exe lex.yy.c myparser.tab.c

lab.exe

@cmd.exe