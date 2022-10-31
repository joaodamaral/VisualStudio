#include <iostream> 
using namespace std; 
 
main() { 
    
     int a, b; 
     int *x, *y; 
     a = 5; 
     b = 10; 
     x = &a; 
     y = &b; 
     a = *x + *y; 
     cout << "Resultado = " << a; 

      /*Final dos códigos para rodar no ganhadows 11 Visual Studio (Previne fechamento do prompt, após fim do programa*/
	cout << "\n" << endl;
	system("pause");
	return 0;
} 

/* O Resultado final do código acima é a = 15 */