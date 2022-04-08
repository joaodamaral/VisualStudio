#include <iostream>
#include <math.h>
using namespace std;

main(){

    int valor, i;

    cout << "Insira o valor\n";
    cin >> valor;
    i = 1;
    
    do{
        cout << i << " " << pow(i, 2) << " " << pow(i, 3) << endl;
        cout << i << " " << pow(i, 2) + 1 << " " << pow(i, 3) + 1 << endl;
        i++;
        
    }while (i <= valor);

    /*Final dos códigos para rodar no Windows 11 Visual Studio (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;
}