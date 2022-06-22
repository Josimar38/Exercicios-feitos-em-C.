	#include <stdio.h>
	#include <stdlib.h>
	
	/* Faça um programa na linguagem C que solicite 3 valores com vírgula ao usuário. O primeiro valor será o valor 
	   inicial de um processo de contagem. O segundo valor será o valor final da contagem. O terceiro valor será o 
	   incremento do valor da contagem. Ao final, mostre todos os valores no processo de contagem.
	   Exemplo: */
	
	int main(int argc, char *argv[]) {
		float i, n1, n2, n3;
		
		printf(" Digite o primeiro numero com ponto para comecar a contagem: ");
		scanf("%f", &n1);
		printf(" Digite o segundo numero com ponto para o final da contagem: ");
		scanf("%f", &n2);
		printf(" Digite o terceiro numero com ponto para encremento da contagem: ");
		scanf("%f", &n3);
		
		for(i = n1; i <= n2; i += n3){
			printf(" %.2f\n", i);
		}	
		return 0;
	}
