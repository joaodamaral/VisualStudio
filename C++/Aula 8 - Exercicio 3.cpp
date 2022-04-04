#include <iostream>
using namespace std;

main(){

    int i, valor;

    cout << "Insira valor para gerar tabuada\n";
    cin >> valor;

    for (i=1; i<=10; i++){
        cout << i << " x " << valor << " = " << i*valor << endl;
    }

    /*Final dos códigos para rodar no Windows 11 Visual Studio (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;
}