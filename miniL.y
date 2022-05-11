%{
    #include <stdio.h>
    #include <stdlib.h>
    void yyerror(const char *msg);
    extern int currLine;
    extern int currPos;
    FILE * yyin;
%}

%union{
  int num_val;
  char* id_val;
}

%error-verbose
%start prog_start
%token  FUNCTION BEGIN_PARAMS END END_PARAMS 
%token BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY INTEGER ARRAY ENUM
%token OF IF THEN ENDIF ELSE FOR WHILE DO BEGINLOOP ENDLOOP READ WRITE
%token TRUE FALSE RETURN COLON COMMA SEMICOLON
%token <id_val> IDENT
%token <num_val> NUMBER
%left L_PAREN R_PAREN 
%left L_SQAURE_BRACKET R_SQUARE_BRACKET
%left MULT DIV MOD
%left ADD SUB
%left LT LTE GT GTE EQ NEQ 
%right NOT
%left AND
%left OR ASSIGN


%%
prog_start: functions {printf("prog_start -> functions\n");}
                    ;

functions:  /*empty*/ {printf("functions -> epsilon\n");}
            | function functions {printf("functions -> function functions\n");}

function:   FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY 
 {printf("function -> FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY\n")}

idents: /*empty*/ {printf("idents -> epsilon\n");} 
            |  COMMA IDENT identifiers {printf("idents -> COMMA IDENT idents\n");}

identifiers: IDENT idents {printf("identifiers -> IDENT idents\n");}

declarations: /*empty*/ {printf("declarations -> epsilon\n");}
            | declaration SEMICOLON declarations {printf ("declarations -> declaration SEMICOLON declarations\n");}

declaration:   identifiers COLON ENUM L_PAREN identifiers R_PAREN {printf("declaration -> identifiers COLON ENUM L_PAREN identifiers R_PAREN\n");}  
            |  identifiers COLON INTEGER {printf ("declaration -> identifiers COLON INTEGER\n");}
            |  identifiers COLON ARRAY L_SQAURE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER {printf("declaration ->\n identifiers COLON ARRAY L_SQAURE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER");}

states: /*empty*/ {printf("states -> epsilon\n");}
            | statement SEMICOLON state {printf ("states -> statement SEMICOLON states\n");}

statements: statement SEMICOLON states {printf("statements -> statement SEMICOLON states\n");}

statement: var ASSIGN expression {printf("statement -> var ASSIGN expression\n");}
            | IF bool_expr THEN statements ENDIF {printf("statement -> IF bool_expr THEN statements ENDIF\n");}
            | IF bool_expr THEN statements ELSE statements ENDIF {printf("statement -> IF bool_expr THEN statements ELSE statements ENDIF\n");}
            | WHILE bool_expr BEGINLOOP statements END_LOOP {printf("statement -> WHILE bool_expr BEGINLOOP statements END_LOOP\n");}
            | DO BEGINLOOP statements END_LOOP WHILE bool_expr {printf("statement -> DO BEGINLOOP statements END_LOOP WHILE bool_expr\n");}
            | READ var vars {printf("statement -> READ var vars\n");}
            | WRITE var vars {printf("statement -> WRITE var vars\n");}
            | CONTINUE {printf("statement -> CONTINUE\n");}
            | RETURN expression {printf("statement ->expression\n");}

or_expr: /*empty*/ {printf("or_expr -> epsilon\n");}
            | OR relation_and_expr {printf("or_expr -> OR relation_and_expr\n");}

and_expr: /*empty*/ {printf("and_expr -> epsilon\n");}
            | AND relation_expr {printf("and_expr -> OR relation_expr\n");}
            

bool_expr: relation_and_expr {printf("bool_expr -> relation_and_expr\n");}
            | relation_and_expr or_expr {printf("relation_and_expr or_expr\n");}

relation_and_expr: relation_expr {printf("relation_and_expr -> relation_expr\n");}
            | relation_expr and_expr {printf("relation_and_expr -> relation_expr and_expr\n");}

relation_expr: expression comp expression {printf("relation_expr -> expression comp expression\n");}
            | NOT expression comp expression {printf("relation_expr -> NOT expression comp expression");}
            | TRUE {printf("relation_expr -> TRUE\n");}
            | NOT TRUE {printf("relation_expr -> NOT TRUE\n");}
            | FALSE {printf("relation_expr -> FALSE\n");}
            | NOT FLASE {printf("relation_expr -> NOT FALSE\n");}
            | L_PAREN bool_expr R_PAREN {printf("relation_expr -> L_PAREN bool_expr R_PAREN\n");}
            | NOT L_PAREN bool_expr R_PAREN {printf("relation_expr -> NOT L_PAREN bool_expr R_PAREN\n");}

comp: EQ {printf("comp -> EQ\n");}
            | NEQ {printf("comp -> NEQ\n");}
            | LT {printf("comp -> LT\n");}
            | GT {printf("comp -> GT\n");}
            | LTE {printf("comp -> LTE\n");}
            | GTE {printf("comp -> GTE\n");}

expressions: /*empty*/ {printf("expressions -> epsilon\n");}
            | expression {printf ("expressions -> expression\n")}
            | expression COMMA {printf(expressions -> expression COMMA);}

expr: /*empty*/ {printf("expr -> epsilon\n");}
            | ADD multiplicative_expr {printf("expr -> ADD multiplicative_expr\n");}
            | SUB multiplicative_expr {printf("expr -> SUB multiplicative_expr\n");}

expression: multiplicative_expr {printf("expression -> multiplicative_expr\n");}
            | multiplicative_expr expr {printf("expression -> multiplicative_expr expr\n");}

mult_expr: /*empty*/ {printf("mult_expr -> epsilon\n");}
            | MULT term {printf("mult_expr -> MULT term\n");}
            | DIV term {printf("mult_expr -> DIV term\n");}
            | MOD term {printf("mult_expr -> MOD term\n");}

multiplicative_expr: term {printf(multiplicative_expr -> term);}
            | term mult_expr {printf("multiplicative_expr -> term mult_expr\n")}


term: var {printf("term -> var\n");}
            | SUB var {printf("term -> SUB var\n");}
            | NUMBER {printf("term -> NUMBER\n");}
            | SUB NUMBER {printf("term -> SUB NUMBER\n");}
            | L_PAREN expression R_PAREN {printf("term -> L_PAREN expression R_PAREN\n");}
            | SUB L_PAREN expression R_PAREN {printf("term -> SUB L_PAREN expression R_PAREN\n");}
            | IDENT L_PAREN expressions R_PAREN {printf("term -> L_PAREN expressions R_PAREN\n");}

vars: /*empty*/ {printf("vars -> epsilon\n");}
            | COMMA var vars {printf("vars -> COMMA var vars\n");}

var: IDENT {printf("var -> IDENT\n");}
            | IDENT L_SQAURE_BRACKET expression R_SQUARE_BRACKET {printf("var -> IDENT L_SQAURE_BRACKET expression R_SQUARE_BRACKET\n");}

%%
int main(int argc, char **argv) {
   if (argc > 1) {
      yyin = fopen(argv[1], "r");
      if (yyin == NULL){
         printf("syntax: %s filename\n", argv[1]);
      }
   }
   yyparse();
   return 0;
}

void yyerror(const char *msg) {
    printf("** Line %d, position %d: %s\n", currLine, currPos, msg);
}