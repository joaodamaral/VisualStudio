/*Programa escrito para a disciplina práticas integradas II, contemplando o conteudo da AV3

a. Responder a pesquisa: a opção (a) deve perguntar ao usuário o seu nome, a sua
idade, o seu gênero (masculino, feminino, outros) e para cada uma das possíveis
violações, se já sofreu (sim) ou não sofreu (não). O programa, após cada resposta de
um participante da pesquisa, deve salvar os dados em um arquivo

b. Listas dados dos respondentes: a opção (b) deve permitir ler o arquivo e listar a
resposta de todos os participantes de forma tabulada.

c. Listar dados individuais: a opção (c) deve solicitar o nome de uma pessoa, pesquisar no
arquivo e apresentar os dados individuais desta pessoa caso seja encontrada.
Proposta

d. Listar estatística: a opção (d) deve ler o arquivo e apresentar a totalização de violações
dos direitos humanos geral, o total de cada violação, o total por gênero, o total para
menores de 18 anos e o total para maiores ou iguais a 18 anos.

e. Fim
Observação: O programa deve ser modularizado em funções que realizam as funcionalidades de cada opção do menu*/

#include<iostream>
#include <locale.h>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;
char menu();
void pesquisa();

main(){

    char opcao;
    int run, pessoa;
    pessoa = 1;
    setlocale(LC_ALL, "Portuguese");
    system("Color 06");

    void inicializa();

    do{
		opcao = menu();
		switch(opcao)
		{
            case 'a':

                pesquisa();
                pessoa++;

            break;

            case 'b':

            break;

            case 'c':

            break;

            case 'd':

            break;

            case 'e':

                /*Final dos códigos para rodar no ganhadows 11 Visual Studio (Previne fechamento do prompt, após fim do programa*/
	            cout << "\n" << endl;
	            system("pause");
	            return 0;

            break;
            default:
            cout << "Não foi possivel identificar uma opção, tente novamente";
            run = 1;
            
        }
    }while (run != 0);
}

char menu()
{
	char opcao;
	cout << "*** Menu ***" << endl;
    cout << "Esse é o programa de pesquisa desenvolvido pela equipe YW, por favor selecione uma opção a seguir:" << endl;
	cout << "(A) Responder Pesquisa" << endl;
	cout << "(B) Listar dados do Usuarios" << endl;
	cout << "(C) Listar dados Individuais" << endl;
    cout << "(D) Listar Estatisticas" << endl;
	cout << "(E) Encerrar" << endl;
    cout << endl;
	cin >> opcao;
    cout << endl;
	return tolower(opcao);
}
void inicializa(int pessoa)
{

int i, j, mat[pessoa+1][33];

for(i=0; i < pessoa; i++)
	{
		for (j=0; j < 33; j++)
		{
			mat[i+1][j+1] = ' ';
 		}
	}
}
void pesquisa(int pessoa)
{
    int mat[pessoa+1][33];

    cout << "Por favor, responda as perguntas a seguir:" <<endl;
    cout << "Qual o seu nome?"<<endl;
    cin >> mat[1][1];
    cout << endl;
    cout << "Qual a sua idade?" << endl;
    cin >> mat[1][2];
    cout << endl;
    cout << "Qual o seu genero? (masculino, feminino, outros)" << endl;
    cin >> mat[1][3
    ];
    cout << "A seguir, insira sim ou não caso já tenha sofrido violação do artigo da DUDH descrito" << endl;
    dudh();



}
void dudh(int i, int j, int pessoa)
{
    int art;

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
