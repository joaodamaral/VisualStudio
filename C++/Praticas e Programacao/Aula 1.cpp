#include <iostream>
#include <locale.h>
using namespace std;

main(){

    setlocale(LC_ALL, "Portuguese");
    int i, j, dim, soma=0;
    cout <<"Insira um valor n, entre 2 e 12 para definir o tamanho da matriz" << endl;
    cin >> dim;
    int mat[dim][dim];

    cout << "Informe os numeros para a matriz quadrada" << endl;

    for (i=0; i < dim; i++){

        for (j=0; j < dim; j++){

            cin >> mat[i][j];
        }
    }
    
   for (i=0; i < dim; i++){

        for (j=i; j < dim; j++){

            soma = soma + mat[i][j];
        }
    } 
    cout << "A soma e = " << soma;

    /*Final dos códigos para rodar no Windows 11 Visual Studio (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;
}