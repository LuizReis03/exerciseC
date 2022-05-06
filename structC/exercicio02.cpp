#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	
typedef struct
{
	char nome[100];
	float nota1;
	float nota2;
}Alunos;

Alunos inserirAlunos();
	
main()
{
	int Tam;
	printf("Digite a quantidade de alunos que deseja registrar: ");
	scanf("%d", &Tam);
	
	Alunos alunos[Tam];
	int i, j, opc;
	int tamanho = 0;
	char pesquisa[20], temp[30];
	float media;
	FILE *arquivo; //variavel com ponteiro para arquivo
	system("cls");
	
	while(1){
		printf("AGENDA:\n1-Cadastrar %d alunos\n2-Pesquisar aluno\n3-Apresentar todos registros\n4-Sair\n\nDigite: ", Tam);
		scanf("%d", &opc);
		system("cls");
		switch(opc){
			case 1:
				
				if(tamanho < Tam){
					for(i = 0; i < Tam;i++){
						//abrindo o arquivo com o tipo de abertura W
						arquivo = fopen("arquivoAtividade02.txt", "a");
						
						if(arquivo == NULL){
							printf("Erro na arbetura do arquivo!");
						}else{
							
							fflush(stdin);
							printf("Digite um nome: ");
							fgets(alunos[i].nome, 100, stdin);
							fprintf(arquivo,"----Aluno---- \nNome: %s", alunos[i].nome);
							
							printf("Digite a nota 1: ");
							scanf("%f", &alunos[i].nota1);
							fprintf(arquivo,"Nota 1: %.2f\n", alunos[i].nota1);
							fflush(stdin);
							
							printf("Digite a nota 2: ");
							scanf("%f", &alunos[i].nota2);
							fprintf(arquivo,"Nota 2: %.2f\n", alunos[i].nota2);
							fflush(stdin);
							
							media = (alunos[i].nota1 + alunos[i].nota2)/2;
							fprintf(arquivo,"Media: %.2f\n", media);
							if(media >= 50.0){
								fprintf(arquivo,"Situação: Aprovado\n\n");
							}else if(media < 50.0){
								fprintf(arquivo,"Situação: Reprovado\n\n");
							}
							
							
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
				
				printf("Qual o nome da pessoa que deseja? ");
				fflush(stdin);
				fgets(pesquisa, 20, stdin);
				
				for(i = 0;i < Tam;i++){
					media = (alunos[i].nota1 + alunos[i].nota2)/2;
					if(strcmp(alunos[i].nome, pesquisa)==0){
						printf("\nNome: %s", alunos[i].nome);
						printf("\nNota 1: %.2f\n", alunos[i].nota1);
						printf("\nNota 2: %.2f\n", alunos[i].nota2);
						printf("\nMedia: %.2f\n\n", media);
						if(media >= 50.0){
							printf("\nEsta aprovado(a)! Parabens %s\n\n", alunos[i].nome);
						}else if(media < 50.0){
							printf("\nEsta reprovado(a)! Infelizmente %s\n\n", alunos[i].nome);
						}
						break;
					}
				}
				
			break;
			
			case 3:
				if(tamanho != 0){
					printf("DADOS DA AGENDA\n");
					for(i = 0;i < Tam;i++){ 
						imprimirAlunos(alunos[i]);
						media = (alunos[i].nota1 + alunos[i].nota2)/2;
						printf("Media: %.2f\n\n", media);
						if(media >= 50.0){
							printf("\nEsta aprovado(a)! Parabens %s\n\n", alunos[i].nome);
						}else if(media < 50.0){
							printf("\nEsta reprovado(a)! Infelizmente %s\n\n", alunos[i].nome);
						}
					}
					
				}else{
					printf("Agenda vazia!!\n\n");
				}
				
			break;
			
			case 4:
				
				printf("Programa finalizado!!");
				exit(0);
					
			break;
			
			default:
				
				printf("Reveja o que foi digitado!!");
				
			break;
		}
	
	}
	
}


Alunos inserirAlunos()
{
	Alunos a;
	fflush(stdin);
	printf("Digite um nome: ");
	fgets(a.nome, 100, stdin);
	printf("Digite a nota 1: ");
	scanf("%f", &a.nota1);
	printf("Digite a nota 2: ");
	scanf("%f", &a.nota2);
	printf("\n\n");
	return a;
}
