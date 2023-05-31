/*TITULO:Diferencia de operadores de incremento y postincremento
Nombre:Fatima Sahory:)
I++ POSTINCREMENTO 'despues de la variable'
++I PREINCREMENTO'Antes de la variable'*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m=99, n;
	n= ++m; /*PREINCREMENTO,Comienza en 99 e incrementa 1 a M y N =100*/
    printf("m=%d, n=%d \n",m,n);
    n= ++m;/*PREINCREMENTO, comienza en 100 e incrementa 1 a M y N =101*/
    printf("m=%d, n=%d \n",m,n);
    printf("m=%d \n",m++); /*POSTINCREMENTO, comienza en 101 e incrementa 1 a M  */
    printf("m=%d \n",++m); /*PREINCREMENTO, comienza en 102 e incrementa 1 a M= 103 */
}
