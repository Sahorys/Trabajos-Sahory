#include <stdio.h>
#include <stdlib.h>
void ingrecali(int alm[][5]){
	int i,j;
    printf("Ingrese la calificacion\n");
	for(i=0; i<5;i++){
 		printf("alumno %d",i+1);
 		for(j=0; j<5;j++){
 			printf(" Calificaciones [%d]",i+1);
 			scanf("%d",&alm[i][j]);
		 }
	 } 
}
void calificacion(const int alm[][5]),float promedios[]){
	int i,j,suma;
	for(i=0; i<5;i++){
		suma=0;
 		for(j=0; j<5;j++){
			suma+=alm[i][j];

		 }
		 promedios[i]=(float) suma / 5;
	 }	
}
void mp(const float promedios[]){
	int i;
	printf("\nPromedios: \n");
	for(i=0; i<5;i++){
	printf("Alumno %d; %.2f\n",i+1, promedios[i]);
}
}

int main()
 {
 	int alm[5][5];
 	float promedios[5];
 	ingrecali(alm);
 	calificacion(alm,promedios); 	
 	mp(promedios);
	return 0;
}
