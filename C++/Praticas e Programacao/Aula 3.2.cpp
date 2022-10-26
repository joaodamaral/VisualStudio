#include <iostream>
#include <locale.h>
using namespace std;



main() {

    setlocale(LC_ALL, "Portuguese");
    int tamL1, tamC1, tamL2, tamC2;
    int l, c, k;

    cout << "Insira as dimensões das linhas e colunas da matriz A" <<endl;
    cin >> tamL1;
    cin >> tamC1;

    cout << "Insira as dimensões das linhas e colunas da matriz B" <<endl;
    cin >> tamL2;
    cin >> tamC2;

    int mat1[tamL1][tamC1], mat2[tamL2][tamC2], matRes[tamL1][tamC2];

    if (tamC1 == tamL2){

    for(l = 0; l < tamL1; l++){

        for(c = 0; c < tamC1; c++){

            cout << "Insira o elemento A " << l+1 << ", " << c+1 << " : ";
            cin >> mat1[l][c];
            cout << endl;
        }
        }
    
    for(l = 0; l < tamL2; l++){

        for(c = 0; c < tamC2; c++){

            cout << "Insira o elemento B " << l+1 << ", " << c+1 << " : ";
            cin >> mat2[l][c];
            cout << endl;
        }
        }

    cout << "Matriz A";
    cout << endl;
    for(l = 0; l < tamL1; l++){
        for(c = 0; c < tamC1; c++){

            cout << mat1[l][c] << " ";
        }
        cout <<endl;
    }
    cout << endl;

    cout << "Matrize B";
    cout << endl;
    for(l = 0; l < tamL2; l++){
        for(c = 0; c < tamC2; c++){

            cout << mat2[l][c] << " ";
        }
        cout <<endl;
    }
    cout << endl;

    for(l = 0; l < tamL1; l++)
        for(c = 0; c < tamC2; c++)
        {
            matRes[l][c]=0;
        }

    for(l = 0; l < tamL1; l++){

        for(c = 0; c < tamC2; c++){

            for (k=0; k < tamC1; k++){

            matRes[l][c] += (mat1[l][k] * mat2[k][c]);

            }
        }
    }

    cout << "Matriz Resultado";
    cout << endl;
    for(l = 0; l < tamL1; l++){
        for(c = 0; c < tamC2; c++){

            cout << matRes[l][c] << " ";

        }
        cout << endl;
    }


    } else{
        cout << "A multiplicação das matrizes não pode ser determinada devido a diferença entre suas ordens" << endl;
    } 

    /*Final dos códigos para rodar no Windows 11 Visual Studio (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;
}