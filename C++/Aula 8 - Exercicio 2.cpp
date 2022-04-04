#include <iostream>
using namespace std;

main(){

    int num, i, c_par, c_impar, c_neg, c_pos;

    cout << "Quais os numeros a serem analisados? ";
    
    c_par = 0;
    c_impar = 0;
    c_pos = 0;
    c_neg = 0;

    for (i=1; i <=5; i++){
        cin >> num;

        if (num % 2 == 0){
        c_par++;
    }
    else if (num % 2 != 0){
        c_impar++;
    }
    else{
        c_par;
        c_impar;
    }
    if (num > 0){
        c_pos++;
    }
    else if (num < 0){
        c_neg++;
    }
    else{
        c_pos;
        c_neg;
    }

    }

    cout << c_par << " numeros pares\n";
    cout << c_impar << " numeros impares\n";
    cout << c_pos<< " numeros positivos\n";
    cout << c_neg << " numeros negativos\n";


    /*Final dos códigos para rodar no Windows 11 Visual Studio (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;
}