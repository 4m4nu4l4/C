#include <stdio.h>

struct aluno
{
	char nome[255];
	int ra;
	int serie;
	int turma;
	char curso[100];
} aluno_senac;

struct aluno aluno_tec;
typedef struct aluno aluno_curso;

int main()
{	printf("\n %d",sizeof(aluno_senac));
	printf("\n %d",sizeof(aluno_senac.nome));
	printf("\n %d",sizeof(aluno_senac.ra));
	printf("\n %d",sizeof(aluno_senac.serie));
	printf("\n %d",sizeof(aluno_senac.turma));
	printf("\n %d",sizeof(aluno_senac.curso));

}