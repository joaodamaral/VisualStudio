# include <iostream>
# include <math.h>
using namespace std;

main(){

    int n1, n2, n3, n4, n5, c_par, c_impar, c_neg, c_pos;

    cout << "Digite os 5 valores a serem analisados\n";

   c_par = 0;
   c_impar = 0;
   c_pos = 0;
   c_neg = 0;

    /* Primeira entrada*/

    cin >> n1;

    if (n1 % 2 == 0){
        c_par++;
    }
    else if (n1 % 2 != 0){
        c_impar++;
    }
    else{
        c_par;
        c_impar;
    }
    if (n1 > 0){
        c_pos++;
    }
    else if (n1 < 0){
        c_neg++;
    }
    else{
        c_pos;
        c_neg;
    }

    /* Segunda entrada*/

    cin >> n2;

    if (n2 % 2 == 0){
        c_par++;
    }
    else if (n2 % 2 != 0){
        c_impar++;
    }
    else{
        c_par;
        c_impar;
    }
   if (n2 > 0){
        c_pos++;
    }
    else if (n2 < 0){
        c_neg++;
    }
    else{
        c_pos;
        c_neg;
    }

    /* Terceira entrada*/

    cin >> n3;

    if (n3 % 2 == 0){
        c_par++;
    }
    else if (n3 % 2 != 0){
        c_impar++;
    }
    else{
        c_par;
        c_impar;
    }
    if (n3 > 0){
        c_pos++;
    }
    else if (n3 < 0){
        c_neg++;
    }
    else{
        c_pos;
        c_neg;
    }

    /* Quarta entrada*/

    cin >> n4;

    if (n4 % 2 == 0){
        c_par++;
    }
    else if (n4 % 2 != 0){
        c_impar++;
    }
    else{
        c_par;
        c_impar;
    }
    if (n4 > 0){
        c_pos++;
    }
    else if (n4 < 0){
        c_neg++;
    }
    else{
        c_pos;
        c_neg;
    }

    /* Quinta entrada*/

    cin >> n5;

    if (n5 % 2 == 0){
        c_par++;
    }
    else if (n5 % 2 != 0){
        c_impar++;
    }
    else{
        c_par;
        c_impar;
    }
   if (n5 > 0){
        c_pos++;
    }
    else if (n5 < 0){
        c_neg++;
    }
    else{
        c_pos;
        c_neg;
    }


    cout << endl;
    cout << c_par << " numeros pares\n";
    cout << c_impar << " numeros impares\n";
    cout << c_neg << " numeros negativos\n";
    cout << c_pos << " numeros positivos\n";




     /*Final dos códigos para rodar no Windows 11 Visual Studio (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;
}