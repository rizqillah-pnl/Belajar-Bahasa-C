#include<stdio.h>
main()
{
	int a;
	char words[5];
	for(a=0;a<5;a++){
		printf("masukkan karakter ke-%d : ",a+1);
		scanf("%s",&words[a]);
	}
	printf("\nHasil string anda = %s",words);
}
