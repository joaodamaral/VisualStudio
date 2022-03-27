#include <iostream>
#include <math.h>
using namespace std;

main(){

    float x, y;

    cout << "Quais as coordenadas X e Y?\n";
    cin >> x >> y;
    

    if (x > 0 && y > 0){
        cout << "Q1";
    }
    else if (x > 0 && y < 0){
        cout << "Q4";
    }
    else if (x < 0 && y > 0){
        cout << "Q2";
    }
    else if (x < 0 && y < 0){
        cout << "Q3";
    }
    else if (x = 0){
        cout << "Eixo Y";
    }
    else if (y = 0){
        cout << "Eixo X";
    }
    else if (x == 0 && y == 0){
        cout << "Origem";
    }
    else{

    }
    
    /*Final dos códigos para rodar no Windows 11 Visual Studio (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;
}