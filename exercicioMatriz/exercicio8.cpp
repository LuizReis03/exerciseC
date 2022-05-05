#include <stdlib.h>
#include <stdio.h>
#define Lin 5
#define Col 5

int imprime(int M[Lin][Col]);

int main() {
	
	int A[Lin][Col];
	int B[Lin][Col];
	
	for(int i = 0; i < Lin; i++) {
		for(int j = 0; j < Col; j++){
			printf("Digite para a matriz A: ", i,j);
			scanf("%i", &A[i][j]);
		}
	}

	for(int i = 0; i < Lin; i++) {
		for(int j = 0; j < Col; j++){
			if(i == j){
				B[i][j] =  B[i][j] * 3;
			}else{
				B[i][j] =  B[i][j] * 2;
			}
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

