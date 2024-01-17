flex Scanner.flex
bison --defines=Token.h --output=Parser.c Parser.bison
gcc -o Parser lex.yy.c Parser.c ASTGenerator.c
./Parser.exe