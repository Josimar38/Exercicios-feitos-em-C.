	#include <stdio.h>
	#include <stdlib.h>
	
	/* Considerando o programa abaixo, modifique-o para que o programa pare de imprimir os valores at� 10. O 
	   programa deve imprimir at� um valor inteiro informado pelo usu�rio.*/
	
	int main(int argc, char *argv[]) {
		int i, j, usuario;
		
		printf("Digite um numero inteiro para o final da contagem: ");
		scanf("%d", &usuario);
		
		for(i = 1; i <= usuario; i++){
		  for(j = 1; j <= usuario; j++){
		  	 printf(" %d\n", j);
		  }
		  printf("\n");
		}
		return 0;
	}
