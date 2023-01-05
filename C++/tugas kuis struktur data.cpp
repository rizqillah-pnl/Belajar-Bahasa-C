#include<conio.h>
#include <iostream>
#include <string.h>
using namespace std;
struct data{
char nama_penduduk,NIK,jenis_kelamin,agama,tempat_tanggallahir;};
data batas[100];
int a,b,c,d;
void inputdata()
{    
cout<<"\nJumlah Data Yang Akan diinput : ";cin>>b;
   d=0;
   for(c=0;c<b;c++){
   d=d+1;
   cout<<"\nData ke-"<<d<<endl;
   cout<<"nama_penduduk\t: ";cin>>batas[a].nama_penduduk;
   cout<<"NIK\t: ";cin>>batas[a].NIK;
   cout<<"jenis_kelamin\t: ";cin>>batas[a].jenis_kelamin;
   cout<<"agama\t        : ";cin>>batas[a].agama;
   cout<<"tempat_tanggal lahir\t  : ";cin>>batas[a].tempat_tanggallahir;
   a++;}
   system("cls");
   }

void lihatdata()
{int i,j;
 cout<<"\n===============================Menampilkan Data===============================\n\n";
 cout<<"===============================================================================\n";
 cout<<"|| No|| nama penduduk|| NIK|| jenis kelamin|| agama || tempat_tanggallahir ||\n";
 j=0;
 for(i=0;i<a;i++)
 {j=j+1;
  cout<<"===============================================================================\n";
  cout<<"||"<<j<<" ||\t";
  cout<<batas[i].nama_penduduk<<"  \t||";
  cout<<batas[i].NIK<<"   \t||";
  cout<<batas[i].jenis_kelamin<<"    \t||";
  cout<<batas[i].agama<<" \t    ||";
  cout<<batas[i].tempat_tanggallahir<<" \t||";cout<<endl;
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
cout<<"nama_penduduk\t: ";cin>>batas[l].nama_penduduk;
cout<<"NIK\t: ";cin>>batas[l].NIK;
cout<<"jenis_kelamin     \t: ";cin>>batas[l].jenis_kelamin;
cout<<"tempat_tanggallahir\t: ";cin>>batas[l].tempat_tanggallahir;
lihatdata();
}

int main()
{     int pilih;
 char w;
 cout<<"\n\n\n\n\n=========================== PROGRAM STRUKTUR DATA ============================";
 cout<<"\n\n\n\n\n\n\n\n\n\t\tPROGRAM BY INTAN WARDIANI\n\n";
 cout<<"\t\t\t        ASSALAMU'ALAIKUM";
 getch();system("cls");
  awal:
  cout<<"\n========================== TUGAS DATABASE KTP ==========================";
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
cout<<"\n\n\n\n\n\n\n\n\n\t\t\tPROGRAM BY INTAN WARDIANI \n\n";
cout<<"\t\t\t        WASSALAMU'ALAIKUM";
}
