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
	printf("Su numero es incorrecto");
	}
    if(secreto>secretoo)
	{
		printf("Su numero es incorrecto");
	}	
	else if(secreto=secretoo)
		{
		printf("Numero correcto");
	}
	return 0;
}

