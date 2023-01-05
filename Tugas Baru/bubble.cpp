#include<stdio.h>
int a[]={};
int panjang();
int sort();
int MAX;
main(){
	int i;
	
	printf("Berapa jumlah array :"); scanf("%d",&MAX);
	printf("Isikan Array\n");
	panjang();
	sort();
	
	printf("Setelah di Sorting :\n");
	for(i=0;i<MAX;i++){
		printf("array[%d] : %d\n",i,a[i]);
	}
}

int panjang(){
	int i;
	for(i=0;i<MAX;i++){
		printf("array[%d] : ",i);
		scanf("%d",&a[i]);
	}
}

int sort(){
	int i,j,temp;
	for(j=1;j<MAX;j++){
		for(i=1;i<MAX;i++){
			if(a[i-1]>=a[i]){
				temp=a[i];
				a[i]=a[i-1];
				a[i-1]=temp;
			}
		}
	}
}
