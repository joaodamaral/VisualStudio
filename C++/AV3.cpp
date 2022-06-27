#include <iostream>
#include <math.h>
#include <locale.h>
#include <iomanip>
using namespace std;

char repetidor;

void cat(){

    float nf, na, nb, ne, nq, ntotal, res;
    char op;

    nf = 16;
    na = 5;
    nb = 2;
    ne = 17;
    nq = 6;
    ntotal = nf + na + nb + ne + nq;
    
    cout << "Insira a inicial de um dos 5 riscos ocupacionais (FABEQ) para calcular sua incidência na RCLYR\n";
    cin >> op;
    op = tolower(op);
    cout << endl;

    switch (op){

        case 'f':
        res = nf / ntotal;
        cout << "O percentual de risco físico na RCLYR é " << res*100 << " %";
        cout << endl;
        break;

        case 'a':
        res = na / ntotal;
        cout << "O percentual de risco de acidente na RCLYR é " << res*100 << " %";
        cout << endl;
        break;

        case 'b':
        res = nb / ntotal;
        cout << "O percentual de risco biologico na RCLYR é " << res*100 << " %";
        cout << endl;
        break;

        case 'e':
        res = ne / ntotal;
        cout << "O percentual de risco ergonomico na RCLYR é " << res*100 << " %";
        cout << endl;
        break;

        case 'q':
        res = nq / ntotal;
        cout << "O percentual de risco quimico na RCLYR é " << res*100 << " %";
        cout << endl;
        break;

        default:
            cout << "Risco invalido, digite novamente\n";
            cat();
            break;
    }
}

int main(){
        
    setlocale(LC_ALL, "");

    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    do {
        cat();
        cout << "\nDeseja executar novamente? (s/n) ";
        cin >> repetidor;
        cout << endl;

    }while (repetidor == 's'|| repetidor =='s');

	return 0;
}