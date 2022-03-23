#include <math.h>
#include <iostream>
using namespace std;

main()
{
    float p1, p2, p3, media;

    cout << "Digite a nota da Primeira prova \n";
    cin >> p1;
    cout << "Digite a nota da Segunda prova \n";
    cin >> p2;
    cout << "Digite a nota da Terceira prova \n";
    cin >> p3;

    media = ((p1*3) + (p2*3) + (p3*4))/10;

    cout << " A media do aluno " << media;

    /*Final dos códigos para rodar no Windows 11 (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;

}
