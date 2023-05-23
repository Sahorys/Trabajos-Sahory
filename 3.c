#include <stdio.h>
#include <stdlib.h>
int main()
{
	int secretoo=3,secreto,i,x=1;
	while(secreto!=secretoo){
	printf("Ingrese su numero\n");
	scanf("%d",&secreto);
	if(secreto<secretoo)
	{
	printf("Su numero es menor\n");
	}
	
    else if (secreto>secretoo)
	{
		printf("  Su numero es mayor\n");
	}	 
	
	  else if (secreto=secretoo)
	{
		printf("  Su numero es correcto\n, gracias");
	}
		printf("  quiere continuar?\n si(1) \n no(2)");
		scanf("%f",&x);
}
	return 0;
}
