#include<stdio.h>

int main(){
	int num, fatorial = 1;

	printf("Digite um numero: ");
	scanf("%d", &num);
	while (num != 1){
		fatorial = num * fatorial;
		num--;
	
		
		
	}printf("%d", fatorial);
	
} 
