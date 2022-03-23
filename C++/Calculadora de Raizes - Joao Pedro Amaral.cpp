#include <math.h>
#include <iostream>
using namespace std;

main()
{
    float a, b, c, delta, x_1, x_2;

    cout << "Digite o Coeficiente a \n";
    cin >> a;
    cout << "Digite o Coeficiente b \n";
    cin >> b;
    cout << "Digite o Coeficiente c \n";
    cin >> c;

    /* Formula de Bahskara */
    delta = pow(b,2) - (4 * a * c);
    x_1 = (-b - sqrt(delta))/(2 * a);
    x_2 = (-b + sqrt(delta))/(2 * a);

    cout << " As raizes da equacao sao " << x_1 << " e " << x_2;

    /*Final dos códigos para rodar no Windows 11 (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;

}
