#include<stdio.h>
#include <ctype.h>
int main()
{
	char resp;
	char c;
	printf("¿Es masculino o femenino?");
	scanf("%c", &resp);
	resp= toupper (resp);
	switch(resp)
	{
		case 'M':
			puts("Es un enfermero");
			break;
		case 'F':
			puts("Es una enfermera");
			break;
			default:
				puts("no es enfermero ni enfermera");
			break;
	}
	return 0;
}
