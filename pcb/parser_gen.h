/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_NIMPCB_YY_PCB_PARSER_GEN_H_INCLUDED
# define YY_NIMPCB_YY_PCB_PARSER_GEN_H_INCLUDED
/* Debug traces.  */
#ifndef NIMPCB_YYDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define NIMPCB_YYDEBUG 1
#  else
#   define NIMPCB_YYDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define NIMPCB_YYDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined NIMPCB_YYDEBUG */
#if NIMPCB_YYDEBUG
extern int nimpcb_yydebug;
#endif

/* Token type.  */
#ifndef NIMPCB_YYTOKENTYPE
# define NIMPCB_YYTOKENTYPE
  enum nimpcb_yytokentype
  {
    WORD_ATTRIBUTE = 258,
    WORD_CONNECT = 259,
    WORD_DRC = 260,
    WORD_ELEMENT = 261,
    WORD_ELEMENTARC = 262,
    WORD_ELEMENTLINE = 263,
    WORD_FILEVERSION = 264,
    WORD_FLAGS = 265,
    WORD_GRID = 266,
    WORD_GROUPS = 267,
    WORD_LAYER = 268,
    WORD_LINE = 269,
    WORD_MIL = 270,
    WORD_MM = 271,
    WORD_NET = 272,
    WORD_NETLIST = 273,
    WORD_PAD = 274,
    WORD_PCB = 275,
    WORD_PIN = 276,
    WORD_POLYAREA = 277,
    WORD_RAT = 278,
    WORD_STYLES = 279,
    WORD_SYMBOL = 280,
    WORD_SYMBOLLINE = 281,
    WORD_THERMAL = 282,
    STRING = 283,
    CHAR = 284,
    INTEGER = 285,
    FLOAT = 286
  };
#endif

/* Value type.  */
#if ! defined NIMPCB_YYSTYPE && ! defined NIMPCB_YYSTYPE_IS_DECLARED

union NIMPCB_YYSTYPE
{
#line 13 "pcb/parser.y" /* yacc.c:1909  */

    char *sval;
    char cval;
    int64_t ival;
    double fval;
    uint32_t u32val;

#line 102 "pcb/parser_gen.h" /* yacc.c:1909  */
};

typedef union NIMPCB_YYSTYPE NIMPCB_YYSTYPE;
# define NIMPCB_YYSTYPE_IS_TRIVIAL 1
# define NIMPCB_YYSTYPE_IS_DECLARED 1
#endif


extern NIMPCB_YYSTYPE nimpcb_yylval;

int nimpcb_yyparse (void);

#endif /* !YY_NIMPCB_YY_PCB_PARSER_GEN_H_INCLUDED  */
