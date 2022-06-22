	#include <stdio.h>
	#include <stdlib.h>
	
	/* Faça um programa na linguagem C que solicite ao usuário um valor inteiro positivo. Em seguida, imprima 
	   uma árvore de natal feita de asteriscos. A quantidade de linhas na árvore de natal é dado pelo valor 
	   informado pelo usuário.*/
	
	int main(int argc, char *argv[]) {
		int i, j, usuario;
			
			printf(" Digite um numero inteiro positivo: ");
			scanf("%d.", &usuario);
			
			for(i = 1; i <= usuario; i++){
			  for(j = 1; j <= i; j++){
			    printf("*");		
			}	
			 printf("\n");
			}
		return 0;
	}
