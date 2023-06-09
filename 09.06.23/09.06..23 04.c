#include<stdio.h>
int main()
{
	char opcion,s;
	do
	{
		puts("hola");
		puts("Desea otro tipo de saludo?");
		printf("Y acontinuacion pulse intro");
		scanf("%s",&opcion);
	}
	while(opcion=='s',opcion=='s');
	puts("adios");
	return 0;
}
