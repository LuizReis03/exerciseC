#include <stdio.h>
#include <stdlib.h>
#define Lin 3
#define Col 2

int imprime(int M[Lin][Col]);

main(){
	
	int M[Lin][Col];
	for(int i = 0; i < Lin; i++) {
		for(int j = 0; j < Col; j++){
			printf("Linha %i Coluna %i: ", i,j);
			scanf("%i", &M[i][j]);
		}
	}
	
	imprime(M);
	
	return 0;
}

int imprime(int M[Lin][Col]){
	
	for(int i = 0; i < Lin; i++) {
		for(int j = 0; j < Col; j++){
			printf("%i   ", M[i][j]);
		}
		printf("\n");
	}
	
}
