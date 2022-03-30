#include <iostream>
using namespace std;

main(){

    float v1, v2, res;
    char op;

    cout << "Quais os valores a serem calculados?\n ";
    cin >> v1 >> v2;
    cout << "Qual a Operacao? \n ";
    cin >> op;
    cout << endl;

    switch (op){

        case '+':
        res = v1 + v2;
        cout << res;
        break;

        case '-':
        res = v1 - v2;
        cout << res;
        break;

        case '*':
        res = v1 * v2;
        cout << res;
        break;

        case '/':
        res = v1 / v2;
            if (v2 == 0){
            cout << "Operacao Invalida";
            }
            else{
                 cout << res;
            } 
        break;

        default:
            cout << "Operacao Invalida";
    }




    /*Final dos códigos para rodar no Windows 11 Visual Studio (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;
}