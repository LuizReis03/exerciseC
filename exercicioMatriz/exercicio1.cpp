#include <stdio.h>
#include <stdlib.h>
#define Lin 2
#define Col 3

int imprime(int matriz[Lin][Col]);

int main(){
	
	int A[Lin][Col];
	int B[Lin][Col];
	int C[Lin][Col];
	
	printf("MATRIZ A\n");
	
	for(int i = 0; i < Lin; i++) {
		for(int j = 0; j < Col; j++){
			printf("Linha %i Coluna %i: ", i,j);
			scanf("%i", &A[i][j]);
		}
	}
	
	printf("MATRIZ B\n");
	for(int i = 0; i < Lin; i++) {
		for(int j = 0; j < Col; j++){
			printf("Linha %i Coluna %i: ", i,j);
			scanf("%i", &B[i][j]);
		}
	}
	
	printf("MATRIZ B\n");
	for(int i = 0; i < Lin; i++) {
		for(int j = 0; j < Col; j++){
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	
	printf("\n\nMATRIZ A\n");
	imprime(A);
	
	printf("\n\nMATRIZ B\n");
	imprime(B);
	
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

