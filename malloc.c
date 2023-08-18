#include <stdlib.h>
#include <stdio.h>
main(){
	int *ptr_a;
	ptr_a = malloc(sizeof(int));
	// cria a area necessaria p 01 inteiro e 
	// coloca em 'ptr_a' o endereçp desta area.
	if (ptr_a == NULL){
		printf("MEMORIA INSUFICIENTE\N");
		exit(1);
	}
	printf("enderedo de ptr_a: %p\n", ptr_a);
	*ptr_a = 45;
	printf("conteudo de prt_a: %d\n", *ptr_a); //imprime 45
	free(ptr_a); //libera a area alocada
}