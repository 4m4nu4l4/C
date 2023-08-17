/*Desenvolver um programa em C que modificará as vogais de uma frase.

-Imprimir a frase lida trocando as vogais, isto é, trocar 'a' pelo 'u', 'e' pelo 'o', 'i' pelo 'u', 'o' pelo 'a' e o 'u' pelo 'e'.
-Usar uma função void para realizar a troca e uma função para realizar a impressão da frase trocada.
-A função deve ter como parâmetro um ponteiro char referente ao vetor.

-Foi utilizado a função gets() da biblioteca string.h para realizar a leitura da frase.

-Foi usado o switch para realizar as trocas.

-Foi considerado só as letras minúsculas.
*/
#include <stdio.h>
#include <locale.h>
#include <string.h>

void frase (char *frase);
void mostrar (char *frase);
void troca (char *frase);


void main () {
	system("chcp 65001");
	char frase [100];
	printf(" Digite uma frase, vc tem no máx 100 caracteres :)");
	scanf ("%d", &frase);

	gets (frase);
	mostrar (&frase);
	
	return 0;
}

void mostrar (char *frase){
	printf ("%s", frase);
}

void troca (char *frase){
	switch (*frase){
		case 1:
		
			break;
		case 2:
		
			break;
		case 3:
		
			break;
		case 4:
			
			break;
		case 5 = u
			*frase = e;
			break;
	}
}





