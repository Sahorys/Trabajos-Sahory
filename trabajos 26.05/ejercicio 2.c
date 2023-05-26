#include <stdio.h>
#include <stdlib.h>
int main()
{
	float c[5];
	float r=0;
	int i;
	printf("Depurar el siguiente programa");
	for (i=0; i<5; i++)							//cambiar > a <
	{
		printf("%d;",i+1);
		scanf("%f",&c[i]);						//cambiar por i
		printf("\n");
		
	}
	for (i=0; i<5; i++)							//afrefar un for
	printf("%.2f\n",c[i]/5);
	return 0;
}
