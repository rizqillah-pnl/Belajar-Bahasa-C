#include<stdio.h>
int tampil();
int search();
int memasukkan();
int nilai();
int mencari();
int cari;
int berapa;
int i;
int key;
int a[]={};

main(){
	printf("Array : \n");
	printf("Masukkan Berapa array yang ingin di input :");
	scanf("%d",&berapa);
	nilai();
	memasukkan();
	tampil();
	search();
	mencari();
}

int nilai(){
	for(i=0;i<cari;i++){
		printf("[%d] [%d] = %d\n",i+1,i,a[i]);
	}
}

int tampil(){
	for(i = 0;i<berapa;i++){
 		printf("[%d] [%d] = %d\n",i+1,i,a[i]);
 	}
 	printf("\n");
}

int search(){
	printf("Cari Array yang diinginkan = ");
	scanf("%d",&cari);
}

int mencari(){
	for(i=0;i<berapa;i++){
		if(a[i]==cari){
			printf("\nditemukan di elemen [%d] dan index ke [%d]",i+1,i);
		}
	}
}

int memasukkan(){
	int low,high=9,mid,flag,index;
	while(low<=high){
		mid=(low+high)/2;
		if(key==a[mid]){
			flag=1;
			index=mid;
			break;
		}
		else if(key<=a[mid]){
			high=mid-1;
		}
		else if(key>=a[mid]){
			low=mid+1;
		}
	}
	printf("\n");
}
