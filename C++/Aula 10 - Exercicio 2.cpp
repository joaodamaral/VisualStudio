#include <math.h>
#include <iostream>
using namespace std;

float a,b,c;

float delta(){

    float r;
    r = pow(b,2) - (4 * a * c);
    return r;
}

bool delta_valid(){

    if (delta() >= 0){

    return true;

    }

    else{

        return false;
    }

    
}

float  bahskara1(){

    if (delta_valid() == true){
    
        float  x_1;
        x_1 = (-b - sqrt(delta()))/(2 * a);
        return x_1;
    }
    else{
        cout << "Nao possui raizes reais";
        return 0;
    }

    
}

float bahskara2(){

    if (delta_valid() == true){
    float x_2;
    x_2 = (-b + sqrt(delta()))/(2*a);
    return x_2;

    }
    else {
        return 0;
    }
}

main()
{
    
    cout << "Digite o Coeficiente a \n";
    cin >> a;
    cout << "Digite o Coeficiente b \n";
    cin >> b;
    cout << "Digite o Coeficiente c \n";
    cin >> c;
    cout << "As raizes sao " << bahskara1() << " e "<< bahskara2(); 


    /*Final dos códigos para rodar no Windows 11 (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;

}
