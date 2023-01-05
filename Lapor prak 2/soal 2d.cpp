#include<stdio.h>
main()
{
	int c,e,f;
	float a,b,d;
	printf("Masukkan bilangan pertama : "); scanf("%f",&a);
	printf("Masukkan bilangan kedua : "); scanf("%f",&b);
	c=a+b;
	d=c/2;
	e=a*a;
	f=b*b;
	printf("\n\nJumlah = %d",c);
	printf("\nRata-rata = %g",d);
	printf("\nKuadrat bilangan pertama = %d",e);
	printf("\nKuadrat bilangan kedua = %d",f);
}
