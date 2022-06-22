	#include <stdio.h>
	#include <stdlib.h>
	
	/* Faça um programa na linguagem C que some os números ímpares entre 1000 e 4000. Ao final, mostre o 
	   valor total da soma. Utilize laço de repetição! */
	
	int main(int argc, char *argv[]) {
		int i, soma;
		
		for(i = 1000; i <= 4000; i++){
	       if(i % 2 == 1){
	       	soma += i;
		   }	
		}
		printf( "O total da soma dos impares %.2d.", soma);
		return 0;
	}
