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
BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY INTEGER ARRAY ENUM
OF IF THEN ENDIF ELSE FOR WHILE DO BEGINLOOP ENDLOOP READ WRITE
AND OR NOT TRUE FALSE RETURN COLON COMMA SEMICOLON
 %token <id_val> IDENT
%token <num_val> NUMBER
%left L_PAREN R_PAREN 
%left L_SQAURE_BRACKET R_SQUARE_BRACKET
%left MULT DIV MOD
%left ADD SUB
%left LT LTE GT GTE EQ NEQ 
%right NOT
%left AND
%left OR
%right ASSIGN

%%
prog_start: functions {printf("prog_start -> functions\n");}
                    ;

functions:  /*empty*/ {printf("functions -> epsilon\n");}
                    | function functions {printf("functions -> function functions\n");}

// declarations handles the semicolon

function:   FUNCTION ident SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY
            {printf("function -> FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY\n")}

declarations: {"printf("declarations -> epsilon\n");}
                     | declaration declarations {printf ("declarations -> declaration declarations\n");}
                     

statements:
          | statement SEMICOLON statements printf();

statement:

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