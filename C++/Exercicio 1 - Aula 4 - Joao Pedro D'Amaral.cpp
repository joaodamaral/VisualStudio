#include <iostream>
#include <math.h>
using namespace std;

main(){
int valor_pago, qt_100, qt_50, qt_20, qt_10, qt_5, qt_2, qt_1; 

cout << "Qual o valor a ser dividido em notas? \n";
cin >> valor_pago;

qt_100 = valor_pago/100;
qt_50 = (valor_pago % 100)/50;
qt_20 = ((valor_pago % 100) % 50)/20;
qt_10 = (((valor_pago % 100) % 50) % 20)/10;
qt_5 = ((((valor_pago % 100) % 50) % 20) % 10)/5;
qt_2 = (((((valor_pago % 100) % 50) % 20) % 10) % 5)/2;
qt_1 = ((((((valor_pago % 100) % 50) % 20) % 10) % 5) % 2)/1;

if (qt_100 != 0){
    cout << qt_100 << " Notas de R$ 100 \n";
}
else{

}
if (qt_50 != 0){
    cout << qt_50 << " Notas de R$ 50 \n";
}
else {

}
if (qt_20 != 0){
    cout << qt_20 << " Notas de R$ 20\n";
}
else{

}
if (qt_10 != 0){
    cout << qt_10 << " Notas de R$ 10\n";
}
else{

}
if (qt_5 != 0){
    cout << qt_5 << " Notas de R$ 5\n";
}
else{

}
if (qt_2 != 0){
    cout << qt_2 << " Notas de R$ 2\n";
}
else{

}
if(qt_1 != 0){
    cout << qt_1 << " Notas de R$ 1\n";
} 
else{

}  


/*Final dos códigos para rodar no Windows 11 Visual Studio (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;
}