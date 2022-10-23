#include <iostream>
using namespace std;
void inicializa();
void desenha();
void joga();

char mat[3][3];

main()
{
	int i;
	inicializa();
	desenha();
	for (i=0; i < 3; i++)
	{
		joga();
		desenha();
	}
	
