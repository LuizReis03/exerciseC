#include <stdlib.h>
#include <stdio.h>
#define Lin 5
#define Col 4

int imprime(int M[Lin][Col]);

int main() {
	
	int A[Lin][Col];
	int B[Lin][Col];
	int result = 0;
	
	for(int i = 0; i < Lin; i++) {
		for(int j = 0; j < Col; j++){
			printf("Digite para a matriz A [%i][%i]: ", i,j);
			scanf("%i", &A[i][j]);
		}
	}	

	for(int i = 0; i < Lin; i++) {
		for(int j = 0; j < Col; j++){
			int result = 1;
			for(int x = A[i][j]; x > 0; x--){
				result = result * x;
			}
			B[i][j] = result;
		}
	}	
	
	printf("\n\nMATRIZ B\n");
	imprime(B);
	
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

