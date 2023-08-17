#include <stdio.h>
#include <locale.h>

//declaraçao da funçao
int multiplicar(int*x, int *y);

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1=3;
	int num2=4;
	int result=0;
	
	printf("\n antes de chamar a funcao: ");
	printf("\n Num 1 e: %d", num1);
	printf("\n Num 2 e %d", num2);
	result = multiplicar(&num1, &num2);
	printf("\n O resultado e: %d", result);
	
	printf("\n dps de chamar a funcao: ");
	printf("\n Num 1 e: %d", num1);
	printf("\n Num 2 e: %d", num2);
	
};
	
	int multiplicar(int *x, int *y){
		*x = 20; 
		return *x * *y;
	}
