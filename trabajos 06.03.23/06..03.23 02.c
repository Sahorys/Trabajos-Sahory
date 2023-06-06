#include<stdio.h>
/*La variable 'contador' inicia en 1
la condicion hara lo que se indica mientras sea menor a 100*/
int main()
{
	int contador=1;
	while(contador<100)
	{
		printf("%d\n",contador);
		contador--;
	}
}
