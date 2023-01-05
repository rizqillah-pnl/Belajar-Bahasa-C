#include<stdio.h>
main()
{
	int a,b,hasil=0;
	float balance[3][5]={2,5,6,4,2,
	2,5,7,8,5,
	3,5,6,7,4};
	for(a=0;a<3;a++){
		for(b=0;b<5;b++){
			hasil+=balance[a][b];
		}
	}
	printf("hasil = %d",hasil);
}
