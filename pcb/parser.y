%define api.prefix {nimpcb_yy}

%{

#include <stdint.h>
#include <stdio.h>

#include "lexer_gen.h"
#include "parser.h"

%}

%union{
    char *sval;
    char cval;
    int64_t ival;
    double fval;
    uint32_t u32val;
}

%token WORD_ATTRIBUTE
%token WORD_CONNECT
%token WORD_DRC
%token WORD_ELEMENT
%token WORD_ELEMENTARC
%token WORD_ELEMENTLINE
%token WORD_FILEVERSION
%token WORD_FLAGS
%token WORD_GRID
%token WORD_GROUPS
%token WORD_LAYER
%token WORD_LINE
%token WORD_MIL
%token WORD_MM
%token WORD_NET
%token WORD_NETLIST
%token WORD_PAD
%token WORD_PCB
%token WORD_PIN
%token WORD_POLYAREA
%token WORD_RAT
%token WORD_STYLES
%token WORD_SYMBOL
%token WORD_SYMBOLLINE
%token WORD_THERMAL

%token <sval> STRING
%token <cval> CHAR
%token <ival> INTEGER
%token <fval> FLOAT

%type <ival> dimension_new dimension_old
%type <fval> float
%type <u32val> pcb_flags object_flags

%%

pcb
    : items
    ;

items
    : items item
    | item
    ;

item
    : attribute_item
    | drc_item
    | element_item
    | fileversion_item
    | flags_item
    | grid_item
    | groups_item
    | layer_item
    | netlist_item
    | pcb_item
    | polyarea_item
    | rat_item
    | styles_item
    | symbol_item
    | thermal_item
    ;

e_items_opt
    : e_items
    | // empty
    ;

e_items
    : e_items e_item
    | e_item
    ;

e_item
//    | elem_attribute_item
    : elem_elementarc_item
    | elem_elementline_item
//    | elem_mark_item
    | elem_pad_item
    | elem_pin_item
    ;

l_items_opt
    : l_items
    | // empty
    ;

l_items
    : l_items l_item
    | l_item
    ;

l_item
    : line_item
    ;

n_items_opt
    : n_items
    | // empty
    ;

n_items
    : n_items n_item
    | n_item
    ;

n_item
    : connect_item
    ;

nl_items_opt
    : nl_items
    | // empty
    ;

nl_items
    : nl_items nl_item
    | nl_item
    ;

nl_item
    : net_item
    ;

attribute_item
    : WORD_ATTRIBUTE '(' STRING STRING ')'
        { nimpcb_process_attribute($3, $4); }
    ;

connect_item
    : WORD_CONNECT '(' STRING ')'
        { nimpcb_process_connect($3); }
    ;

drc_item
    : WORD_DRC '[' dimension_new dimension_new dimension_new dimension_new dimension_new dimension_new ']'
        { nimpcb_process_drc($3, $4, $5, $6, $7, $8); }
    | WORD_DRC '[' dimension_new dimension_new dimension_new dimension_new ']'
        { nimpcb_process_drc($3, $4, $5, $6, 0, 0); }
    | WORD_DRC '[' dimension_new dimension_new dimension_new ']'
        { nimpcb_process_drc($3, $4, $5, 0, 0, 0); }
    ;

element_item
    : WORD_ELEMENT '[' object_flags STRING STRING STRING dimension_new dimension_new dimension_new dimension_new INTEGER INTEGER object_flags ']' '('
        { nimpcb_process_element_start($3, $4, $5, $6, 1, $7, $8, $9, $10, $11, $12, $13); }
      e_items_opt ')'
        { nimpcb_process_element_end(); }
//    | WORD_ELEMENT '(' object_flags STRING STRING STRING dimension_old dimension_old dimension_old dimension_old INTEGER INTEGER object_flags ')' '('
//        { nimpcb_process_element_start($3, $4, $5, $6, 1, $7, $8, $9, $10, $11, $12, $13); }
//      e_items_opt ')'
//        { nimpcb_process_element_end(); }
//    | WORD_ELEMENT '(' object_flags STRING STRING STRING dimension_old dimension_old INTEGER INTEGER object_flags ')' '('
//        { nimpcb_process_element_start($3, $4, $5, $6, 0, 0, 0, $7, $8, $9, $10, $11); }
//      e_items_opt ')'
//        { nimpcb_process_element_end(); }
//    | WORD_ELEMENT '(' object_flags STRING STRING dimension_old dimension_old INTEGER INTEGER object_flags ')' '('
//        { nimpcb_process_element_start($3, $4, $5, "", 0, 0, 0, $6, $7, $8, $9, $10); }
//      e_items_opt ')'
//        { nimpcb_process_element_end(); }
//    | WORD_ELEMENT '(' STRING STRING dimension_old dimension_old INTEGER INTEGER object_flags ')' '('
//        { nimpcb_process_element_start(0, $3, $4, "", 0, 0, 0, $5, $6, $7, $8, $9); }
//      e_items_opt ')'
//        { nimpcb_process_element_end(); }
    ;

