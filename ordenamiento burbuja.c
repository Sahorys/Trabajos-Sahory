#include <stdio.h>
#include <stdlib.h>
main()
{
	int vector[12]={10,20,30,40,50,60,70,80,90,100,120,180};
	int aux,a,b;
	for(a=0; a< 12; a++){
	for(b=0; b< 1; b++){
		if(vector[b] > vector[b+1]){
			aux=vector[b+1];
			vector[b+1]=vector[b];
			vector[b]=aux;
			}
    	}
	}
	for (a=0; a<10; a++){
		printf("%d\t",vector[a]);
	}
	return 0;
}

