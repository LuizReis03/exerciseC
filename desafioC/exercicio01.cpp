#include <iostream>
#include<conio.h>
#include <stdlib.h>

int main(){
	
	int entrada = 0;
	int res = 0;
	
	printf("Digite um numero para ver calcular a tabuada: ");
	scanf("%d", &entrada);
	
	for(int i = 1; i <= 10; i++){
		res = entrada * i;
		printf("\t %d X %d = %d\n", entrada, i, res);
	}
	
	
	return 0;
}
