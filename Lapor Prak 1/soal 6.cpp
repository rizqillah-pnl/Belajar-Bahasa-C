#include<stdio.h>
main()
{
	printf("\t\t\tRIZQILLAH || 1957301020 || TI.1-A\n\n");
	int x,y,total;
	total=0;
	printf("Masukkan bilangan sigma : ");
	scanf("%d",&y);
	
	for(x=1;x<=y;++x)
	{
		printf("%d+",x);
		total=total+x;	
	}
	printf("\n\n\tNilai Akumulasi %d adalah %d\n",y,total);
}
