	#include <stdio.h>
	#include <stdlib.h>
	
	/* Faça um programa na linguagem C que solicite ao usuário duas letras (tipo char). Imprima todos os símbolos 
	   existentes na tabela ASCII entre as letras digitadas pelo usuário. Considere que a primeira letra (digitada pelo 
	   usuário) sempre virá antes da segunda letra.*/
	
	int main(int argc, char *argv[]) {
		char i, l, p;
		
		printf("Digite a primeira letra para imprimir: ");
		l = getchar();
		printf("Digite a ultima letra para imprimir: ");
		p = getchar();
		
		for(i = l; i <= p; i++){
			printf("%c\n", 'i');
		}
		
		return 0;
	}
