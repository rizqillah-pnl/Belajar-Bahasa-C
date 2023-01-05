#include<conio.h>
#include <iostream>
#include <string.h>
using namespace std;
struct data{
char kode_barang[20],nama_barang[20],bahan_dasar[20],jumlah[20],harga_per_unit[20];};
data batas[100];
int a,b,c,d;

void inputdata()
{    
cout<<"\nJumlah Data Yang Akan diinput : ";cin>>b;
   d=0;
   for(c=0;c<b;c++){
   d=d+1;
   cout<<"\nData ke-"<<d<<endl;
   cout<<"Kode Barang\t: ";cin>>batas[a].kode_barang;
   cout<<"Nama Barang\t: ";cin>>batas[a].nama_barang;
   cout<<"Bahan Dasar\t: ";cin>>batas[a].bahan_dasar;
   cout<<"Jumlah\t        : ";cin>>batas[a].jumlah;
   cout<<"Harga Per Unit  : ";cin>>batas[a].harga_per_unit;
   a++;}
   system("cls");
   }

void lihatdata()
{int i,j;
 cout<<"\n===============================Menampilkan Data===============================\n\n";
 cout<<"===============================================================================\n";
 cout<<"|| No|| Kode Barang|| Nama Barang|| Bahan Dasar|| Jumlah|| Harga Per Unit||\n";
 j=0;
 for(i=0;i<a;i++)
 {j=j+1;
  cout<<"===============================================================================\n";
  cout<<"||"<<j<<" ||\t";
  cout<<batas[i].kode_barang<<"  \t||";
  cout<<batas[i].nama_barang<<"   \t||";
  cout<<batas[i].bahan_dasar<<"    \t||";
  cout<<batas[i].jumlah<<" \t    ||";
  cout<<batas[i].harga_per_unit<<"      \t||";cout<<endl;
  }
  cout<<"=============================================================================== ";getch();system("cls");}

void hapusdata()
{int x,y;
 cout<<"Hapus data ke-";cin>>x;
 y=x-1;
 a--;
 for(int i=y;i<a;i++)
 {batas[i]=batas[i+1];}
 system("cls");
 cout<<"\n\n\n\n\n\n\n\n\n++++++++++++++++++++++++++++++ Data ke-"<<x<<" Terhapus ++++++++++++++++++++++++++++++";
 getch();system("cls");
}

void editdata(){
int k,l;
cout<<"Masukan Data yang akan diedit : ";cin>>k;
l=k-1;
cout<<"Kode Barang\t: ";cin>>batas[l].kode_barang;
cout<<"Nama Barang\t: ";cin>>batas[l].nama_barang;
cout<<"Bahan Dasar\t: ";cin>>batas[l].bahan_dasar;
cout<<"Jumlah     \t: ";cin>>batas[l].jumlah;
cout<<"Harga Per Unit\t: ";cin>>batas[l].harga_per_unit;
lihatdata();
}

int main()
{     int pilih;
 char w;
 cout<<"\n\n\n\n\n=========================== PROGRAM STRUKTUR DATA ============================";
 cout<<"\n\n\n\n\n\n\n\n\n\t\tPROGRAM BY ANNISA NUR SALSABILA & INTAN WARDIANI\n\n";
 cout<<"\t\t\t        ASSALAMU'ALAIKUM";
 getch();system("cls");
  awal:
  cout<<"\n========================== TUGAS DATABASE TOKO MEBEL ==========================";
  cout<<"\n1. Masukkan data";
  cout<<"\n2. Hapus Data";
  cout<<"\n3. Lihat Data";
  cout<<"\n4. Edit Data";
  cout<<"\n5. Keluar";
  cout<<"\n\nMasukkan Pilihan : "; cin>>pilih;

  if(pilih==1)
   {system("cls");inputdata();goto awal;}
  if(pilih==2)
   {system("cls");hapusdata();goto awal;}
  if(pilih==3)
   {system("cls");lihatdata();goto awal;}
  if(pilih==4)
   {system("cls");editdata();goto awal;}
  if(pilih==5)
   {system("cls");
    cout<<"\n\n\n\n\n\n\n\n                     APAKAH ANDA YAKIN KELUAR DARI PROGRAM??\n\n";
    cout<<"                         [Y]                         [N]                  \n"<<endl;
    cout<<"                                         ";cin>>w;
    if(w=='y'||w=='Y')
    {system("cls");
     cout<<"\n\n\n\n\n******************************* PROGRAM SELESAI *******************************";}
    if(w=='n'||w=='N')
           {system("cls");goto awal;}}
  else
   {system("cls");cout<<"Pilihan 1-5";getch();system("cls");goto awal;}
cout<<"\n\n\n\n\n\n\n\n\n\t\t\tPROGRAM BY ANNISA NUR SALSABILA & INTAN WARDIANI \n\n";
cout<<"\t\t\t        WASSALAMU'ALAIKUM";
}

