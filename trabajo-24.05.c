#include <stdio.h>
#include <stdlib.h>
int main()
 {
 	// esto sirve para ingresar las 5 materias :)
 	int i,j,suma;
 	int alm[5][5];
 	float pro[5];
 	printf("Ingrese la calificacion\n");
 	for(i=0; i<5;i++){
 		printf("alumno %d",i+1);
 		for(j=0; j<5;j++){
 			printf(" Calificaciones [%d]",i+1);
 			scanf("%d",&alm[i][j]);
		 }
	 } //para imprimir ;0
	 printf("Calificacion por alumno\n");
	for(i=0; i<5;i++){
		suma=0;
 		for(j=0; j<5;j++){
 			suma+=alm[i][j];
 		}
 		pro[i]=(float) suma/5;
		 }
		  for(i = 0; i <5; i++) {
		 printf("El promedio por alumno es: %.2f\n",pro[i],i+1);
	}
	return 0;
}
