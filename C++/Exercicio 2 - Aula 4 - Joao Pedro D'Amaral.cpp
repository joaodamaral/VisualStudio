#include <iostream>
#include <math.h>
using namespace std;

main(){

    float n1, n2, n3, n4, media, nota_exame, media_final;

    cout << "Quais foram as notas das 4 provas?\n";
    cin >> n1;
    cin >> n2; 
    cin >> n3; 
    cin >> n4; 

    media = ((n1*2) + (3*n2) + (4*n3) + (n4))/10;
    
    cout << "A media foi: " << media;
    cout << endl;

    if (media >= 7){
        cout << "Aluno aprovado";

    }
    else{

    }
        if (media <= 6.9 && media >= 5){
        cout << "Aluno em exame";
        cout << endl;
        cout << "Qual a nota do exame? ";
        cin >> nota_exame;
        cout << endl;
        media_final = (media + nota_exame)/2;
        cout << "A media final foi: " << media_final;
        cout << endl;

        if(media_final >= 5){
            cout << "Aluno Aprovado com media final " << media_final;
        }
        else{
            cout << "Aluno Reprovado com media final" << media_final;
        }

    }
    else{

    }
    if (media < 5){
        cout << "Aluno Reprovado";
    }
    else{

    }

    /*Final dos códigos para rodar no Windows 11 Visual Studio (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;
}