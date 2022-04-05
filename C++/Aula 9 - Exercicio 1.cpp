#include <iostream>
using namespace std;


void calculadora(){

    float v1, v2, res;
    char op;

    
    
    cout << "Quais os valores a serem calculados?\n";
    cin >> v1 >> v2;
    cout << "Qual a Operacao? \n ";
    cin >> op;
    cout << endl;

    switch (op){

        case '+':
        res = v1 + v2;
        cout << v1 << op << v2 << " = " << res;
        break;

        case '-':
        res = v1 - v2;
        cout << v1 << op << v2 << " = " << res;
        break;

        case '*':
        res = v1 * v2;
        cout << v1 << op << v2 << " = " << res;
        break;

        case '/':
            
            if (v2 == 0){
                
                float v22;

                do {
                    cout << "Operacao Invalida, digite outro divsor para " << v1 << endl;
                    cin >> v22;
                    v2 = v22;
                }while (v22 == 0);
                res = v1 / v2;
                cout << v1 << op << v2 << " = " << res;

            }
            else{
                res = v1 / v2;
                cout << v1 << op << v2 << " = " << res;
            } 
        break;

        default:
            cout << "Operacao Invalida";
    }
}

main(){
    
    char repetidor;

    do {
        calculadora();
        cout << "\nDeseja encerrar? (y/n) ";
        cin >> repetidor;
        cout << endl;

    }while (repetidor == 'n'|| repetidor =='N');

	return 0;
}