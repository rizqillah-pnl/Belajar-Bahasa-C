#include<stdio.h>
main()
{
	int a,b,c=0;
	float balance[3][5]={
	3,5,3,6,2,
	1,5,6,8,8,
	2,4,5,3,2
	};
	for(a=1;a<=3;a++){
		for(b=1;b<=5;b++){
			c+=balance[a][b];
		}
	}
	printf("%d",c);
}
