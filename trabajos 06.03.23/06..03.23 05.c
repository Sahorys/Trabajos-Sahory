#include<stdio.h>
/*Entrada de datos numericos.centinela -1*/
int main()
{
	int const centinela=-1;
	int suma, cuenta, nota;
	printf("Intodruzca la primera nota");
	scanf("%d",&nota);
	while (nota!=centinela)
	{
		cuenta++;
		suma += nota;
		printf("Introduzca la siguiente nota");
		scanf("%d", &nota);
	}//fin while
}
