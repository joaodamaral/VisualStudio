#include <iostream>
using namespace std;

main()
{
	float qt_pizza, qt_fatias, pessoas, n_consumidas;
	
	cout << "Quantas pizzas foram servidas?";
	cin >> qt_pizza;
	cout << "Em quantas fatias forma divididas?";
	cin >> qt_fatias;
	cout << "Quantas pessosa foram convidadas?";
	cin >> pessoas;
	n_consumidas = (qt_pizza * qt_fatias) - (pessoas * 3);
	cout << "Nao foram consumidas " << n_consumidas << " fatias";
	
	/*Final dos códigos para rodar no Windows 11 Visual Studio (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;

}
