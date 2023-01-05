#include<stdio.h>
int tampil();
int search();
int memasukkan();
int nilai();
int mencari();
int cari;
int berapa;
int i;
int a[]={};

main(){
	printf("Array : \n");
	printf("Masukkan Berapa array yang ingin di input :");
	scanf("%d",&berapa);
	memasukkan();
	tampil();
	search();
	mencari();
}

int memasukkan(){
	int masuk;
	for(i=0;i<berapa;i++){
		printf("[%d] [%d] = ",i+1,i);
		scanf("%d",&masuk);
		a[i]=masuk;
	}
	printf("\n");
}

int tampil(){
	for(i = 0;i<berapa;i++){
 		printf("[%d] [%d] = %d\n",i+1,i,a[i]);
 	}
 	printf("\n");
}

int nilai(){
	for(i=0;i<cari;i++){
		printf("[%d] [%d] = %d\n",i+1,i,a[i]);
	}
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


