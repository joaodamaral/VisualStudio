#include <iostream>
using namespace std;

main()
{
	float val_venda, imp_federal, imp_estadual, total;
	
	imp_federal = 0.04;
	imp_estadual = 0.02;
	
	cout << "Qual o valor da venda? R$ ";
	cin >> val_venda;
	cout << "O valor da venda foi: R$ " << val_venda << endl;
	cout << "O valor do imposto federal foi: R$ " << imp_federal * val_venda << endl;
	cout << "O valor do imposto estadual foi: R$ " << imp_estadual * val_venda << endl;
	total = val_venda * (1 + imp_federal + imp_estadual);
	cout << "O valor final foi: R$ " << total;

	/*Final dos códigos para rodar no Windows 11 Visual Studio (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;
}
