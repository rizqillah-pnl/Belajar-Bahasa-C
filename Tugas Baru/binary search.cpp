#include<stdio.h>
int a[]={1,2,3,4,5,6,7,8,9,10};
int tampil();
int nilai();
int memasukkan();
int i;
int cari;
int berapa;
main(){
	
	int n=10,key,low=0,high=9,mid,flag=0,index;
	tampil();
	
	printf("\nMasukkan data yang ingin dicari : ");
	scanf("%d",&key);
	
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
	if(flag==1){
		printf("\nHasil ditemukan pada indeks : %d",index);
	}else{
		printf("\nData tidak ditemukan");
	}
}

int tampil(){
	int i;
	for(i=0;i<berapa;i++){
		printf("[%d] [%d] = %d\n",i+1,i,a[i]);
	}
}

