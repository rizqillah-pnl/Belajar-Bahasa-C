#include<iostream>
using namespace std;
int main (){
 int kode,harga,jumlah,total,bayar,kembali;
 char mad;
 do 
 {
 cout<<"============================"<<endl;
 cout<<"KANTIN MAHASISWA"<<endl;
 cout<<"============================"<<endl;
 cout<<""<<endl;
 cout<<"Menu Makanan Harga"<<endl;
 cout<<"1. Soto Ayam Rp. 16.000"<<endl;
 cout<<"2. Nasi Uduk Rp. 12.000"<<endl;
 cout<<"3. Mie Ayam Rp. 10.000"<<endl;
 cout<<"4. Nasi Goreng Rp. 8.000"<<endl;
 cout<<"============================"<<endl;
 cout<<'\n'<<"Masukan No Menu Pilihan : ";
 cin>>kode;
 switch (kode){
 case 1:
  cout<<'\n'<<"Soto Ayam"<<endl;
  harga=16000;
  cout<<"Masukan Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
  cout<<"Total Harga  : Rp. "<<total<<endl;
  cout<<"Uang yang Dibayar : Rp. ";
  cin>>bayar;
   kembali=bayar-total;
  cout<<"Kembali   : Rp. "<<kembali<<endl;
  cout<<"Masih ada Y/T  : ";
  cin>>mad;
  break;
 case 2:
  cout<<'\n'<<"Nasi Uduk"<<endl;
   harga=12000;
  cout<<"Masukan Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
  cout<<"Total Harga  : Rp. "<<total<<endl;
  cout<<"Uang yang Dibayar : Rp. ";
  cin>>bayar;
   kembali=bayar-total;
  cout<<"Kembali   : Rp. "<<kembali<<endl;
  cout<<"Masih ada Y/T  : ";
  cin>>mad;
  break;
 case 3:
  cout<<'\n'<<"Mie Ayam"<<endl;
   harga=15000;
  cout<<"Masukan Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
  cout<<"Total Harga  : Rp. "<<total<<endl;
  cout<<"Uang yang Dibayar : Rp. ";
  cin>>bayar;
   kembali=bayar-total;
  cout<<"Kembali   : Rp. "<<kembali<<endl;
  cout<<"Masih ada Y/T  : ";
  cin>>mad;
  break;
 case 4:
  cout<<'\n'<<"Nasi Goreng"<<endl;
   harga=8000;
  cout<<"Masukan Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
  cout<<"Total Harga  : Rp. "<<total<<endl;
  cout<<"Uang yang Dibayar : Rp. ";
  cin>>bayar;
   kembali=bayar-total;
  cout<<"Kembali   : Rp. "<<kembali<<endl;
  cout<<"Masih ada Y/T  : ";
  cin>>mad;
  break;
 default:
 cout<<"Kode yang anda masukkan tidak ada";
 }
 } 
 while (mad/='Y');
 cout<<"Terimah Kasih Atas Kunjungan Anda"<<endl;
 return 0;
}