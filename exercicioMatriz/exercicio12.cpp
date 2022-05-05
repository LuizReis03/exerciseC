#include <stdlib.h>
#include <stdio.h>
#define Lin 3
#define Col 3

int main() {
	
	int A[Lin][Col];
	int soma;
	
	for(int i = 0; i < Lin; i++) {
		for(int j = 0; j < Col; j++){
			printf("Digite para a matriz A [%i][%i]: ", i,j);
			scanf("%i", &A[i][j]);
			
			if(i == j){
				if(A[i][j] % 2 == 0){
					soma = soma + A[i][j];
				}
			}
		}
	}
	
	printf("O resultado da somatoria e: %i", soma);
	
	return 0;
}


