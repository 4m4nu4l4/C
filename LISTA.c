#include <stdio.h>
#include <stdlib.h>

struct node{
	int nDado;
	struct node *next;
};

void display(struct node *p){
   printf("Mostrando a lista:\n");
   if(p){
      do{
         printf("\n%d", p->nDado);
         p=p->next;
      }while(p);
   }else {
      printf("lista vazia");
   }
}

int main(void) {
	struct node *pNode1 = NULL;
	struct node *pNode2 = NULL;
	struct node *pNode3 = NULL;
	struct node *pNode99 = NULL;
	
	//criando os nodes e associando os dados
	pNode1 = (struct node*) malloc(sizeof(struct node*)); //criei o espaço de memória
	pNode1->nDado = 10;
	
	pNode2 = (struct node*) malloc(sizeof(struct node*));
	pNode2->nDado = 20;
	
	pNode3 = (struct node*) malloc(sizeof(struct node*));
	pNode3->nDado = 30;
	
	pNode99 = (struct node*) malloc(sizeof(struct node*));
	pNode99->nDado = 40;
	
	//conectando os nós
	pNode1->next = pNode2;
	pNode2->next = pNode3;
	pNode3->next = pNode99;
	pNode99->next = NULL;
	
	if(pNode1){
	   display(pNode1);
	}
	
	
	return 0;
}