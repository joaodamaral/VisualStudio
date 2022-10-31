#include <iostream>
int main(){
	int A, *B;
	B = &A;
	printf("Digite um valor: ");
	scanf("%d", B);
	for(int i = 0; i <= 10; i++){
		printf("%d X %d = %d\n", A, i, *B * i);
 	}
return 0;
}
