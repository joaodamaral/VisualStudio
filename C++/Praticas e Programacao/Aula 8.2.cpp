#include <iostream>
#include <fstream>
#include <string>

using namespace std;

main()
{
	char nome1[50], nome2[50], data[11];
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

	/*Final dos códigos para rodar no windows 11 Visual Studio (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;
}
