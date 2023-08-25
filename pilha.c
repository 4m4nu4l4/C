#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// estrutura utilizada
struct Node{
	int data;
	struct Node* next;
	
};

//iniciando a pilha vazia 
struct Node* initialize(){
	return NULL;
	
}

// verificar se a pilha está vazia 
bool isEmpty(struct Node* top){ // TOP VAI RECEBER COMO PARAMETRO 
	return top == NULL; // ESSA FUNÇÃO isempty vai retornar uma função do tipo bool -> bollean
}

//add elemento no topo da pilha
struct Node* push(struct Node*, int value){ //push é a função 
	struct Node* newNode = (struct Node*) malloc(sizeof(struct Node)); //alocando um endereço de memoria 
	if (newNode == NULL){
		printf("falha na alocação na memória");
		return top;
	}
	newNode->data = value; // add o valor que estava nulo
	newNode->next = top; //top ficou em baixo
	return newNode;
}


// estrutura e vetor nao precisa de &


int main(void){
	printf("hello word\n")
	return 0;
}