elem_elementarc_item
    : WORD_ELEMENTARC '[' dimension_new dimension_new dimension_new dimension_new INTEGER INTEGER dimension_new ']'
        { nimpcb_process_elem_elementarc(0, $3, $4, $5, $6, $7, $8, $9); }
    | WORD_ELEMENTARC '(' dimension_old dimension_old dimension_old dimension_old INTEGER INTEGER dimension_old ')'
        { nimpcb_process_elem_elementarc(1, $3, $4, $5, $6, $7, $8, $9); }
    ;

elem_elementline_item
    : WORD_ELEMENTLINE '[' dimension_new dimension_new dimension_new dimension_new dimension_new ']'
        { nimpcb_process_elem_elementline(0, $3, $4, $5, $6, $7); }
    | WORD_ELEMENTLINE '(' dimension_old dimension_old dimension_old dimension_old dimension_old ')'
        { nimpcb_process_elem_elementline(1, $3, $4, $5, $6, $7); }
    ;

elem_pad_item
    : WORD_PAD '[' dimension_new dimension_new dimension_new dimension_new dimension_new dimension_new dimension_new STRING STRING object_flags ']'
        { nimpcb_process_elem_pad(0, $3, $4, $5, $6, $7, $8, $9, $10, $11, $12); }
    | WORD_PAD '(' dimension_old dimension_old dimension_old dimension_old dimension_old dimension_old dimension_old STRING STRING object_flags ')'
        { nimpcb_process_elem_pad(0, $3, $4, $5, $6, $7, $8, $9, $10, $11, $12); }
    | WORD_PAD '(' dimension_old dimension_old dimension_old dimension_old dimension_old STRING STRING object_flags ')'
        { nimpcb_process_elem_pad(1, $3, $4, $5, $6, $7, 0, 0, $8, $9, $10); }
    | WORD_PAD '(' dimension_old dimension_old dimension_old dimension_old dimension_old STRING object_flags ')'
        { nimpcb_process_elem_pad(1, $3, $4, $5, $6, $7, 0, 0, $8, "", $9); }
    ;

elem_pin_item
    : WORD_PIN '[' dimension_new dimension_new dimension_new dimension_new dimension_new dimension_new STRING STRING object_flags ']'
        { nimpcb_process_elem_pin(0, $3, $4, $5, $6, $7, $8, $9, $10, $11); }
    | WORD_PIN '(' dimension_old dimension_old dimension_old dimension_old dimension_old dimension_old STRING STRING object_flags ')'
        { nimpcb_process_elem_pin(0, $3, $4, $5, $6, $7, $8, $9, $10, $11); }
    | WORD_PIN '(' dimension_old dimension_old dimension_old dimension_old STRING STRING object_flags ')'
        { nimpcb_process_elem_pin(1, $3, $4, $5, 0, 0, $6, $7, $8, $9); }
    | WORD_PIN '(' dimension_old dimension_old dimension_old dimension_old STRING object_flags ')'
        { nimpcb_process_elem_pin(1, $3, $4, $5, 0, 0, $6, $7, "", $8); }
    | WORD_PIN '(' dimension_old dimension_old dimension_old STRING object_flags ')'
        { nimpcb_process_elem_pin(1, $3, $4, $5, 0, 0, 0, $6, "", $7); }
    ;

fileversion_item
    : WORD_FILEVERSION '[' INTEGER ']'
        { nimpcb_process_fileversion($3); }
    ;

flags_item
    : WORD_FLAGS '(' pcb_flags ')'
        { nimpcb_process_flags($3); }
    ;

grid_item
    : WORD_GRID '[' float dimension_new dimension_new INTEGER ']'
        { nimpcb_process_grid($3, $4, $5, $6); }
    | WORD_GRID '(' float dimension_old dimension_old INTEGER ')'
        { nimpcb_process_grid($3, $4, $5, $6); }
    | WORD_GRID '(' float dimension_old dimension_old ')'
        { nimpcb_process_grid($3, $4, $5, 0); }
    ;

groups_item
    : WORD_GROUPS '(' STRING ')'
        { nimpcb_process_groups($3); }
    ;

layer_item
    : WORD_LAYER '(' INTEGER STRING STRING ')' '('
        { nimpcb_process_layer_start($3, $4, $5); }
      l_items_opt ')'
        { nimpcb_process_layer_end(); }
    | WORD_LAYER '(' INTEGER STRING ')' '('
        { nimpcb_process_layer_start($3, $4, ""); }
      l_items_opt ')'
        { nimpcb_process_layer_end(); }
    ;

