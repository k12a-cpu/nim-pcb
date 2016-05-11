%option prefix="nimpcb_yy"
%option noyywrap
%option yylineno

%{

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "parser_gen.h"

%}

%%

[ \t\r\n]               ;
#.*\n                   ;

\[                      { return '['; }
\]                      { return ']'; }
\(                      { return '('; }
\)                      { return ')'; }

Attribute               { return WORD_ATTRIBUTE; }
Connect                 { return WORD_CONNECT; }
DRC                     { return WORD_DRC; }
ElementArc              { return WORD_ELEMENTARC; }
ElementLine             { return WORD_ELEMENTLINE; }
Element                 { return WORD_ELEMENT; }
FileVersion             { return WORD_FILEVERSION; }
Flags                   { return WORD_FLAGS; }
Grid                    { return WORD_GRID; }
Groups                  { return WORD_GROUPS; }
Layer                   { return WORD_LAYER; }
Line                    { return WORD_LINE; }
mil                     { return WORD_MIL; }
mm                      { return WORD_MM; }
NetList                 { return WORD_NETLIST; }
Net                     { return WORD_NET; }
Pad                     { return WORD_PAD; }
PCB                     { return WORD_PCB; }
Pin                     { return WORD_PIN; }
PolyArea                { return WORD_POLYAREA; }
Rat                     { return WORD_RAT; }
Styles                  { return WORD_STYLES; }
SymbolLine              { return WORD_SYMBOLLINE; }
Symbol                  { return WORD_SYMBOL; }
Thermal                 { return WORD_THERMAL; }

-?[0-9]+\.[0-9]+        { nimpcb_yylval.fval = atof(nimpcb_yytext); return FLOAT; }
-?[0-9]+\.              { nimpcb_yylval.fval = atof(nimpcb_yytext); return FLOAT; }
-?\.[0-9]+              { nimpcb_yylval.fval = atof(nimpcb_yytext); return FLOAT; }
-?[0-9]+                { nimpcb_yylval.ival = (int64_t) atoi(nimpcb_yytext); return INTEGER; }

\"[^"]*\"               { char *str = strdup(nimpcb_yytext);
                          str[strlen(str)-1] = '\0';
                          str++;
                          nimpcb_yylval.sval = str;
                          return STRING; }

\'.\'                   { nimpcb_yylval.cval = nimpcb_yytext[1]; return CHAR; }

.                       { char msg[256];
                          snprintf(msg, 256, "invalid character: %c", nimpcb_yytext[0]);
                          nimpcb_yyerror(msg); }

%%
