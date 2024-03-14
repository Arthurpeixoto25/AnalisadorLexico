%{
#include <iostream>
#include "tokens.h"
using std::cout;
%}

%option noyywrap
delim	     [ \t\n]
brancos      {delim}+
letraM       [A-Z]
letra	     [a-z]
digito	     [0-9]
classe	     {letraM}({letra}|_|{letraM})*
num	         {digito}+(\.{digito}+)?(E[+-]?{digito}+)?
individuo    {letraM}{letra}+{num}+
has          has{letraM}{letra}+
is           is{letraM}{letra}+OF
propriedades {letra}({letraM}|{letra})+
reservado   {letraM}({letra}|{letraM})+:
tdados      {letra}+:{letra}+
%%
{tdados}          return TDADOS;
EquivalentTo    return EQUIVALENTTO;
SubClassOf      return SUBCLASSOF;
DisjointClasses return DISJOINTCLASSES;
only            return ONLY;
some            return SOME;
all             return ALL;
value           return VALUE;
min             return MIN;
max             return MAX;
exactly         return EXACTLY;
that		    return THAT;
not             return NOT;
and             return AND;
or              return OR;
{propriedades}  return PROPRIEDADES;
{has}           return HAS;
{is}            return IS;
{brancos}	;   // nenhuma ação e nenhum retorno
{num}	        return NUM; 
"<"		    return RELOP; 
"["		    return RELOP; 
"]"		    return RELOP; 
">" 		return RELOP; 
"{"		    return RELOP;
"}"		    return RELOP; 
"("		    return RELOP;
")"		    return RELOP;
","		    return RELOP;
{reservado} return RESERVADO;
{classe}		return CLASS;
{individuo}     return INDIVIDUALS;
.           cout << YYText() << " é um token inválido!\n";
%%

// nenhuma função auxiliar é necessária
