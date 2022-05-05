#include <stdlib.h>
#include <stdio.h>
#define Lin 3
#define Col 3

int main() {
	
	int A[Lin][Col];
	float par = 0.0;
	float impar = 0.0;
	float porcentPar = 0.0;
	float porcentImpar = 0.0;
	int qtde = 0;
	
	for(int i = 0; i < Lin; i++) {
		for(int j = 0; j < Col; j++){
			printf("Digite para a matriz A [%i][%i]: ", i,j);
			scanf("%i", &A[i][j]);
			
			if(A[i][j] % 2 == 0){
				par++;
				qtde++;
			}else{
				impar++;
				qtde++;
			}
			
		}
	}
	
	porcentImpar = (impar * 100)/qtde;
	porcentPar = (par * 100)/qtde;
	
	printf("\nA quantidade de pares na Matriz e: %.0f\n", par);
	printf("\nA quantidade de impares na Matriz e: %.0f\n\n", impar);
	printf("\nA porcentagem de pares na Matriz e: %.1f\n", porcentPar);
	printf("\nA porcentagem de impares na Matriz e: %.1f", porcentImpar);
	
	return 0;
}


