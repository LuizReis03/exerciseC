#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	
typedef struct
{
	char nome[100];
	float altura;
}Pessoa;

void imprimirPessoa(Pessoa p);
Pessoa inserirPessoa();
	
main()
{
	int Tam;
	printf("Digite a quantidade de pessoas que deseja registrar: ");
	scanf("%d", &Tam);
	
	Pessoa pessoa[Tam];
	int i, j, opc;
	int tamanho = 0;
	float media;
	FILE *arquivo; //variavel com ponteiro para arquivo
	system("cls");
	
	while(1){
		printf("AGENDA:\n1-Cadastrar %d pessoas\n2-Mostrar pessoa com 1.5m ou menos\n3-Apresentar pessoas com mais de 1.5m\n4-Apresentar pessoas com mais de 1.5m e menos de 2.0m\n5-Mostrar todas pessoas\n6-Sair\n\nDigite: ", Tam);
		scanf("%d", &opc);
		system("cls");
		switch(opc){
			case 1:
				
				if(tamanho < Tam){
					for(i = 0; i < Tam;i++){
						//abrindo o arquivo com o tipo de abertura W
						arquivo = fopen("arquivoAtividade03.txt", "a");
						
						if(arquivo == NULL){
							printf("Erro na arbetura do arquivo!");
						}else{
							
							fflush(stdin);
							printf("Digite um nome: ");
							fgets(pessoa[i].nome, 100, stdin);
							fprintf(arquivo,"----Pessoa---- \nNome: %s", pessoa[i].nome);
							
							printf("Digite a altura: ");
							scanf("%f", &pessoa[i].altura);
							fprintf(arquivo,"Altura: %.2f\n\n", pessoa[i].altura);
							fflush(stdin);
							
							printf("\n\nDados gravados com sucesso!\n\n");
							
							printf("\n\n");
							tamanho++;
							fclose(arquivo);
						}
					}
					system("cls");
				}else{
					printf("Quantidade de cadastros excedido!!\n\n");
				}
				
			break;
			
			case 2:
				
				if(tamanho != 0){
					printf("LISTA DE PESSOAS\n");
					for(i = 0;i < Tam;i++){ 
						if(pessoa[i].altura <= 1.5){
							imprimirPessoa(pessoa[i]);
						}
					}
				}else{
					printf("Nao ha registros ainda!!\n\n");
				}
				
			break;
			
			case 3:
				
				if(tamanho != 0){
					printf("LISTA DE PESSOAS\n");
					for(i = 0;i < Tam;i++){ 
						if(pessoa[i].altura > 1.5){
							imprimirPessoa(pessoa[i]);
						}
					}
					}else{
						printf("Nao ha registros ainda!!\n\n");
				}
				
			break;
			
			case 4:
				
				if(tamanho != 0){
					printf("LISTA DE PESSOAS\n");
					for(i = 0;i < Tam;i++){ 
						if(pessoa[i].altura > 1.5 && pessoa[i].altura < 2.0){
							imprimirPessoa(pessoa[i]);
						}
					}
				}else{
					printf("Nao ha registros ainda!!\n\n");
				}
					
			break;
			
			case 5:
				
				if(tamanho != 0){
					printf("LISTA DE PESSOAS\n");
					for(i = 0;i < Tam;i++){
						media = media + pessoa[i].altura;
						imprimirPessoa(pessoa[i]);
					}
					media = media/Tam;
					printf("Media das alturas: %.2f\n\n", media);
				}else{
					printf("Nao ha registros ainda!!\n\n");
				}
					
			break;
			
			case 6:
				
				printf("Programa finalizado!!");
				exit(0);
					
			break;
			
			default:
				
				printf("Reveja o que foi digitado!!");
				
			break;
		}
	
	}
	
}

void imprimirPessoa(Pessoa p)
{
	printf("\nNome: %s", p.nome);
	printf("\nAltura: %.2f\n\n", p.altura);
}


Pessoa inserirPessoa()
{
	Pessoa p;
	fflush(stdin);
	printf("Digite um nome: ");
	fgets(p.nome, 100, stdin);
	printf("Digite a altura: ");
	scanf("%f", &p.altura);
	printf("\n\n");
	return p;
}
