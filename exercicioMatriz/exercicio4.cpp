#include <stdio.h>
#include <stdlib.h>
#define Lin 10
#define Col 2


int imprime(int matriz[Lin][Col]);

int main() {
	
	int A[10];
	int matriz[Lin][Col];
	int result = 0;
	int fat[3];
	
	for(int i = 0; i < Lin; i++){
		printf("Digite o valor %i para o vetor A: ", i+1);
		scanf("%i", &A[i]);
	}
	
	for(int i = 0;i < Lin; i++){
		result = 1;
		for(int j = A[i]; j> 0; j--){
			result = result * j;
		}
		fat[i] = fat[i];
	}
	
	for(int i = 0; i < Lin; i++) {
		matriz[i][0] = A[i] + 5;
		matriz[i][1] = fat[i];
		matriz[i][2] = A[i] * A[i];
	}
	
	printf("\n\nMATRIZ C\n");
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

