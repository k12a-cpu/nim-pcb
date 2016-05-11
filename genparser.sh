#!/bin/sh

flex --header-file=pcb/lexer_gen.h --outfile=pcb/lexer_gen.c pcb/lexer.l
bison --defines=pcb/parser_gen.h --output=pcb/parser_gen.c pcb/parser.y
