#include <stdio.h>
#include <locale.h>

void troca(int i, int j);

int main()
{
	
	printf ("antes: i=%d j=%d", i, j);
	int temp = i;
	i = j;
	j = temp;
	
	printf("depois: i=%d j=%d", i, j);
	
	return 0;
	
}

void troca (int *i, int *j){
	int temp = *i;
	*i = *j;
	*j = temp;
}
	
	
	
	
	
	

}