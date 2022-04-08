#include <iostream>
using namespace std;

main(){
    
    float n1, n2, inv1, inv2;
    char repetidor;

do{
    do{
        cout << "Insira a primeira nota\n";
        cin >> n1;

        if (n1 < 0 || n1>10){
            cout << "Nota Invalida\n";
            inv1 = 1;
        }
        else{
            inv1 = 0;
        }

    }while (inv1 != 0);


    do{
        cout << "Insira a segunda nota\n";
        cin >> n2;

        if (n2 < 0 || n2 > 10){
            cout << "Nota Invalida\n";
            inv2 = 1;
        }
        else{
            inv2 = 0;
        }
    }while (inv2 != 0);

    cout << "media = " << (n1+n2)/2 << endl;
    cout << "Novo calculo? (y/n)\n";
    cin >> repetidor;

}while (repetidor == 'y');


    /*Final dos códigos para rodar no Windows 11 Visual Studio (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;
}