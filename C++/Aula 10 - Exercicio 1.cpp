#include <iostream>
#include <math.h>
using namespace std;

void quadrado(){

    float lado_q, aq;
    cout << "Digite o lado do quadrado\n";
    cin >> lado_q;
    aq = pow(lado_q,2);
    cout << "A area do quadrado: " << aq;
}

void retangulo(){

    float lado_r1, lado_r2, ar;
    cout << "Digite os lados do retangulo\n";
    cin >> lado_r1 >> lado_r2;
    ar = lado_r1 * lado_r2;
    cout << "A area do retangulo: " << ar;
}

void triangulo(){

    float lado_a, lado_b,  lado_c,  p, at;
    cout << "Digite os lados do triangulo\n";
    cin >> lado_a >> lado_b >> lado_c;
    p = (lado_a + lado_b + lado_c)/2;
    at = sqrt((p) * (p - lado_a) * (p - lado_b) * (p - lado_c));
    cout << "A area do triangulo: " << at;


}

void circulo(){

    float r, ac;
    cout << "Digite o raio\n";
    cin >> r;
    ac = M_PI * pow(r, 2);
    cout << "A area do circulo: " << ac;

}

void cubo(){
        
        float lado_cubo, vc;
        cout << "Digite o lado\n";
        cin >> lado_cubo;
        vc = pow(lado_cubo, 3);
        cout << "Volume do cubo: " << vc;
}

void esfera(){

        float raio_esf, ve;
        cout << "Digite o raio da esfera\n";
        cin >> raio_esf;
        ve = (4 * M_PI * pow(raio_esf, 3))/3;
        cout << "Volume da esfera: " << ve;
}

void cilindro(){

        float raio_base, h,  vcil;
        cout << "Digite o raio da base e a altura\n";
        cin >> raio_base >> h;
        vcil = (M_PI * pow(raio_base, 2) * h);
        cout << "Volume do cilindro: " << vcil;
}




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

            quadrado();
            
            break;

            case 'r':
            
            retangulo();

            break;

            case 't':
            
            triangulo();
            
            break;

            case 'c':
            
            circulo();

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
            
            cubo();

            break;

            case 'e':
            
            esfera();

            break;

            case 'l':
            
            cilindro();
        
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