//Escreva um programa que leia um número inteiro e imprima a sua tabuada de
//multiplicação de 1 a 10.
#include<stdio.h>

int main(){
	int i = 0;
	int num, calculo;
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	while (i < 10){
		i++;
		calculo = num * i;
		
		printf("%d multiplicado por %d eh:  %d\n", num, i, calculo);
	
	}
}
