/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_TOKEN_H_INCLUDED
# define YY_YY_TOKEN_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TOKEN_INT = 258,               /* TOKEN_INT  */
    TOKEN_FLOAT = 259,             /* TOKEN_FLOAT  */
    TOKEN_CHAR = 260,              /* TOKEN_CHAR  */
    TOKEN_ADD = 261,               /* TOKEN_ADD  */
    TOKEN_MINUS = 262,             /* TOKEN_MINUS  */
    TOKEN_MUL = 263,               /* TOKEN_MUL  */
    TOKEN_DIV = 264,               /* TOKEN_DIV  */
    TOKEN_EQUAL = 265,             /* TOKEN_EQUAL  */
    TOKEN_DOUBLE_EQUAL = 266,      /* TOKEN_DOUBLE_EQUAL  */
    TOKEN_LESS = 267,              /* TOKEN_LESS  */
    TOKEN_GREATER = 268,           /* TOKEN_GREATER  */
    TOKEN_LESS_EQUAL = 269,        /* TOKEN_LESS_EQUAL  */
    TOKEN_GREATER_EQUAL = 270,     /* TOKEN_GREATER_EQUAL  */
    TOKEN_ADD_EQUAL = 271,         /* TOKEN_ADD_EQUAL  */
    TOKEN_SUB_EQUAL = 272,         /* TOKEN_SUB_EQUAL  */
    TOKEN_MUL_EQUAL = 273,         /* TOKEN_MUL_EQUAL  */
    TOKEN_DIV_EQUAL = 274,         /* TOKEN_DIV_EQUAL  */
    TOKEN_DOUBLE_ADD = 275,        /* TOKEN_DOUBLE_ADD  */
    TOKEN_DOUBLE_SUB = 276,        /* TOKEN_DOUBLE_SUB  */
    TOKEN_OR = 277,                /* TOKEN_OR  */
    TOKEN_AND = 278,               /* TOKEN_AND  */
    TOKEN_XOR = 279,               /* TOKEN_XOR  */
    TOKEN_NOT = 280,               /* TOKEN_NOT  */
    TOKEN_LPAREN = 281,            /* TOKEN_LPAREN  */
    TOKEN_RPAREN = 282,            /* TOKEN_RPAREN  */
    TOKEN_LCURL = 283,             /* TOKEN_LCURL  */
    TOKEN_RCURL = 284,             /* TOKEN_RCURL  */
    TOKEN_SEMI = 285,              /* TOKEN_SEMI  */
    TOKEN_ERROR = 286,             /* TOKEN_ERROR  */
    TOKEN_EOF = 287,               /* TOKEN_EOF  */
    TOKEN_IF_KEYWORD = 288,        /* TOKEN_IF_KEYWORD  */
    TOKEN_ELSE_KEYWORD = 289,      /* TOKEN_ELSE_KEYWORD  */
    TOKEN_WHILE_KEYWORD = 290,     /* TOKEN_WHILE_KEYWORD  */
    TOKEN_FOR_KEYWORD = 291,       /* TOKEN_FOR_KEYWORD  */
    TOKEN_INT_KEYWORD = 292,       /* TOKEN_INT_KEYWORD  */
    TOKEN_FLOAT_KEYWORD = 293,     /* TOKEN_FLOAT_KEYWORD  */
    TOKEN_CHAR_KEYWORD = 294,      /* TOKEN_CHAR_KEYWORD  */
    TOKEN_BOOL_KEYWORD = 295,      /* TOKEN_BOOL_KEYWORD  */
    TOKEN_TRUE_KEYWORD = 296,      /* TOKEN_TRUE_KEYWORD  */
    TOKEN_FALSE_KEYWORD = 297,     /* TOKEN_FALSE_KEYWORD  */
    TOKEN_IDENT = 298              /* TOKEN_IDENT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_TOKEN_H_INCLUDED  */
