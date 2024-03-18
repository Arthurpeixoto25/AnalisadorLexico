%{
    
    #include <iostream>
    #include <stdio.h>
    using std::cout;

    int yylex(void);
    int yyparse(void);
    void yyerror(const char *);

    
%}

%token ONLY SOME ALL VALUE MIN MAX EXACTLY THAT NOT AND OR PROPRIEDADES HAS IS NUM RELOP RESERVADO CLASS TDADOS
%token EQUIVALENTTO INDIVIDUALS SUBCLASSOF DISJOINTCLASSES RCLASS '[' ']' '(' ')' ',' '{' '}' 

%%

classe: classeDefinida classe
    | classePrimitiva classe
    | classe classe
    | 
    ;

classe: RESERVADO CLASS DISJOINTCLASSES INDIVIDUALS 
    ;

classePrimitiva: RCLASS CLASS SUBCLASSOF DISJOINTCLASSES INDIVIDUALS 
    ;

classeDefinida: RCLASS CLASS EQUIVALENTTO INDIVIDUALS
    ;

equivalent: 
    ;

INDIVIDUALS: RINDIVIDUALS individual_instanciees // :
    |
    ;

individual_instanciees: individual_instanciees RELOP IDCLASS
					| IDCLASS
					;    

disjoint: RDISJOINT seqClasses
    |
    ;

subclass: RSUBCLASS seqProp // :
    | RSUBCLASS classConnect
    ;

classConnect: 

seqClasses:    

seqProp:
    
connect: 

PROPRIEDADE: PROPRIEDADES some
    | PROPRIEDADES only        
    | PROPRIEDADES value
    | PROPRIEDADES qntd
    | PROPRIEDADES EXACTLY
    | PROPRIEDADES ALL
    | '(' prop ')'
    ;

only: ONLY 
    ;


some:

especificardtype: '

qntd: 

value: 

%%
