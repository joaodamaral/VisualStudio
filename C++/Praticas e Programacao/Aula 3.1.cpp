#include <iostream>
#include <locale.h>
using namespace std;



main() {

    setlocale(LC_ALL, "Portuguese");
    int tamL1, tamC1, tamL2, tamC2;
    int l, c;

    cout << "Insira as dimensões das linhas e colunas da matriz 1" <<endl;
    cin >> tamL1;
    cin >> tamC1;

    cout << "Insira as dimensões das linhas e colunas da matriz 2" <<endl;
    cin >> tamL2;
    cin >> tamC2;

    int mat1[tamL1][tamC1], mat2[tamC2][tamL2], matSoma[tamL1][tamC1];

    if (tamL1 == tamL2 && tamC1 == tamC2){

    for(l = 0; l < tamL1; l++){

        for(c = 0; c < tamC1; c++){

            cout << "Insira o elemento " << l+1 << ", " << c+1 << " da matriz 1:" <<endl;
            cin >> mat1[l][c];
            cout << endl;
        }
        }
    
    for(l = 0; l < tamL2; l++){

        for(c = 0; c < tamC2; c++){

            cout << "Insira o elemento " << l+1 << ", " << c+1 << " da matriz 2:" <<endl;
            cin >> mat2[l][c];
            cout << endl;
        }
        }

    cout << "Matrizes 1";
    cout << endl;
    for(l = 0; l < tamL1; l++){
        for(c = 0; c < tamC1; c++){

            cout << mat1[l][c] << " ";
        }
        cout <<endl;
    }

    cout << endl;
    cout << "Matrize 2";
    cout << endl;
    for(l = 0; l < tamL2; l++){
        for(c = 0; c < tamC2; c++){

            cout << mat2[l][c] << " ";
        }
        cout <<endl;
    }

    for(l = 0; l < tamL1; l++){
        for(c = 0; c < tamC1; c++){

            matSoma[l][c] = mat1[l][c] + mat2[l][c];
        }
    }

    cout << "Matriz Soma";
    cout << endl;
    for(l = 0; l < tamC1; l++){
        for(c = 0; c < tamL1; c++){

            cout << matSoma[l][c] << " ";

        }
        cout << endl;
    }


    } else{
        cout << "A soma das matrizes não pode ser determinada devido a diferença entre suas ordens" << endl;
    } 

    /*Final dos códigos para rodar no Windows 11 Visual Studio (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;
}