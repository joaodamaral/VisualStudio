#include <iostream>
#include <locale.h>
using namespace std;

void inicializa(int);
void desenha(int);
void joga(int, char);

char mat[3][3][3];
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, partida;
	char jog1[30],  jog2[30], jog;
	cout << "*** Jogo da Velha***" << endl;
	cout << "Informe o nome do primeiro jogador (X) :" << endl;
	cin.getline(jog1,30);
	cout << "Informe o nome do segundo jogador (O) :" << endl;
	cin.getline(jog2,30);
	for (partida=0; partida < 3; partida++)
	{
		inicializa(partida);
		desenha(partida);
		for (i=0; i < 9; i++)
		{
			if ((i % 2) == 0)
			{
				cout << "(X) Vez do " << jog1 << endl;
				jog = 'X';
			}
			else
			{
				cout << "(O) Vez do " << jog2 << endl;
				jog = 'O';
			}
			joga(partida, jog);
			desenha(partida);
		}
	}
	cout << "*** Final do Jogo. Veja o Resultado***" << endl;
	for (partida=0; partida < 3; partida++)
	{
		desenha(partida);
	}
}

void inicializa(int partida)
{
	int i, j;
	for (i=0; i < 3; i++)
	{
		for (j=0; j < 3; j++)
		{
		mat[partida][i][j]= ' ';
		}
	}
}
void desenha(int partida)
{
	int i, j;
	cout << "   0    1    2" << endl;
	cout << "   -----------" << endl;
	for (i=0; i < 3; i++)
	{
		cout << i << " | ";
		for (j=0; j < 3; j++)
		{
			cout << mat[partida][i][j] << " | ";
		}
		cout << endl;
		if (i < 2)
		{
			cout << "  |-----------|" << endl;
		}
	}
	cout << "   -----------" << endl;
}

void joga(int partida, char jog)
{
	char caracter;
	int linha, coluna;
	do
	{
		cout <<"*** Informe uma posição que não esteja preenchida ***" << endl;
		do
		{
			cout <<"*** Informe a linha que quer jogar no intervalo de 0 a 2: ***" << endl;
			cin >> linha;
		} while ((linha < 0) || (linha > 2));
		do
		{
			cout <<"*** Informe a coluna que quer jogar no intervalo de 0 a 2: ***" << endl;
			cin >> coluna;
		} while ((coluna < 0) || (coluna > 2));
	} while (mat[partida][linha][coluna] != ' ');
	mat[partida][linha][coluna] = jog;
}
