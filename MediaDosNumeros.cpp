//Desenvolva um programa que solicite ao usuario quantos n?meros ele deseja inserir
//e, em seguida, calcule e exiba a media desses n?meros.
#include <stdio.h>

int main(){
	
	int i = 0;
	float soma = 0;
	float num;
	int qtdV;
	
	printf("Qtd: ");
	scanf("%d", &qtdV);
	
	while (i < qtdV){ //enquanto i for menor que a quantidade sugerida
		printf("Numero: "); // vai pedir um numero
		scanf("%f", &num);
		soma = num + soma; // soma recebe num 1+ soma (resuldado da soma)
		i++;
	}
	
	printf("Resultado da media: %.2f\n", soma/qtdV);

	return 0;
}
//qtd = 3
//primeiro  
//numero escolhido = 3.
//soma = 0 + 3, soma armazena 3.
//segundo
//numero escolhido = 4.
//soma = 3 + 4, soma agr armazena 7
//terceira 
//numero escolhido = 2.
//soma = 7 + 2, soma armazena 9.


