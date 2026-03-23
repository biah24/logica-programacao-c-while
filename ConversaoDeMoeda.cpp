//Desenvolva um programa que converta um valor monetário informado pelo usuário
//em uma outra moeda. O usuário deverá escolher entre três moedas de destino: Dólar,
//Euro ou Peso, e o programa exibirá o valor convertido.

#include<stdio.h>

int main(){
	
	int opmoeda, op;
	float resultado, valor;
	

	printf("Converter para:\n");
	printf("1. Dolar\n");
	printf("2. Euro\n");
	printf("3. Peso\n");
	printf("Digite 1, 2 ou 3:");
	scanf("%d", &opmoeda);
	printf("Digite o valor em Real: ");
	scanf("%f", &valor);
	
	switch(opmoeda){
		
		case 1: 
			resultado = valor * 5.63;
				printf("R$%.2f equivale a US$%.2f", valor,resultado);
		break;
				
		case 2: 
			resultado = valor * 6.25;
				printf("R$%.2f equivale a €%.2f", valor,resultado);
		break;
				
		case 3: 
			resultado = valor * 0.0059;
				printf("R$%.2f equivale a $%.2f", valor,resultado);
		break;
	
	default:
		printf("Opcao invalida, digite 1, 2 ou 3!");
	break;
			

	}
	return 0;
}
	
