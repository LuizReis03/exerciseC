#include <stdlib.h>
#include <stdio.h>
#define Lin 3
#define Col 3

int main() {
	
	int A[Lin][Col];
	int B[Lin];
	int soma = 0;
	
	for(int i = 0; i < Lin; i++) {
		for(int j = 0; j < Col; j++){
			printf("Digite para a matriz A [%i][%i]: ", i,j);
			scanf("%i", &A[i][j]);
		}
	}
	
	for(int i = 0; i < Lin; i++) {
		soma = 0;
		for(int j =0; j < Col; j++){
			soma = soma + A[i][j];
		}
		B[i] = soma;
	}
	
	printf("\nSoma de cada linha da matriz: \n");
	for(int i = 0; i < Lin; i++){
		printf("%i \n", B[i]);
	}
	
	return 0;
}

