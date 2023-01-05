#include<stdio.h>
main()
{
	int i,b=0;
	int numbers[5]={2,5,4,8,21};
	for(i=0;i<=5;++i){
		b+=numbers[i];
	}
	printf("Hasilnya adalah %d\n",b);
}
