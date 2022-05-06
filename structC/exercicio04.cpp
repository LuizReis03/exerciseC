#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
	char nome[100];
	int matricula;
	float salario;
}
Pessoa;
Pessoa lerPessoa();
void imprimirPessoa(Pessoa p);
	
main()
{
	Pessoa pessoas[5];
	int i, j;
	int indicador = 0;
	int opcao = 0;
	int regist;
	int aux;
	int contador = 1;
	
	printf("|__________________Bosch - Funcionarios__________________|");
	while (indicador == 0){
		printf("\n\n-------------------Menu De Opcoes------------------\n");
		printf("1 - Cadastrar Funcionario\n2 - Classificar Funcionarios\n3 - Pesquisar Funcionario\n4 - Funcionarios que recebem acima de R$1000,00\n5 - Funcionarios que recebem abaixo de R$1000,00\n6 - Funcionarios que recebem R$1000,00\n7 - Sair\nInsira: ");
		scanf("%i",&opcao);
		system("cls");
		
		//opção 1
		if(opcao == 1){
			FILE*arquivo;
			arquivo = fopen("arquivoAtividade04.txt","a");
			printf("Cadastro [%i]",contador);
			pessoas[contador] = lerPessoa();
			fprintf(arquivo,"%s","\nRegistro - ");
			fprintf(arquivo,"%s","\nMatricula: ");
			fprintf(arquivo,"%i",pessoas[contador].matricula);
			fprintf(arquivo,"%s","\nNome: ");
			fprintf(arquivo,"%s",pessoas[contador].nome);
			fprintf(arquivo,"%s","\nSalario: ");
			fprintf(arquivo,"%f",pessoas[contador].salario);
			contador++;
			system("cls");	
			fclose(arquivo);			
		}
		
		//opção 2
		else if(opcao == 2){
			for(i = 1;i < contador;i++){
				for (j = i + 1; j < contador;j++){
					if(pessoas[i].matricula > pessoas[j].matricula){
						pessoas[0] = pessoas[i];
						pessoas[i] = pessoas[j];
						pessoas[j] = pessoas[0];
					}
				}
			}
			printf("----Classificar Funcionarios----\n");
			for (i = 1; i < contador; i++){
				imprimirPessoa(pessoas[i]);
			}
		}
		
		//opção 3
		else if(opcao == 3){
			printf("----Pesquisar Funcionario----\n");
			fflush(stdin);
			printf("Insira o numero da matricula: ");
			scanf("%i",&regist);
			for(i = 1;i < contador;i++){
				if (pessoas[i].matricula == regist){
					printf("\nMatricula.......:[%i]",pessoas[i].matricula);
					printf("\nFuncionario.....: %s", pessoas[i].nome);
					printf("Salario.........: R$%.2f\n", pessoas[i].salario);
				}	
				
			}
        }
		    
	    //opção 4
		else if(opcao == 4){
			printf("----Salario Superior a R$1000,00----\n");
			for(i = 1;i < contador;i++){
				if (pessoas[i].salario > 1000){
					printf("\nMatricula.......:[%i]",pessoas[i].matricula);
					printf("\nFuncionario.....: %s", pessoas[i].nome);
					printf("Salario.........: R$%.2f\n", pessoas[i].salario);
				}
			}  
		}
		
		//opção 5
		else if(opcao == 5){
			printf("----Salarios Inferiores a R$1000,00----");
			for(i = 1;i < contador;i++){
				if (pessoas[i].salario < 1000){
					printf("\nMatricula.......:[%i]",pessoas[i].matricula);
					printf("\nFuncionario.....: %s", pessoas[i].nome);
					printf("Salario.........: R$%.2f\n", pessoas[i].salario);
				}
			}
		} 
		
		//opção 6
		else if (opcao == 6){
			printf("----Salarios Iguais a R$1000,00----");
			for(i = 1;i < contador;i++){
				if (pessoas[i].salario == 1000){
					printf("\nMatricula.......:[%i]",pessoas[i].matricula);
					printf("\nFuncionario.....: %s", pessoas[i].nome);
					printf("Salario.........: R$%.2f\n", pessoas[i].salario);
				}
			}
		}
		
		//opção 7
		else if (opcao == 7){
			printf("Saindo do sistema...");
			indicador ++;
		}
		//opções != 1,2,3,4,5,6,7
		else{
				printf("Opcao Invalida...");
			}		
	}
}
void imprimirPessoa(Pessoa p)
{
	printf("\nMatricula.......: %i",p.matricula);
	printf("\nFuncionario.....: %s", p.nome);
	printf("Salario.........: R$%.2f\n", p.salario);
}
Pessoa lerPessoa()
{
	Pessoa p;
	fflush(stdin);
	printf("\nMatricula: ");
	scanf("%i",&p.matricula);
	fflush(stdin);
	printf("\nNome do Funcionario: ");
	fgets(p.nome, 80, stdin);
	printf("\nSalario: ");
	scanf("%f",&p.salario);
	return p;
}
