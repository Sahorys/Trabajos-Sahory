#include<stdio.h>
int main()
{
	float num1;
	int numeros,hola;
	float media;
	while(hola!=6)
	{
		scanf("%f",&num1);
		media+=num1;
		hola++;
	}
	printf("%.2f",media/6);
	return 0;
}
