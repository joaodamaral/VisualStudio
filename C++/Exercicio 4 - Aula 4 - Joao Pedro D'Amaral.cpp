#include <iostream>
#include <math.h>
using namespace std;

main(){

    int n1, n2, n3, n4, n5, contador;

    cout << "Digite os 5 valores a serem analisados\n";

    contador = 0;

    cin >> n1;
    if (n1 % 2 == 0){
        contador++;
    }
    else{
        contador;
    }

    cin >> n2;
    if (n2 % 2 == 0){
        contador++;
    }
    else{
        contador;
    }

    cin >> n3;
    if (n3 % 2 == 0){
        contador++;
    }
    else{
        contador;
    }

    cin >> n4;
    if (n4 % 2 == 0){
        contador++;
    }
    else{
        contador;
    }

    cin >> n5;
    if (n5 % 2 == 0){
        contador++;
    }
    else{
        contador;
    }
    
    cout << endl;
    cout << contador << " numeros pares";


    /*Final dos códigos para rodar no Windows 11 Visual Studio (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;
}