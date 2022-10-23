#include <iostream>
#include <locale.h>
using namespace std;
main()
{
	int i, j, dimensao, soma=0;
	setlocale(LC_ALL, "Portuguese");
		cout << "Infome a dimensao de uma matriz quadrada"<<endl;
		cin >> dimensao;
		cout << "Colunas: ";
		int mat [dimensao][dimensao];
		for (i=0; i < dimensao; j++)
		{
			for (j=0; j < dimensao; j++)
			{
				cin >> mat[i][j];
			}
		}
		for (i=0; i < dimensao; i++)
		{
			for (j=i; j < dimensao; j++)
		{
			soma = soma + mat[i][j];
		}
		}
}
