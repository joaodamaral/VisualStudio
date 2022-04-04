#include <iostream>
using namespace std;

main(){

    int valor_lido, n_par, i;

    cout << "Insira o valor: ";
    cin >> valor_lido;

    cout << "Os numeros pares entre 1 e " << valor_lido << " sao: ";
    for (i = 1; i <= valor_lido; i++){
        if (i % 2 == 0){
            cout << i << " ";

        }
        else{

        }
    }
    /*Final dos códigos para rodar no Windows 11 Visual Studio (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;
}