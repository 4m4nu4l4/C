#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char nome[100];
    int idade;
    struct Node* next;
};

// Inicializa a lista, retorna um ponteiro nulo
struct Node* initializeList() {
    return NULL;
}

// Insere um nó no início da lista
struct Node* insertAtBegin(struct Node* head, char nome[], int idade) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    strcpy(newNode->nome, nome);
    newNode->idade = idade;
    newNode->next = head;
    return newNode;
}

// Insere um nó no final da lista
struct Node* insertAtEnd(struct Node* head, char nome[], int idade) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    strcpy(newNode->nome, nome);
    newNode->idade = idade;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

// Insere um nó em uma posição específica
struct Node* insertAtPosition(struct Node* head, char nome[], int idade, int position) {
    int i;
	struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    strcpy(newNode->nome, nome);
    newNode->idade = idade;

    if (position == 0) {
        newNode->next = head;
        return newNode;
    }

    struct Node* temp = head;
    for (i = 1; i < position && temp != NULL; ++i) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range.\n");
        free(newNode);
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

// Remove o nó no início da lista
struct Node* removeAtBegin(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return NULL;
    }
    struct Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

// Remove o nó no final da lista
struct Node* removeAtEnd(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return NULL;
    }

    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    struct Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
    return head;
}

// Remove o nó em uma posição específica
struct Node* removeAtPosition(struct Node* head, int position) {
    int i;
	if (head == NULL) {
        printf("List is empty.\n");
        return NULL;
    }

    if (position == 0) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    struct Node* temp = head;
    for (i = 1; i < position && temp->next != NULL; ++i) {
        temp = temp->next;
    }

    if (temp->next == NULL) {
        printf("Position out of range.\n");
        return head;
    }

    struct Node* nodeToRemove = temp->next;
    temp->next = nodeToRemove->next;
    free(nodeToRemove);
    return head;
}

// Imprime a lista
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("Nome: %s, Idade: %d\n", temp->nome, temp->idade);
        temp = temp->next;
    }
}

// Libera a memória da lista
void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}


int main() {
    struct Node* head = initializeList();
    int choice, idade, pos;
    char nome[100];

    // Menu interativo
    while(1) {
        printf("\nMenu:\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at position\n");
        printf("4. Remove from beginning\n");
        printf("5. Remove from end\n");
        printf("6. Remove from position\n");
        printf("7. Print list\n");
        printf("8. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        // Processa a escolha do usuário
        switch(choice) {
            case 1:
                printf("Enter name: ");
                scanf("%s", nome);
                printf("Enter age: ");
                scanf("%d", &idade);
                head = insertAtBegin(head, nome, idade);
                break;
            case 2:
                printf("Enter name: ");
                scanf("%s", nome);
                printf("Enter age: ");
                scanf("%d", &idade);
                head = insertAtEnd(head, nome, idade);
                break;
            case 3:
                printf("Enter name: ");
                scanf("%s", nome);
                printf("Enter age: ");
                scanf("%d", &idade);
                printf("Enter position: ");
                scanf("%d", &pos);
                head = insertAtPosition(head, nome, idade, pos);
                break;
            case 4:
                head = removeAtBegin(head);
                break;
            case 5:
                head = removeAtEnd(head);
                break;
            case 6:
                printf("Enter position: ");
                scanf("%d", &pos);
                head = removeAtPosition(head, pos);
                break;
            case 7:
                printList(head);
                break;
            case 8:
                freeList(head);
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
