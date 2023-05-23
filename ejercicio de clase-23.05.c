#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int t,i;
	int num[3][4]; 
	for(t=0; t<3; ++t)
	for(i=0; i<4; ++i)
	num[t][i]=(t*4)+i+1;
	
	for(t=0; t<3; ++t)
	{
		for(i=0; i<4; ++i)
		printf("%d",num[t][i]);
		printf("\n");
	}
	return 0;
}
