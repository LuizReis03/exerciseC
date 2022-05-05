#include <stdlib.h>
#include <stdio.h>
#define Lin 6
#define Col 5

int imprime(int M[Lin][Col]);

int main() {
	
	int A[Lin][Col];
	int B[Lin][Col];
	
	for(int i = 0; i < Lin; i++) {
		for(int j = 0; j < Col; j++){
			printf("Digite para a matriz A [%i][%i]: ", i,j);
			scanf("%i", &A[i][j]);
		}
	}

	for(int i = 0; i < Lin; i++) {
		for(int j = 0; j < Col; j++){
			B[i][j] = A[i][j];
			if(A[i][j] % 2 == 0){
				B[i][j] = A[i][j] + 5;
			}else{
				B[i][j] = A[i][j] - 4;
			}
		}
	}
	
	system("cls");
	printf("        MATRIZ B\n");
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

