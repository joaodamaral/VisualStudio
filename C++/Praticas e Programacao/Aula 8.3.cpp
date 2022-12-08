#include<iostream>
#include <locale.h>
#include <fstream>
#include <string>

 using namespace std;
 void inicializa(int);
 void desenha(int);
 void joga(int, char);
 char mat[3][3][3];
 bool testevitoria(int, char);
 void imprimirresultado (int, int);
 bool ganhaporlinha(int, char);
 bool ganhaporcoluna(int, char);
 bool ganhapordiagonalprincipal(int, char);
 bool ganhapordiagonalsecundaria(int, char);
 int menu();
 void gravaHistorico(int, int);
 void historico();
 
 
 char jogador1[30], jogador2[30];
 
main()
{
	int i, partida, score1 = 0, score2 = 0, opcao;
	char jogador;
	setlocale(LC_ALL, "Portuguese");

	do
	{
		opcao = menu();
		switch(opcao)
		{
			case 1:	
			cout << "*** JOGO DA VELHA ***" << endl << endl;
			cout << "Jogador 1 (X): ";
			cin.getline(jogador1,30);
			cin.getline(jogador1,30);
			cout<< endl << "Jogador 2 (O): ";
			cin.getline(jogador2,30);
		
			for(partida=0; partida<3; partida++)
			{
				inicializa(partida);
				desenha(partida);
		
				for (i=0; i < 9; i++)
				{
					if((i % 2) == 0)
					{
						cout << jogador1 << " (X) SUA VEZ." << endl << endl;
						jogador = 'X';
					}
					else
					{
						cout << jogador2 << " (O) SUA VEZ." << endl << endl;
						jogador = 'O';
					}
						
					joga(partida, jogador);
		 			desenha(partida);
		 			if(testevitoria(partida,jogador) == true)
		 			{
		 				if(jogador == 'X')
						{
							cout << jogador1 << " ganhou a partida" << endl;
							cout << "" << endl;
							score1++;
						}
						else
						{
							cout << jogador2 << " ganhou a partida" << endl;
							cout << "" << endl;
							score2++;
				 		}
				 		break;	
					}
				}		
			}
			imprimirresultado (score1, score2);
			break;
			
			case 2: historico();
			break;
		}
	} while (opcao != 3);
}
void joga(int partida, char jogador)
{
	int linha, coluna;
	setlocale(LC_ALL, "Portuguese");
 	do
 	{
		cout << "***INFORME UMA POSI��O QUE N�O ESTEJA PREENCHIDA***" << endl << endl;
 		do
		{
 			cout << "Informe a linha que quer jogar" << endl;
 			cin >> linha;
		}while ((linha < 0) || (linha > 2));
 		do
 		{
 			cout << "Informe a coluna que quer jogar" << endl;
 			cin >> coluna;
		} while((coluna <0) || (linha >2));
	} while (mat[partida][linha][coluna] != ' ');
 	mat[partida][linha][coluna]=jogador;
}
 void inicializa(int partida)
{
int i,j;
setlocale(LC_ALL, "Portuguese");
for(i=0; i < 3; i++)
	{
		for (j=0; j < 3; j++)
		{
			mat[partida][i][j] = ' ';
 		}
	}
}
 void desenha(int partida)
{
int i,j;
setlocale(LC_ALL, "Portuguese");
cout << "    0   1   2" << endl;
cout << "   -----------" << endl;
	for (i=0; i < 3; i++)
	{
 		cout << i <<" | ";
 		for (j=0; j < 3; j++)
			{
 				cout << mat[partida][i][j] << " | ";
			}
 	cout << endl;
		if (i < 2)
		{
 			cout << "  | --------- |" << endl;
		}
 	}
cout << "   -----------" << endl << endl;
}
bool testevitoria(int partida, char jogador)
{
	bool ganhou = false;
	
	ganhou = ganhaporlinha(partida, jogador);
	if(ganhou == false)
	{
		ganhou = ganhaporcoluna(partida, jogador);
	}
	if(ganhou == false)
	{
		ganhou = ganhapordiagonalprincipal(partida, jogador);
	}
	if(ganhou == false)
	{
		ganhou = ganhapordiagonalsecundaria(partida, jogador);
	}
	return ganhou;
}
bool ganhaporlinha(int partida, char jogador)
{
	int i, j, ganhalinha=0;
	bool ganhou = false;

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(mat[partida][i][j] == jogador)
			{
				ganhalinha++;
			}
		}
		
		if (ganhalinha==3)
		{
			ganhou = true;
		}
		else
		{
			ganhalinha=0;
		}
	}
	return ganhou;
}
bool ganhaporcoluna(int partida, char jogador)
{
	int i, j, ganhacoluna=0;
	bool ganhou = false;
	
	for (j=0;j<3;j++)
	{
		for (i=0;i<3;i++)
		{
			if (mat[partida][i][j] == jogador)
			{
				ganhacoluna++;
			}
		}
		
		if (ganhacoluna == 3)
		{
			ganhou = true;
		}
		else
		{
			ganhacoluna = 0;
		}
	}
	return ganhou;
}
bool ganhapordiagonalprincipal(int partida, char jogador)
{
	int i, j, ganhadprincipal=0;
	bool ganhou = false;
	
	for (i=0; i<3; i++)
	{
		if ((mat[partida][i][i]) == jogador)
		{
			ganhadprincipal++;
		}
	}
	
	if(ganhadprincipal == 3)
	{
		ganhou = true;
	}
	return ganhou;
}
bool ganhapordiagonalsecundaria(int partida, char jogador)
{
	int i , j, ganhadsecundario=0;
	bool ganhou = false;
	
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			if(((i+j) == 2) && (mat[partida][i][j] == jogador))
			{
				ganhadsecundario++;
			}
		}
	}
	
	if (ganhadsecundario == 3)
	{
		ganhou = true;
	}
	return ganhou;
}
void imprimirresultado(int score1, int score2)
{	
	int partida;
	cout << "*** FIM DE JOGO - RESULTADO ***" << endl;
	for(partida=0; partida <3; partida++)
	{
		desenha(partida);
	}
	if (score1>score2)
	{
		cout << jogador1 << " foi o vencedor." << endl;
	}
	else
	{
		if(score2 > score1)
		{
			cout << jogador2 << " foi o vencedor." << endl;
		}
		else
		{
			cout << "ocorreu um empate" << endl;
		}
	}
	gravaHistorico(score1, score2);
}
int menu()
{
	int opcao;
	cout << "*** Menu ***" << endl;
	cout << "(1) JOGAR" << endl;
	cout << "(2) HISTORICO" << endl;
	cout << "(3) FIM" << endl;
	cin >> opcao;
	return opcao;
}
void gravaHistorico(int score1, int score2)
{
	char data[11];
	ofstream meuArquivo("PR8.txt", ios::app);
	if(meuArquivo.is_open())
	{
		cout << "Informe a data de hoje no formato dd/mm/aa: " << endl;
		cin.getline(data,11);
		cin.getline(data,11);
		meuArquivo << jogador1 << " = " << score1 <<  " X " << jogador2 << " = " << score2 <<  " " << data << '\n';
	}
	else
	{
		cout << "Nao foi possivel abrir o arquivo";
	}
	meuArquivo.close();
}
void historico()
{
	string linha;
	fstream meuArquivo("PR8.txt");
	if(meuArquivo.is_open())
	{
		cout << "*** Listagem do arquivo ***" << endl;
		while(getline(meuArquivo, linha))
		{
			cout << linha << endl;
		}
	}
	else
	{
		cout << "Erro na abertura do arquivo";
	}
	meuArquivo.close();
}
