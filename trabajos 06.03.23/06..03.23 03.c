#include<stdio.h>
int main()
{
	int contador=0;	//inicializo la variable
	while (contador<5)	//pruebla logica
	{
		contador++;	//si verdadero realiza bloque de instrucciones
		printf("contador:%d\n", contador);
	}
	printf("Terminado.contador:%d\n",contador);
	return 0;
}
