#include <stdio.h>
#include <stdlib.h>
#include <functionpile.h>


int main(){// Função principal
	
	No *Pilha = (No *) malloc(sizeof(No));
	
	if(Pilha== NULL){
		printf("Sem memoria disponivel para alocar a pilha.\n");
		exit(1);
	} 
	else{
		inicia(Pilha);
		menu(Pilha);	
		free(Pilha);
		return 0;
	}
	
}

