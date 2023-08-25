#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int data;
    struct Node* next;
};

// Inicializa uma pilha vazia
struct Node* inicializar() {
    return NULL;
}

// Verifica se a pilha está vazia
bool estaVazia(struct Node* topo) {
    return topo == NULL;
}

// Adiciona um elemento ao topo da pilha
struct Node* empilhar(struct Node* topo, int valor) {
    struct Node* novoNo = (struct Node*)malloc(sizeof(struct Node));
    if (novoNo == NULL) {
        printf("Falha na alocação de memoria\n");
        exit(EXIT_FAILURE);
    }
    novoNo->data = valor;
    novoNo->next = topo;
    return novoNo;
}

// Obtém o tamanho da pilha
int tamanho(struct Node* topo) {
    int count = 0;
    struct Node* temp = topo;
    while (temp != NULL) {
        count++;
        temp = temp->next; //temp vai dizer com qual estrutura eu to interagindo 
    }
    return count;
}

//obtem a estrutura no topo da pilha
int peek(struct Node* top){
	if (isEmpty(top)){
		printf("pilha vazia, nao ha elementos para mostrar");
		exit(EXIT_FAILURE); // comando dizendo que deu falha
	}
	return top->data; 
}

//remover do topo da pilha 
struct Node* pop9struct Node* top){
	if(isEmpty(top)){
		printf("pilha vazia nao ha elementos\n");
		return top;
	}
	
	
	struct Node* temp = top; //temp é quem eu quero eliminar de cima
	top =  top->next;
	free(temp);
	return top;
}






int main() {
    struct Node* pilha = inicializar();
    int escolha, valor;

    while (1) {
        printf("Menu:\n");
        printf("1. Empilhar\n");
        
        printf("4. Obter tamanho da pilha\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Digite o valor para empilhar: ");
                scanf("%d", &valor);
                pilha = empilhar(pilha, valor);
                break;

            case 2:
                printf("Tamanho da pilha: %d\n", tamanho(pilha));
                break;

            case 3:
                if (!isEmpty(stack)){
                	value = peek(stack);
                	printf("valor no topo da pilha: %d\n", value);
				}else{
					printf ("pilha vazia\n");
				}
				break;

            case 4:
            	printf("tamanho da pilha ")
        }
    }

    return 0;
}
