#include<stdio.h>
float area_rectangulo(float b,float a);
float entrrada(void);
int main()
{
	float b,h;
	printf("\n Base del rectangulo: ");
	b=entrada();
	printf("\n Base del rectangulo ");
	b=entrada();
	printf("\n Area del retcangulo %.2f, area",area_rectangulo(b,h));
	return 0;
}
float entreda(){
	float m;
	do{
		scanf("%f",&m);
	}while (m<=0.0);
	return m;
}
float area_rectangulo(float b,float a)
{
	return (b*a);
}
