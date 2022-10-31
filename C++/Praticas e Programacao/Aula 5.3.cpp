#include <iostream>
int main(){
	int vet[5], i = 0;
	printf("Preencha o vetor a seguir\n");
	for(i = 0; i < 5; i++){
		scanf(" %d", &vet[i]);
 	}
 	for(int j = 0; j < 5; j++){
 		if(vet[j]%2 == 0){
			printf("VALOR : %d\nINDICE : %d\nENDERECO : %x\n", vet[j], j, &vet[j]);
			printf("\n");
		}
	 }
return 0;
}
