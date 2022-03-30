/*Área e volume de figuras geométricas. Escreva um programa em C que calcula a área de uma figura 
geométrica  bidimensional  ou  o  volume  de  uma  figura  geométrica  tridimensional.  O  programa 
inicialmente pede para o usuário selecionar entre figuras bidimensionais (opção B) ou 
tridimensionais (opção T). A seguir, se o usuário selecionou figuras bidimensionais, o programa pede 
que ele selecione uma figura geométrica específica (as opções são quadrado, retângulo, triângulo, 
círculo). Já as figuras tridimensionais são cubo, esfera e cilindro. Após o usuário selecionar a figura 
geométrica, o programa pede que ele informe os dados necessários para o cálculo (exemplo: raio 
do  círculo,  lado  do  quadrado,  raio  da  esfera,  lado  do  cubo,  etc.).  O  programa  calcula    e  exibe  a 
informação solicitada e encerra a execução. Use o comando switch, mas você também pode usar 
outras estruturas condicionais também.*/

#include <iostream>
#include <math.h>
using namespace std;

main(){

    char figura, figura_b, figura_t;

    cout << "Qual o tipo de figura a ser calculado?\n (Digite 'b' para bidimensional e 't' para tridimensional)\n";
    cin >> figura;

    switch (figura){

        case 'b':
        cout << "Figura Bidimensional selecionada\n";
        cout << "Selecione o tipo de figura: quadrado (q), retangulo (r), triangulo (t), circulo (c)\n";
        cin >> figura_b;

        switch (figura_b){

            case 'q':
            float lado_q, aq;

            cout << "Digite o lado do quadrado\n";
            cin >> lado_q;
            aq = pow(lado_q,2);
            cout << "A area do quadrado: " << aq;
            break;

            case 'r':
            float lado_r1, lado_r2, ar;

            cout << "Digite os lados do retangulo\n";
            cin >> lado_r1 >> lado_r2;
            ar = lado_r1 * lado_r2;
            cout << "A area do retangulo: " << ar;
            break;

            case 't':
            float lado_a, lado_b, lado_c, p, at;

            cout << "Digite os lados do triangulo\n";
            cin >> lado_a >> lado_b >> lado_c;
            p = (lado_a + lado_b + lado_c)/2;
            at = sqrt((p) * (p - lado_a) * (p - lado_b) * (p - lado_c));
            cout << "A area do triangulo: " << at;
            break;

            case 'c':
            float r, ac;

            cout << "Digite o raio\n";
            cin >> r;
            ac = M_PI * pow(r, 2);
            cout << "A area do circulo: " << ac;
            break;

            default:
            cout << "Nao foi possivel identificar a operacao\n";
    
        }
        break;

        case 't':
        cout << "Figura Tridimensional selecionada\n";
        cout << "Selecione o tipo de figura: cubo (c), esfera (e) e cilindro (l) \n";
        cin >> figura_t;

        switch (figura_t){

            case 'c':
            float lado_cubo, vc;

            cout << "Digite o lado\n";
            cin >> lado_cubo;
            vc = pow(lado_cubo, 3);
            cout << "Volume do cubo: " << vc;
            break;

            case 'e':
            float raio_esf, ve;

            cout << "Digite o raio da esfera\n";
            cin >> raio_esf;
            ve = (4 * M_PI * pow(raio_esf, 3))/3;
            cout << "Volume da esfera: " << ve;
            break;

            case 'l':
            float raio_base, h, vcil;

            cout << "Digite o raio da base e a altura\n";
            cin >> raio_base >> h;
            vcil = (M_PI * pow(raio_base, 2) * h);
            cout << "Volume do cilindro: " << vcil;
            break;

            default:
            cout << "Nao foi possivel identificar a operacao";

        }
        break;
    }

    /*Final dos códigos para rodar no Windows 11 Visual Studio (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;
}