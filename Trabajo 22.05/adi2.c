#include <stdio.h>
#include <stdlib.h>
int main()
{
	int secretoo,secreto;
	secretoo=3;
	printf("Ingrese su numero");
	scanf("%d",&secreto);
	
	if(secreto<secretoo)
	{
	printf("Su numero es menor");
	}
    if(secreto>secretoo)
	{
		printf("Su numero es mayor");
	}	
	return 0;
}
