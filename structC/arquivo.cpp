#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE *arquivo; //variavel com ponteiro para arquivo
	char palavra[20];
	
	//abrindo o arquivo com o tipo de abertura W
	arquivo = fopen("arquivo.txt", "w");
	
	if(arquivo == NULL){
		printf("Erro na arbetura do arquivo!");
	}else{
		printf("Escreva uma frase para testar gravacao do arquivo: ");
		gets(palavra);
		//usando fprintf para armazenar a string no arquivo
		fprintf(arquivo,"%s", palavra);
		//usando fclose para fechar o arquivo
		fclose(arquivo);
		
		printf("Dados gravados com sucesso!");
	}
	
	return 0;
}
