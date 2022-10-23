/*Calculadora de percentual de riscos ocupacionais na empresa RCLYR
Esse programa é o resultado dos estudos estatisticos desenvolvidos pela Comply, utilizando dados fornecidos pela empresa contratante
O objetivo é calcular de forma rápida a contribuição percentual de cada tipo de risco na empresa estudada
*/

#include <iostream>
#include <math.h>
#include <locale.h>
#include <iomanip>
using namespace std; 

char repetidor, op, repetidor2;
float nf, na, nb, ne, nq, ntotal, res;

/* Essa função determina qual percentual a ser calculado a partir da letra (FABEQ) inserida pelo usuário
e caso uma não seja identificada retorna um erro e pede para inserir um identificador válido */
void cat(){
  
    cout << "Insira a inicial de um dos 5 riscos ocupacionais (FABEQ) para calcular sua incidência na RCLYR\n";
    cin >> op;
    op = tolower(op); //Determina que a variavel sempre ficará minuscula, evitando erros com inserção de caracteres em CapsLock
    cout << endl;

    switch (op){

        case 'f':
        res = nf / ntotal;
        cout << "O percentual de risco físico na RCLYR é " << res*100 << " %\n";
        cout << endl;
        break;

        case 'a':
        res = na / ntotal;
        cout << "O percentual de risco de acidente na RCLYR é " << res*100 << " %\n";
        cout << endl;
        break;

        case 'b':
        res = nb / ntotal;
        cout << "O percentual de risco biologico na RCLYR é " << res*100 << " %\n";
        cout << endl;
        break;

        case 'e':
        res = ne / ntotal;
        cout << "O percentual de risco ergonomico na RCLYR é " << res*100 << " %\n";
        cout << endl;
        break;

        case 'q':
        res = nq / ntotal;
        cout << "O percentual de risco quimico na RCLYR é " << res*100 << " %\n";
        cout << endl;
        break;

        default:
            cout << "Risco invalido, digite novamente\n";
            cat();
            break;
    }
}

// Essa função modifica as variavés das frequencias dos riscos ocupacionais utilizadas no calculo, e só é utilizada quando chamada pelo usuário no loop
void add_data(){

    cout << "Insira o novo valor para a frequência de riscos Físicos\n";
    cin >> nf;
    cout << "Insira o novo valor para a frequência de riscos de Acidentes\n";
    cin >> na;
    cout << "Insira o novo valor para a frequência de riscos Biológicos\n";
    cin >> nb;
    cout << "Insira o novo valor para a frequência de riscos Ergonômicos\n";
    cin >> ne;
    cout << "Insira o novo valor para a frequência de riscos Químicos\n";
    cin >> nq;
    repetidor2 = 'n';

}

int main(){
        
    setlocale(LC_ALL, ""); // Define o uso da codificação do computador, permitindo uso de caracteres especiais, como os acentos

    std::cout << std::fixed;
    std::cout << std::setprecision(2); // Determina o uso de apenas duas casas decimais nas operações com float

    // Variaveis utlizadas para calculo de porcentagem, utilizando a frequancia de cada tipo de risco
    nf = 16;
    na = 5;
    nb = 2;
    ne = 17;
    nq = 6;
    ntotal = nf + na + nb + ne + nq;

    do {
        cat();
        cout << "Deseja adicionar novos dados para o cálculo? (s/n)\n";
        cin >> repetidor2; // Caso repetidor2 seja "s", a função add_data() é chamada

        if (repetidor2 == 's'){
            add_data();
            cat();
        }

        cout << "\nDeseja executar novamente? (s/n)\n";
        cin >> repetidor;
        cout << endl;

    }while (repetidor == 's'|| repetidor =='S');

	return 0;
}