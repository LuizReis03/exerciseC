#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	
typedef struct
{
	char nome[100];
	char endereco[100];
	char telefone[11];
}Agenda;

Agenda inserirAgenda();
	
main()
{
	int Tam;
	printf("Digite o tamanho da agenda: ");
	scanf("%d", &Tam);
	
	Agenda agenda[Tam];
	int i, j, opc;
	int tamanho = 0;
	char pesquisa[20], temp[30];
	FILE *arquivo; //variavel com ponteiro para arquivo
	system("cls");
	
	while(1){
		printf("AGENDA:\n1-Cadastrar %d registros\n2-Pesquisar registro\n3-Apresentar todos registros\n4-Ordenar agenda \n5-Sair\n\nDigite: ", Tam);
		scanf("%d", &opc);
		system("cls");
		switch(opc){
			case 1:
				
				if(tamanho < Tam){
					for(i = 0; i < Tam;i++){
						//abrindo o arquivo com o tipo de abertura W
						arquivo = fopen("arquivoAtividade01.txt", "a");
						
						if(arquivo == NULL){
							printf("Erro na arbetura do arquivo!");
						}else{
							
							fflush(stdin);
							printf("Digite um nome: ");
							fgets(agenda[i].nome, 100, stdin);
							fprintf(arquivo,"----Registro %d---- \nNome: %s", i+1 , agenda[i].nome);
							
							printf("Digite o endereco: ");
							fgets(agenda[i].endereco, 100, stdin);
							fprintf(arquivo,"Endereco: %s", agenda[i].endereco);
							fflush(stdin);
							
							printf("Digite o telefone: ");
							fgets(agenda[i].telefone, 100, stdin);
							fprintf(arquivo,"Telefone: %s\n\n", agenda[i].telefone);
							fflush(stdin);
							
							printf("\n\nDados gravados com sucesso!\n\n");
							
							printf("\n\n");
							tamanho++;
							fclose(arquivo);
						}
					}
					system("cls");
				}else{
					printf("Agenda cheia!!\n\n");
				}
				
			break;
			
			case 2:
				
				printf("Qual o nome da pessoa que deseja? ");
				fflush(stdin);
				fgets(pesquisa, 20, stdin);
				
				for(i = 0;i < Tam;i++){
					if(strcmp(agenda[i].nome, pesquisa)==0){
						printf("\nNome: %s", agenda[i].nome);
						printf("\nEndereco: %s\n", agenda[i].endereco);
						printf("\nTelefone: %s\n\n", agenda[i].telefone);
						break;
					}
				}
				
			break;
			
			case 3:
				if(tamanho != 0){
					printf("DADOS DA AGENDA\n");
					for(i = 0;i < Tam;i++){
						imprimirAgenda(agenda[i]);
					}
				}else{
					printf("Agenda vazia!!\n\n");
				}
				
			break;
			
			case 4:
				
				for(i = 1; i < tamanho; i++){
					for (j = 0; j < tamanho-1; j++){
                       if(strcmp(agenda[j].nome,agenda[j+1].nome) > 0){
							strcpy(temp,agenda[j].nome);
							strcpy(agenda[j].nome,agenda[j+1].nome);
							strcpy(agenda[j+1].nome,temp);
						}
					}
				}
				
				printf("Agenda ordenada!!\n\n");
				
			break;
			
			case 5:
				
				printf("Programa finalizado!!");
				exit(0);
				
			break;
			
			default:
				
				printf("Reveja o que foi digitado!!");
				
			break;
		}
	
	}
	
}

void imprimirAgenda(Agenda a)
{
	printf("\nNome: %s", a.nome);
	printf("\nEndereco: %s\n", a.endereco);
	printf("\nTelefone: %s\n\n", a.telefone);
}




