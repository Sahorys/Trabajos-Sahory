/*visualizar la tarifa de luz segun el gasto de corriente electrica,
 para un gasto menor a 1000 1.2 pesos -- mil y 1800=1.8pesos-- mayor a 1850=2.1*/
 #include<stdio.h>
 int main()
 {
 	int num,cactual,corriente;
 	printf("Ingrese el consumo de corriente\n");
 	scanf("%d",&num);
 	if(num <= 100)
 	{
 	printf("Su precio es 1.2\n");
 }
	else if(num >=1000 )
	{
	printf("Su precio es 1.8\n");
}
	else if(num <=1850 )
	{
	printf("Su precio es 1.8\n");
}
	else
	{
	printf("Su precio es 2.1\n");
}

printf("Ingrese su consumo actual\n");
scanf("%d",&cactual);
corriente=cactual-num;
if(corriente<0)
{
    printf("Error");
}
else if(corriente>0)
{
	printf("Su corriente total es %d",corriente);
}

	 return 0;
 }
 
 //
