#include <iostream>
#include<conio.h>
#include <stdlib.h>

int main(){
	
	int nike = 0;
	int adidas = 0;
	int puma = 0;
	float vlrNike = 0.0;
	float vlrAdidas = 0.0;
	float vlrPuma = 0.0;
	
	printf("Quantidade de chuteiras da Nike? ");
	scanf("%d", &nike);
	printf("\nValor unitario da chuteira da Nike? ");
	scanf("%f", &vlrNike);
	
	printf("\n\nQuantidade de chuteiras da Adidas? ");
	scanf("%d", &adidas);
	printf("Valor unitario da chuteira da Adidas? ");
	scanf("%f", &vlrAdidas);
	
	printf("\n\nQuantidade de chuteiras da Puma? ");
	scanf("%d", &puma);
	printf("Valor unitario da chuteira da Puma? ");
	scanf("%f", &vlrPuma);
	
	printf("\n\n---------ESTOQUE---------\n");
	printf("NIKE        ADIDAS        PUMA\n");
	printf("  %d          %d           %d\n", nike, adidas, puma);
	printf(" %.2f      %.2f        %.2f \n\n", vlrNike, vlrAdidas, vlrPuma);
	
	int continuar = 0;
	int opc = 0;
	int soma = 0;
	int opcChut = 0;
	int unidades = 0;
	
	printf("Bem-vindo!!\n");
	
	while(1){
		printf("1-Verificar chuteiras \n2-Comprar chuteira \n3-Sair\n\nDigite sua opcao: ");
		scanf("%d", &opc);
		
		switch(opc){
			case 1:
				
				system("cls");
				soma = nike + adidas + puma;
				printf("Quantidade de chuteiras disponiveis: %d\n\n", soma);
				printf("Nike: %d unidades\n", nike);
				printf("Adidas: %d unidades\n", adidas);
				printf("Puma: %d unidades\n\n", puma);
				
			break;
			
			case 2:
				
				system("cls");
				printf("Deseja comprar de qual marca?\n");
				printf("1-Nike - R$%.2f\n2-Adidas - R$%.2f\n3-Puma - R$%.2f\n\n", vlrNike, vlrAdidas, vlrPuma);
				printf("Digite: ");
				scanf("%d", &opcChut);

				if(opcChut == 1){
					printf("\n\nQuantas unidades deseja comprar? ");
					scanf("%d", &unidades);
					if(unidades > nike){
						printf("\n\nNao ha essa quantidade no estoque!\n\n");
					}else{
						printf("\n\nValor total: R$%.2f\n\n", vlrNike * unidades);
						printf("Deseja realizar a compra? \n1-Sim \n2-Nao\nDigite: ");
						scanf("%d", &continuar);
						if(continuar == 2){
							printf("\nCompra cancelada!!\n\n");
							break;
						}else if(continuar == 1){
							nike = nike - unidades;
							printf("\nCompra realizada!!\n\n");
						}else if(continuar != 1 || continuar != 2){
							printf("Opcao invalida!!");
						}
					}
				}else if(opcChut == 2){
					printf("\n\nQuantas unidades deseja comprar? ");
					scanf("%d", &unidades);
					if(unidades > adidas){
					printf("\n\nNao ha essa quantidade no estoque!\n\n");
					}else{
						printf("\n\nValor total: R$%.2f\n\n", vlrAdidas * unidades);
						printf("Deseja realizar a compra? \n1-Sim \n2-Nao\nDigite: ");
						scanf("%d", &continuar);
						if(continuar == 2){
							printf("\nCompra cancelada!!\n\n");
							break;
						}else if(continuar == 1){
							adidas = adidas - unidades;
							printf("\nCompra realizada!!\n\n");
						}else if(continuar != 1 || continuar != 2){
							printf("Opcao invalida!!");
						}
					}
				}else if(opcChut == 3){
					printf("\n\nQuantas unidades deseja comprar? ");
					scanf("%d", &unidades);
					if(unidades > puma){
						printf("\n\nNao ha essa quantidade no estoque!\n\n");
					}else{
						printf("\n\nValor total: R$%.2f\n\n", vlrPuma * unidades);
						printf("Deseja realizar a compra? \n1-Sim \n2-Nao\nDigite: ");
						scanf("%d", &continuar);
						if(continuar == 2){
							printf("\nCompra cancelada!!\n\n");
							break;
						}else if(continuar == 1){
							puma = puma - unidades;
							printf("\nCompra realizada!!\n\n");
						}else if(continuar != 1 || continuar != 2){
							printf("Opcao invalida!!");
						}
					}
				}else if(opcChut != 1 || opcChut != 2 || opcChut != 3){
					printf("\nA opcao selecionada e invalida!!\n\n");
				}
				
			break;
			
			case 3:
				printf("\n\nPrograma finalizado!!");
				exit(0);
			break;
			
			default:
				printf("Verifique o que foi digitado!!");
		}
	}
	
	return 0;
}
