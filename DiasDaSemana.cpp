//Escreva um programa que receba um número de 1 a 7 e exiba o dia da semana
//correspondente (1 para Domingo, 2 para Segunda-feira, etc.). Se o número não for fora
//do intervalo de 1 a 7, o programa deve exibir uma mensagem “Número inválida”.

#include<stdio.h>

int main(){
	int dia;
	
	printf("Dias da semana:\n1.Domingo\n2.Segunda\n3.Terca\n4.Quarta\n5.Quinta\n6.Sexta\n7.Sabado");
	printf("Escolha um dia (1, 2, 3, 4, 5, 6 ou 7):");
	scanf("%d", &dia);
	
	switch(dia){
		case 1:
			printf("Domingo!");
		break;
		case 2:
			printf("Segunda!");
		break;
		case 3:
			printf("Terca!");
		break;
		case 4:
			printf("Quarta!");
		break;
		case 5:
			printf("Quinta!");
		break;
		case 6:
			printf("Sexta!");
		break;
		case 7:
			printf("Sabado!");
		break;
		default:
			printf("Numero invalido!");
		break;
	}
}
