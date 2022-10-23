#include <iostream>
using namespace std;



main() {

    int tamL, tamC;
    int l, c;

    cout << "Insira as dimensões das linhas e colunas da matriz" <<endl;
    cin >> tamL;
    cin >> tamC;

    int mat[tamL][tamC], mat2[tamC][tamL];

    for(l = 0; l < tamL; l++){

        for(c = 0; c < tamC; c++){

            cout << "Insira o elemento " << l+1 << ", " << c+1 << " da matriz:" <<endl;
            cin >> mat[l][c];
        }
    }

    cout << "Matriz Original";
    cout << endl;
    for(l = 0; l < tamL; l++){
        for(c = 0; c < tamC; c++){

            cout << mat[l][c] << " ";
        }
        cout <<endl;
    }

    for(l = 0; l < tamL; l++){
        for(c = 0; c < tamC; c++){

            mat2[c][l] = mat[l][c];
        }
    }

    cout << "Matriz Transposta";
    cout << endl;
    for(l = 0; l < tamC; l++){
        for(c = 0; c < tamL; c++){

            cout << mat2[l][c] << " ";

        }
        cout << endl;
    }

    /*Final dos códigos para rodar no Windows 11 Visual Studio (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;
}