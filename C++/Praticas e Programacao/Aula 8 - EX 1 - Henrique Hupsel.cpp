#include <iostream>
#include <fstream>
#include <string>

using namespace std;

main()
{
	char nome1[50], nome2[50], data[11];
	ofstream meuArquivo("PR8.txt", ios::app);
	if(meuArquivo.is_open())
	{
		cout << "Informe o primeiro nome: " << endl;
		cin.getline(nome1, 50);
		cout << "Informe o segundo nome: " << endl;
		cin.getline(nome2, 50);
		cout << "Informe a data de hoje no formato dd/mm/aa: " << endl;
		cin.getline(data,11);
		meuArquivo << nome1 << " X " << nome2 << " " << data << '\n';
	}
	else
	{
		cout << "Nao foi possivel abrir o arquivo";
	}
	meuArquivo.close();
}
