/*TITULO:Operadores de incremento 2 --V.2 con anotaciones
Nombre:Fatima Sahory:)
I++ POSTINCREMENTO 'despues de la variable'
++I PREINCREMENTO'Antes de la variable'*/

#include <stdio.h>
#include <stdlib.h>
	int main()
	{
		int n=5,t;
		t= ++n * --n;		 /*PREINCREMENTO */ 
		 printf("n=%d, t=%d \n",n,t); 
		 printf("%d %d %d\n",++n, ++n, ++n); 	 /*PREINCREMENTO*/ 
		 return 0;
	}
