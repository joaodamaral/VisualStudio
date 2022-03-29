#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

main(){

    int a, b, c, bc, a2, b2, c2, b2c2;

    cout << " Insira os valores dos lados A, B e C do triangulo analisado de forma decrescente\n";
    cin >> a;
    cin >> b;
    cin >> c;
    
    int num[] = {a, b, c};
    int v[3];
    
    int n  = sizeof(num)/sizeof(1);

    sort(num, num+n, greater<int>());
    
    cout << "Os lados sao ";

    for(int i = 0; i < n; ++i){
        num[i];
        cout << num[i];
        v[i++] = num[i];
    }


    cout << v[0] << v[1];


    //bc = b + c;

    a2 = pow(a,2);
    b2 = pow(b,2);
    c2 = pow(c,2);
    b2c2 = b2 + c2;

     /*Final dos códigos para rodar no Windows 11 Visual Studio (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;
}