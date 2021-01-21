/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_ANALIZADOR_TAB_H_INCLUDED
# define YY_YY_ANALIZADOR_TAB_H_INCLUDED
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
    T_ID = 258,
    T_INT = 259,
    T_FLOAT = 260,
    T_IF = 261,
    T_ELSE = 262,
    T_SWITCH = 263,
    T_CASE = 264,
    T_FOR = 265,
    T_WHILE = 266,
    T_DO = 267,
    T_TDATO = 268,
    T_OPAARIT = 269,
    T_INCR2 = 270,
    T_COMA = 271,
    T_PTCOM = 272,
    T_OPRELACION = 273,
    T_OPASIG = 274,
    T_PA = 275,
    T_PC = 276,
    T_CA = 277,
    T_CC = 278,
    T_INCR = 279,
    T_ANDOR = 280,
    T_CHAR = 281,
    T_RETURN = 282,
    T_STRUCT = 283,
    T_DOSPTO = 284,
    T_BREAK = 285,
    T_CAR = 286
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 19 "analizador.y" /* yacc.c:1921  */

	char *valor;

#line 94 "analizador.tab.h" /* yacc.c:1921  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ANALIZADOR_TAB_H_INCLUDED  */
