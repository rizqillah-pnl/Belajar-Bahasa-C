#include<stdio.h>
main()
{
	printf("\t\t\tRIZQILLAH || 1957301020 || TI.1-A\n\n");
	int a,b;
	printf("Masukkan bilangan pertama : ");
	scanf("%d",&a);
	printf("Masukkan bilangan kedua : ");
	scanf("%d",&b);
	
	if(a>b){
		printf("\n\n%d Lebih besar daripada %d\n\n",a,b);
	} else if(a==b){
		printf("\n\n%d Sama besar dengan %d\n\n",a,b);
	}else{
		printf("\n\n%d Lebih kecil dari %d\n\n",a,b);
	}
}
