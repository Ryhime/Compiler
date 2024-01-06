flex Lexical/scanner.flex
gcc -o output Lexical/TokenGenerator.c Lexical/lex.yy.c main.c
./output.exe