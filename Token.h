
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOKEN_INT = 258,
     TOKEN_FLOAT = 259,
     TOKEN_CHAR = 260,
     TOKEN_ADD = 261,
     TOKEN_MINUS = 262,
     TOKEN_MUL = 263,
     TOKEN_DIV = 264,
     TOKEN_EQUAL = 265,
     TOKEN_DOUBLE_EQUAL = 266,
     TOKEN_LESS = 267,
     TOKEN_GREATER = 268,
     TOKEN_LESS_EQUAL = 269,
     TOKEN_GREATER_EQUAL = 270,
     TOKEN_ADD_EQUAL = 271,
     TOKEN_SUB_EQUAL = 272,
     TOKEN_MUL_EQUAL = 273,
     TOKEN_DIV_EQUAL = 274,
     TOKEN_DOUBLE_ADD = 275,
     TOKEN_DOUBLE_SUB = 276,
     TOKEN_OR = 277,
     TOKEN_AND = 278,
     TOKEN_XOR = 279,
     TOKEN_NOT = 280,
     TOKEN_LPAREN = 281,
     TOKEN_RPAREN = 282,
     TOKEN_LCURL = 283,
     TOKEN_RCURL = 284,
     TOKEN_SEMI = 285,
     TOKEN_ERROR = 286,
     TOKEN_EOF = 287,
     TOKEN_IF_KEYWORD = 288,
     TOKEN_ELSE_KEYWORD = 289,
     TOKEN_WHILE_KEYWORD = 290,
     TOKEN_FOR_KEYWORD = 291,
     TOKEN_INT_KEYWORD = 292,
     TOKEN_FLOAT_KEYWORD = 293,
     TOKEN_CHAR_KEYWORD = 294,
     TOKEN_BOOL_KEYWORD = 295,
     TOKEN_TRUE_KEYWORD = 296,
     TOKEN_FALSE_KEYWORD = 297,
     TOKEN_IDENT = 298
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


