#include <stdlib.h>
#include <stdio.h>
#define Lin 4
#define Col 5

int imprime(int M[Lin][Col]);

int main() {
	
	int A[Lin][Col];
	int B[Lin][Col];
	
	for(int i = 0; i < Lin; i++) {
		for(int j = 0; j < Col; j++){
			printf("Digite para a matriz A [%i][%i]: ", i,j);
			scanf("%i", &A[i][j]);
			if(i % 2 != 0 && j % 2 != 0 && i == j){
				int result = 0;
				for(int x = A[i][j]; x > 0; x--){
					result = result + x;
				}
				A[i][j] = result;
			}
		}
	}

	system("cls");
	imprime(A);
	
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

