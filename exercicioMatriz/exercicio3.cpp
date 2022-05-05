#include <stdio.h>
#include <stdlib.h>
#define Lin 4
#define Col 5

int imprime(int matriz[Lin][Col]);

int main() {
	
	int matriz[Lin][Col];

	for(int i = 0; i < Lin; i++) {
		for(int j = 0; j < Col; j++){
			printf("Linha %i Coluna %i: ", i,j);
			scanf("%i", &matriz[i][j]);
		}
	}

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

