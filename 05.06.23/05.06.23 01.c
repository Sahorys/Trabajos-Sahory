/*05.06.23
Ejercicio 1 
(1)editar y depurar el siguiente ejercicio,
 (2)agregar una instriccion printf con el mensaje ' se introdujo la variable',
 (3)describir la estructura de la funcion switch*/
 #include<stdio.h>
 int main()
 {
 	int opcion;
 	puts("Ingrese numero\n");
 	scanf("%d",&opcion);
 	puts("Se introdujo la variable\n");
 	switch (opcion)
 	{
 		case 0:
 		puts("cero");
 		break;
 		case 1:
 		puts("uno");
 		break;
 		case 2:
 		printf("dos");
 		break;
 		case 3:
 		puts(" tres");
 		break;
 		default:
 			puts("Fuera de rango");
	}
 }
