#include <iostream>
using namespace std;

main()
{
	float vendas, lucro, total;
	
	lucro = 0.23;
	
	cout << "Qual foi o total de vendas do ano? " << "R$ ";
	cin >> vendas;
	total = vendas * lucro;
	cout << "O lucro estimado: R$ " << total;

	/*Final dos códigos para rodar no Windows 11 Visual Studio (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;

}
