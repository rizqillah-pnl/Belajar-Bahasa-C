#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;
int main(){
int tes;
float uan;

cout<<" "<<endl;
cout<<"\t ========================================================"<<endl;
cout<<"\t SELEKSI MAHASISWA BARU UNIVERSITAS ISLAM SYEKH YUSUF TANGERANG"<<endl;
cout<<"\t ========================================================"<<endl;
ulang:
cout<<"Masukkan Nilai UAN : ";cin>>uan;
cout<<"Nilai Hasil Seleksi:";cin>>tes;

if (uan > 80){
system("cls");
cout<<"PENGUMUMAN : "<<endl;
cout<<"Pendaftar Dengan Nilai UAN = "<<uan<<endl;
cout<<"selamat anda dinyatakan DITERIMA di Universitas Islam syekh yusuf Tangerang";
}
else if((uan <=80) && (tes>=70)){
cout<<"Masukkan Nilai tes masuk : ";cin>>tes;
system("cls");
cout<<" "<<endl;
cout<<"PENGUMUMAN : ";
cout<<"Pendaftar Dengan Nilai UAN = "<<uan<<endl;
cout<<"Pendaftar Dengan Nilai Tes Masuk = "<<tes<<endl;
cout<<"selamat anda dinyatakan DITERIMA di Universitas Islam syekh yusuf Tangerang";
}
else if((uan <=64) && (tes >=85)){
cout<<"Masukkan Nilai tes masuk : ";cin>>tes;
system("cls");
cout<<" "<<endl;
cout<<"Pengumuman : ";
cout<<"Pendaftar Dengan Nilai UAN = "<<uan<<endl;
cout<<"Pendaftar Dengan Nilai Tes Masuk = "<<tes<<endl;
cout<<"selamat anda dinyatakan DITERIMA di Universitas Islam syekh yusuf Tangerang";
}
else{
cout<<"Masukkan Nilai tes masuk : ";cin>>tes;
system("cls");
cout<<" "<<endl;
cout<<"Pengumuman : ";
cout<<"Pendaftar Dengan Nilai UAN = "<<uan<<endl;
cout<<"Pendaftar Dengan Nilai Tes Masuk = "<<tes<<endl;
cout<<"Maaf Anda ditolak karena Nilai Anda tidak masuk Dalam kriteria Kami";
}
char lagi;
    menulagi :
    cout<<"apakah ingin mengulangnya lagi(y/t)";cin>>lagi;
    if(lagi=='y' || lagi=='Y'){goto ulang;} else
    if(lagi=='t' || lagi=='T'){goto selesai;} else
    {cout<<"\ninputkan y/t!!!\n";goto menulagi;}
    selesai :
    cout<<"program selesai";
}
