#include <stdlib.h>
#include <stdio.h>
#define Lin 5
#define Col 2

int imprime(int M[Lin][Col]);

int main() {
	
	int A[Lin][Col];
	int B[Lin][Col];
	
	for(int i = 0; i < Lin; i++) {
		for(int j = 0; j < Col; j++){
			printf("Digite os valores em Celsius: ", i,j);
			scanf("%i", &A[i][j]);
		}
	}
	
	printf("\n\nEM Celsius\n");
	imprime(A);
	
	for(int i = 0; i < Lin; i++) {
		for(int j = 0; j < Col; j++){
			B[i][j] = (A[i][j] * 1.8) + 32;
		}
	}
	
	printf("\n\nEM FAHRENHEIT\n");
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

