#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

 

struct Node {
  int data;
  struct Node* next;
};

 

struct Queue {
  struct Node* front;
  struct Node* rear;
};

 

struct Queue* initialize(){
  struct Queue* q = (struct Queue*) malloc(sizeof(struct Queue));
  q->front = q->rear = NULL;
  return q;
};

 

bool isEmpty(struct Queue* q){
  return q->front == NULL;
}

 

void enqueue(struct Queue* q, int value){
  struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
  if (newNode == NULL){
    printf("Falha na alocação de memória");
    return;
  }
  newNode->data = value;
  newNode->next = NULL;
  if (isEmpty(q)){
    q->front = q->rear = newNode;
  } else {
    q->rear->next = newNode;
    q->rear = newNode;
  }
};

 


inr peek(struct Queue* q){
	if (isEmpty(q)){
		printf("fila vazia");
		exit(EXIT_FAILURE);
	}
	return q->front->data;
}



void dequeue(struct Queue* q){
  if (isEmpty(q)){
    printf("Fila vazia!");
    return;
  }
  struct Node* temp = q->front;
  q->front = q->front->next;
  free(temp);
  if (q->front == NULL){
    q->rear = NULL;
  }
}

 
void printQueue(struct Queue* q){
  if (isEmpty(q)){
    printf("Fila vazia!");
    return;
  }
  struct Node* temp = q->front;
  printf("Fila: ");
  while(temp != NULL){
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}


int main(){
  struct Queue* queue = initialize();
  int choice, value;
 
 while(1){
 	printf("menu:\n");
 	printf("1. Enfileirar\n");
 	printf("2. Desenfileirar\n");
 	printf("3. Ver frente\n");
 	printf("4. Imprimir fila\n");
 	printf("5. Sair\n");
 	printf("%d", &choice);
 	
 	switch(choice){
 		case 1:
 			printf("digite o valor a ser enfileirado: ");
 			scanf("%d", &value);
 			enqueue(queue, value);
 			break;
 			
 		case 2:
 			if (!isEmpty(queue)){
 				dequeue(queue);
 				printf //nao acabou
			 }
	 }
 }
 
 
  //incluir na fila
  enqueue(queue, 10);
  enqueue(queue, 20);
  enqueue(queue, 5);
  enqueue(queue, 99);

  printQueue(queue);
  
  //retirar da fila
  dequeue(queue);
  printQueue(queue);

  dequeue(queue);
  dequeue(queue);
  dequeue(queue);
  printQueue(queue);

 
  dequeue(queue);
  printQueue(queue);
}