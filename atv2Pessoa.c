/*Crie um programa em C com uma estrutura pessoa que tenha: 
-> um vetor char de 20 elementos chamado nome.
-> um vetor char de 11 elementos denominado cpf.
-> um inteiro denominado idade.

-> Criar um ponteiro que aponte para a estrutura.
-> Criar uma função que recebe o ponteiro e
-> preencha os dados de 5 pessoas informados pelo usuário e outra função que recebe o ponteiro e imprima os cadastros
*/
#include <stdio.h>
#include <locale.h>
#include <string.h>

struct pessoa {
	char nome [20];
	char cpf [11];
	int idade;
	
}; pessoa;
pessoa P[5];
SetPessoa;
ImprimePessoa;


Pessoa SetPessoa(char nome, char cpf, int idade)
{ 
    Pessoa P;
    P.nome = nome; 
    P.cpf = cpf;   
    P.idade = idade;
    return P; // retorna a struct contendo os dados passados por parâmetro
}

void ImprimePessoa(Pessoa P) // declara o parâmetro como uma struct
{
  printf("Nome: %c  CPF: %c Idade: %d\n", P.nome, P.cpf, P.idade);
}
	