line_item
    : WORD_LINE '[' dimension_new dimension_new dimension_new dimension_new dimension_new dimension_new object_flags ']'
        { nimpcb_process_line($3, $4, $5, $6, $7, $8, $9); }
    | WORD_LINE '(' dimension_old dimension_old dimension_old dimension_old dimension_old dimension_old object_flags ')'
        { nimpcb_process_line($3, $4, $5, $6, $7, $8, $9); }
    | WORD_LINE '(' dimension_old dimension_old dimension_old dimension_old dimension_old object_flags ')'
        { nimpcb_process_line($3, $4, $5, $6, $7, 0, $8); }
    ;

net_item
    : WORD_NET '(' STRING STRING ')' '('
        { nimpcb_process_net_start($3, $4); }
      n_items_opt ')'
        { nimpcb_process_net_end(); }
    ;

netlist_item
    : WORD_NETLIST '(' ')' '('
        { nimpcb_process_netlist_start(); }
      nl_items_opt ')'
        { nimpcb_process_netlist_end(); }
    ;

pcb_item
    : WORD_PCB '[' STRING dimension_new dimension_new ']'
        { nimpcb_process_pcb($3, $4, $5); }
    | WORD_PCB '(' STRING dimension_old dimension_old ')'
        { nimpcb_process_pcb($3, $4, $5); }
    | WORD_PCB '(' STRING ')'
        { nimpcb_process_pcb_default_size($3); }
    ;

polyarea_item
    : WORD_POLYAREA '[' float ']'
        { nimpcb_process_polyarea($3); }
    ;

rat_item
    : WORD_RAT '[' dimension_new dimension_new INTEGER dimension_new dimension_new INTEGER object_flags ']'
        { nimpcb_process_rat($3, $4, $5, $6, $7, $8, $9); }
    | WORD_RAT '(' dimension_old dimension_old INTEGER dimension_old dimension_old INTEGER object_flags ')'
        { nimpcb_process_rat($3, $4, $5, $6, $7, $8, $9); }
    ;

styles_item
    : WORD_STYLES '[' STRING ']'
        { nimpcb_process_styles($3); }
    | WORD_STYLES '(' STRING ')'
        { nimpcb_process_styles($3); }
    ;

symbol_item
    : WORD_SYMBOL '[' CHAR dimension_new ']' '('
        { nimpcb_process_symbol_start($3, $4); }
      symbolline_items_opt ')'
        { nimpcb_process_symbol_end(); }
    | WORD_SYMBOL '(' CHAR dimension_old ')' '('
        { nimpcb_process_symbol_start($3, $4); }
      symbolline_items_opt ')'
        { nimpcb_process_symbol_end(); }
    ;

symbolline_items_opt
    : symbolline_items
    |
    ;

symbolline_items
    : symbolline_items symbolline_item
    | symbolline_item
    ;

symbolline_item
    : WORD_SYMBOLLINE '[' dimension_new dimension_new dimension_new dimension_new dimension_new ']'
        { nimpcb_process_symbolline($3, $4, $5, $6, $7); }
    | WORD_SYMBOLLINE '(' dimension_old dimension_old dimension_old dimension_old dimension_old ')'
        { nimpcb_process_symbolline($3, $4, $5, $6, $7); }
    ;

thermal_item
    : WORD_THERMAL '[' float ']'
        { nimpcb_process_thermal($3); }
    ;

dimension_new
    : INTEGER
        { $$ = $1; }
    | FLOAT
        { $$ = $1; }
    | INTEGER WORD_MIL
        { $$ = (int64_t) ($1 * 100); }
    | FLOAT WORD_MIL
        { $$ = (int64_t) ($1 * 100.0); }
    | INTEGER WORD_MM
        { $$ = (int64_t) (((double) $1) * 3937.01); }
    | FLOAT WORD_MM
        { $$ = (int64_t) ($1 * 3937.01); }
    ;

dimension_old
    : INTEGER
        { $$ = (int64_t) ($1 * 100); }
    | FLOAT
        { $$ = (int64_t) ($1 * 100.0); }
    ;

float
    : INTEGER
        { $$ = (double) $1; }
    | FLOAT
        { $$ = $1; }
    ;

pcb_flags
    : STRING
        { $$ = nimpcb_parse_pcb_flags_string($1); }
    | INTEGER
        { $$ = (uint32_t) $1; }
    ;

object_flags
    : STRING
        { $$ = nimpcb_parse_object_flags_string($1); }
    | INTEGER
        { $$ = (uint32_t) $1; }
    ;

%%

void nimpcb_parse_stdin() {
    nimpcb_yyin = stdin;
    while (!feof(nimpcb_yyin)) {
        nimpcb_yyparse();
    }
    nimpcb_yyin = NULL;
}

void nimpcb_parse_file(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file != NULL) {
        nimpcb_yyin = file;
        while (!feof(nimpcb_yyin)) {
            nimpcb_yyparse();
        }
        nimpcb_yyin = NULL;
        fclose(file);
    }
}
