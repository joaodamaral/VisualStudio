#include <iostream>
#include <math.h>
using namespace std;

main(){

    int valor, i;

    cout << "Insira o valor\n";
    cin >> valor;

    for (i = 1; i <= valor; i++){
        cout << i << " " << pow(i, 2) << " " << pow(i, 3) << endl;
        cout << i << " " << pow(i, 2) + 1 << " " << pow(i, 3) + 1 << endl;
    }

    /*Final dos códigos para rodar no Windows 11 Visual Studio (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;
}