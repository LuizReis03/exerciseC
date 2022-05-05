#include <stdio.h>
#include <stdlib.h>
#define Lin 5
#define Col 2


int imprime(int matriz[Lin][Col]);

int main() {
	
	int A[5];
	int B[5];
	int matriz[Lin][Col];
	
	for(int i = 0; i < Lin; i++){
		printf("Digite o valor %i para o vetor A: ", i+1);
		scanf("%i", &A[i]);
	}
	
	for(int i = 0; i < Lin; i++) {
		matriz[i][0] = A[i] * 2;
		matriz[i][1] = A[i] - 5;
	}
	
	printf("\n\nMATRIZ\n");
	imprime(matriz);
	
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

