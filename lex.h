#include <FlexLexer.h>

class Lex
{
private:
	yyFlexLexer scanner;
	int lookahead;
	
public:
	void Start();
};
