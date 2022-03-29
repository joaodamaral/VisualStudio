# include <iostream>
# include <math.h>
using namespace std;

main(){

    float salario, v1, v2, v3;

    cout << "Qual o salario a ser taxado?\n";
    cin >> salario;
    
    if (salario >= 2000.00){

        if(salario > 2000.00 && salario <= 3000.00){
            cout << "8% de imposto, ";
            v1 = (salario - 2000.00) * 0.08;
            cout << "Deve ser pago R$ " << v1; 
        }
        else if(salario > 3000.00 && salario <= 4500.00){
            cout << "18% de imposto, ";
            v2 = (((salario - 2000) - (salario - 3000.00)) * 0.08) + ((salario - 3000.00) * 0.18);
            cout << "Deve ser pago R$ " << v2; 
        }

        else if(salario > 4500.00){
            cout << "28% de imposto, ";
            v3 = (((salario - 2000) - (salario - 3000.00) - (salario - 4500.00)) * 0.08) + ((salario - 3000.00) - (salario - 4500.00) * 0.18) + ((salario - 4500.00) * 0.28);
            cout << "Deve ser pago R$ " << v3; 
        }
        else{

        }
    }
    else {
        cout << "Isento de imposto";
    }
    
    /*Final dos códigos para rodar no Windows 11 Visual Studio (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;
}
