#include "lex.h"
#include "tokens.h"
#include <iostream>
using std::cout;

void Lex::Start()
{
    int contadorTDADOS = 0;
    int contadorCLASS = 0;
    int contadorEQUIVALENTTO = 0;
    int contadorINDIVIDUALS = 0;
    int contadorSUBCLASSOF = 0;
    int contadorDISJOINTCLASSES = 0;
    int contadorONLY = 0;
    int contadorSOME = 0;
    int contadorALL = 0;
    int contadorVALUE = 0;
    int contadorMIN = 0;
    int contadorMAX = 0;
    int contadorNOT = 0;
    int contadorAND = 0;
    int contadorOR = 0;
    int contadorEXACTLY = 0;
    int contadorTHAT = 0;
    int contadorRESERVADO = 0;
    int contadorHAS = 0;
    int contadorIS = 0;
    int contadorNUM = 0;
    int contadorRELOP = 0;
    int contadorPROPRIEDADES = 0;

    while ((lookahead = scanner.yylex()) != 0)
    {
        switch (lookahead)
        {
            case TDADOS:
                cout << "Tipo de dados:" << scanner.YYText() << "\n";
                contadorTDADOS++;
                cout << "Contador TDADOS: " << contadorTDADOS << "\n";
                break;

            case CLASS:
                cout << "CLASS: " << scanner.YYText() << "\n";
                contadorCLASS++;
                cout << "Contador CLASS: " << contadorCLASS << "\n";
                break;

            case EQUIVALENTTO:
                cout << "EQUIVALENTTO" << "\n";
                contadorEQUIVALENTTO++;
                cout << "Contador EQUIVALENTTO: " << contadorEQUIVALENTTO << "\n";
                break;

            case INDIVIDUALS:
                cout << "INDIVIDUALS:" << scanner.YYText() << "\n";
                contadorINDIVIDUALS++;
                cout << "Contador INDIVIDUALS: " << contadorINDIVIDUALS << "\n";
                break;

            case SUBCLASSOF:
                cout << "SUBCLASSOF" << "\n";
                contadorSUBCLASSOF++;
                cout << "Contador SUBCLASSOF: " << contadorSUBCLASSOF << "\n";
                break;

            case DISJOINTCLASSES:
                cout << "DISJOINTCLASSES" << "\n";
                contadorDISJOINTCLASSES++;
                cout << "Contador DISJOINTCLASSES: " << contadorDISJOINTCLASSES << "\n";
                break;

            case ONLY:
                cout << "ONLY" << "\n";
                contadorONLY++;
                cout << "Contador ONLY: " << contadorONLY << "\n";
                break;

            case SOME:
                cout << "SOME" << "\n";
                contadorSOME++;
                cout << "Contador SOME: " << contadorSOME << "\n";
                break;

            case ALL:
                cout << "ALL" << "\n";
                contadorALL++;
                cout << "Contador ALL: " << contadorALL << "\n";
                break;

            case VALUE:
                cout << "VALUE" << "\n";
                contadorVALUE++;
                cout << "Contador VALUE: " << contadorVALUE << "\n";
                break;

            case MIN:
                cout << "MIN" << "\n";
                contadorMIN++;
                cout << "Contador MIN: " << contadorMIN << "\n";
                break;

            case MAX:
                cout << "MAX" << "\n";
                contadorMAX++;
                cout << "Contador MAX: " << contadorMAX << "\n";
                break;

            case NOT:
                cout << "NOT" << "\n";
                contadorNOT++;
                cout << "Contador NOT: " << contadorNOT << "\n";
                break;

            case AND:
                cout << "AND" << "\n";
                contadorAND++;
                cout << "Contador AND: " << contadorAND << "\n";
                break;

            case OR:
                cout << "OR" << "\n";
                contadorOR++;
                cout << "Contador OR: " << contadorOR << "\n";
                break;

            case EXACTLY:
                cout << "EXACTLY" << "\n";
                contadorEXACTLY++;
                cout << "Contador EXACTLY: " << contadorEXACTLY << "\n";
                break;

            case THAT:
                cout << "THAT" << "\n";
                contadorTHAT++;
                cout << "Contador THAT: " << contadorTHAT << "\n";
                break;

            case RESERVADO:
                cout << "RESERVADO" << "\n";
                contadorRESERVADO++;
                cout << "Contador RESERVADO: " << contadorRESERVADO << "\n";
                break;

            case HAS:
                cout << "HAS:" << scanner.YYText() << "\n";
                contadorHAS++;
                cout << "Contador HAS: " << contadorHAS << "\n";
                break;

            case IS:
                cout << "IS:" << scanner.YYText() << "\n";
                contadorIS++;
                cout << "Contador IS: " << contadorIS << "\n";
                break;

            case NUM:
                cout << "NUM: " << scanner.YYText() << "\n";
                contadorNUM++;
                cout << "Contador NUM: " << contadorNUM << "\n";
                break;

            case RELOP:
                cout << "RELOP: " << scanner.YYText() << "\n";
                contadorRELOP++;
                cout << "Contador RELOP: " << contadorRELOP << "\n";
                break;

            case PROPRIEDADES:
                cout << "PROPRIEDADES:" << scanner.YYText() << "\n";
                contadorPROPRIEDADES++;
                cout << "Contador PROPRIEDADES: " << contadorPROPRIEDADES << "\n";
                break;
        }
    }
   cout << "+------------------------+----------------------+\n";
    cout << "| Tipo de Contador       | Contagem             |\n";
    cout << "+------------------------+----------------------+\n";
    cout << "| Contador TDADOS        | " << contadorTDADOS << "                    |\n";
    cout << "| Contador CLASS         | " << contadorCLASS << "                   |\n";
    cout << "| Contador EQUIVALENTTO  | " << contadorEQUIVALENTTO << "               |\n";
    cout << "| Contador INDIVIDUALS    | " << contadorINDIVIDUALS << "               |\n";
    cout << "| Contador SUBCLASSOF    | " << contadorSUBCLASSOF << "               |\n";
    cout << "| Contador DISJOINTCLASSES| " << contadorDISJOINTCLASSES << "           |\n"; 
    cout << "| Contador ONLY          | " << contadorONLY << "                    |\n";
    cout << "| Contador SOME          | " << contadorSOME << "                    |\n";
    cout << "| Contador ALL           | " << contadorALL << "                     |\n";
    cout << "| Contador VALUE         | " << contadorVALUE << "                   |\n";
    cout << "| Contador MIN           | " << contadorMIN << "                     |\n";
    cout << "| Contador MAX           | " << contadorMAX << "                     |\n";
    cout << "| Contador NOT           | " << contadorNOT << "                     |\n";
    cout << "| Contador AND           | " << contadorAND << "                     |\n";
    cout << "| Contador OR            | " << contadorOR << "                      |\n";
    cout << "| Contador EXACTLY       | " << contadorEXACTLY << "                 |\n";
    cout << "| Contador THAT          | " << contadorTHAT << "                    |\n";
    cout << "| Contador RESERVADO     | " << contadorRESERVADO << "                |\n";
    cout << "| Contador HAS           | " << contadorHAS << "                     |\n";
    cout << "| Contador IS            | " << contadorIS << "                      |\n";
    cout << "| Contador NUM           | " << contadorNUM << "                     |\n";
    cout << "| Contador RELOP         | " << contadorRELOP << "                   |\n";
    cout << "| Contador PROPRIEDADES  | " << contadorPROPRIEDADES << "            |\n";
    cout << "+------------------------+----------------------+\n";
}
