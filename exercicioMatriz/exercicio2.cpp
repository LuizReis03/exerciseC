#include <stdio.h>
#include <stdlib.h>
#define Lin 7
#define Col 2

int imprime(int matriz[Lin][Col]);

int main() {
	
	int A[7];
	int B[7];
	int C[Lin][Col];
	
	for(int i = 0; i < 7; i++){
		printf("Digite o valor %i para o vetor A: ", i+1);
		scanf("%i", &A[i]);
	}
	
	for(int i = 0; i < 7; i++){
		printf("Digite o valor %i para o vetor B: ", i+1);
		scanf("%i", &B[i]);
	}
	
	for(int i = 0; i < Lin; i++) {
		C[i][0] = A[i];
		C[i][1] = B[i];
	}
	
	printf("\n\nMATRIZ C\n");
	imprime(C);
	
	return 0;
}


int imprime(int M[Lin][Col]){
	
	for(int i = 0; i < Lin; i++) {
		for(int j = 0; j < Col; j++){
			printf("|%i| ", M[i][j]);
		}
		printf("\n");
	}
	
}

