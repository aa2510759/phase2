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

function:   FUNCTION ident SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statement SEMICOLON statements END_BODY 
 {printf("function -> FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statement SEMICOLON statements END_BODY\n")}

identifiers: /*empty*/ {printf("identifiers -> epsilon\n");} 
            |  COMMA IDENT identifiers {printf("identifiers -> COMMA IDENT identifiers\n");}

declarations: /*empty*/ {printf("declarations -> epsilon\n");}
            | declaration SEMICOLON declarations {printf ("declarations -> declaration SEMICOLON declarations\n");}

declaration:   IDENT identifiers COLON ENUM L_PAREN IDENT identifiers R_PAREN {printf("declaration -> IDENT identifiers COLON ENUM L_PAREN IDENT identifiers R_PAREN\n");}  
            |  IDENT identifiers COLON INTEGER {printf ("declaration -> IDENT identifiers COLON INTEGER\n");}
            |  IDENT identifiers COLON ARRAY L_SQAURE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER {printf("declaration ->\n IDENT identifiers COLON ARRAY L_SQAURE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER");}

statements: /*empty*/ printf("statements -> epsilon\n");
            | statement SEMICOLON statements 

statement: 

bool_expr:

relation_and_expr:

relation_expr:

comp:

expression: 

multiplicative_expr:

term: 

var: IDENT
            | IDENT L_SQAURE_BRACKET expression R_SQUARE_BRACKET

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