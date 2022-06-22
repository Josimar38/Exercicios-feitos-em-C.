	#include <stdio.h>
	#include <stdlib.h>
	
	/* Faça um programa na linguagem C que some os números pares entre 1 e 400. Ao final, mostre o valor total 
	   da soma. Utilize laço de repetição! */
	
	int main(int argc, char *argv[]) {
		int i = 0, soma = 0;
		
		for(i = 1; i <= 400; i++){
		  if(i % 2 == 0){
		  	soma += i;
		  }
		}
			printf(" A soma dos numeros pares eh: %d.\n", soma);
		return 0;
	}
