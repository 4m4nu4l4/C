#include <stdio.h>

int mostrarMsg(int num1, int num2);

int main(){
	
	int numero1 =3;
	int numero2	=5;
	int resultado = mostrarMsg(numero1, numero2);
	
	printf("Soma: %d", resultado);
	return 0;
}

int mostrarMsg(int num1, int num2){
	return num1 + num2;
}