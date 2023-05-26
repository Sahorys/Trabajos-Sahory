#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[10]={10,1,2,3,-100,1000,-200,7,1,0}; 		/*se modifico [5]->[10]*/
	int r=0;  
	int mayor,i;									/*agrega el i*/
	for( i=0;i<10; i++){
		if(a[i]>a[r]){									//se modifico el b[r] por r
			
			mayor=i;								//comprbar el subindice
			printf("\n numero mayor es;%d",a[i]);					//s= cadena de caracteres, no sirbe xd... quitar{ por ;
			printf("\n numero menor : %d",r); 				//cambiar r por mayor
		}
	}
	return 0;
}
