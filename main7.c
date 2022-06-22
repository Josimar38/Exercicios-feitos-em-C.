	#include <stdio.h>
	#include <stdlib.h>
	
	/* Faça um programa na linguagem C que solicite ao usuário um número inteiro. Mostre todos os valores 
	   conforme o padrão apresentado exemplo abaixo. DICA: utilize 2 laços de repetição um dentro do outro!
	   Exemplo: */
	
	int main(int argc, char *argv[]) {
		int i, j, usuario;
		
		printf(" Digite um numero inteiro: ");
		scanf("%d.", &usuario);
		
		for(i = 1; i <= usuario; i++){
		  for(j = 1; j <= i; j++){
		    printf(" %d",j);		
		}	
		 printf("\n");
		}
		return 0;
	}
