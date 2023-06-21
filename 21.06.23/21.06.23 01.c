/*elaborar un programa que defina un areglo de 10 elementos que los muestre,realice la suma e identifique el mayor de ellos*/
#include<stdio.h>
int main(){
	int arreglo[10] = {1,2,4,5,6,7,3,8,9,10};
	int f;
	int suma=0;
	int mayor=arreglo[0];
	
	printf("Los numeros son:\n");
	for(f=0; f<10; f++){
	printf("%d ", arreglo[f]);
	suma += arreglo[f];
	if (arreglo[f]> mayor)	{
		mayor=arreglo[f];
	}
	}
	printf("\n La suma de los numeros es %d\n",suma);
	printf("El numero mayor es %d\n", mayor);
	return 0;
}
