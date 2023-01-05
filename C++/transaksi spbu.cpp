#include <iostream>
#include <conio.h>

using namespace std;
int main()

{

char x;

int liter, total, bayar, kembali, bensin ,pertamax, solar,

seratusribu, limapuluhribu, duapuluhribu, sepuluhribu, limaribu,

seribu, duaribu, limaratus, duaratus, seratus,sisa1,sisa2,sisa3,

sisa4,sisa5,sisa6,sisa7,sisa8,sisa9,sisa10;

cout<<"============TRANSAKSI SPBU============";cout<<endl<<endl;

cout<<"Silahkan Pilih Jenis Transaksi";cout<<endl;

cout<<"1. Bensin";cout<<endl;

cout<<"2. Pertamax";cout<<endl;

cout<<"3. Solar";cout<<endl;

cout<<"Masukkan Pilihan Anda (1/2/3) = ";cin>>x;cout<<endl<<endl;

if (x=='1')

{

cout<<"Harga Bensin Perliter : 4500";cout<<endl;

cout<<"Jumlah Liter          : ";cin>>liter;

cout<<"Masukkan Uang Bayar   : ";cin>>bayar;

bensin=4500;

total=bensin*liter;

kembali=bayar-total;

seratusribu = kembali / 100000;

sisa1 = kembali % 100000;

limapuluhribu = sisa1 / 50000;

sisa2 = sisa1 % 50000;

duapuluhribu = sisa2 / 20000;

sisa3 = sisa2 % 20000;

sepuluhribu = sisa3 / 10000;

sisa4 = sisa3 % 10000;

limaribu = sisa4 / 5000;

sisa5 = sisa4 % 5000;

duaribu = sisa5 / 2000;

sisa6 = sisa5 % 2000;

seribu = sisa6 / 1000;

sisa7 = sisa6 % 1000;

limaratus = sisa7 / 500;

sisa8 = sisa7 % 500;

duaratus = sisa8 / 200;

sisa9 = sisa8 % 200;

seratus = sisa9 / 100;

sisa10 = sisa9 % 100;

cout<<endl<<endl;

cout<<"Total Bayar           : "<<total;cout<<endl;

cout<<"Uang Kembali          : "<<kembali<<endl<<endl;

cout<<"Uang Seratus Ribu     : "<<seratusribu<<endl;

cout<<"Uang Lima Puluh Ribu  : "<<limapuluhribu<<endl;

cout<<"Uang Dua Puluh Ribu   : "<<duapuluhribu<<endl;

cout<<"Uang Sepuluh Ribu     : "<<sepuluhribu<<endl;

cout<<"Uang Lima Ribu        : "<<limaribu<<endl;

cout<<"Uang Dua Ribu         : "<<duaribu<<endl;

cout<<"Uang Seribu           : "<<seribu<<endl;

cout<<"Uang Lima Ratus       : "<<limaratus<<endl;

cout<<"Uang Dua Ratus        : "<<duaratus<<endl;

cout<<"Uang Seratus          : "<<seratus<<endl<<endl;

cout<<"======================================"<<endl<<endl;

cout<<"   Terima Kasih Atas Kunjungan Anda"<<endl;

cout<<"Semoga Anda Puas dengan Pelayanan Kami"<<endl<<endl;

cout<<"======================================"<<endl;

}

else if (x=='2')

{

cout<<"Harga Pertamax Perliter : 6800";cout<<endl;

cout<<"Jumlah Liter            : ";cin>>liter;

cout<<"Masukkan Uang Bayar     : ";cin>>bayar;

pertamax=6800;

total=pertamax*liter;

kembali=bayar-total;

seratusribu = kembali / 100000;

sisa1 = kembali % 100000;

limapuluhribu = sisa1 / 50000;

sisa2 = sisa1 % 50000;

duapuluhribu = sisa2 / 20000;

sisa3 = sisa2 % 20000;

sepuluhribu = sisa3 / 10000;

sisa4 = sisa3 % 10000;

limaribu = sisa4 / 5000;

sisa5 = sisa4 % 5000;

duaribu = sisa5 / 2000;

sisa6 = sisa5 % 2000;

seribu = sisa6 / 1000;

sisa7 = sisa6 % 1000;

limaratus = sisa7 / 500;

sisa8 = sisa7 % 500;

duaratus = sisa8 / 200;

sisa9 = sisa8 % 200;

seratus = sisa9 / 100;

sisa10 = sisa9 % 100;

cout<<endl<<endl;

cout<<"Total Bayar             : "<<total;cout<<endl;

cout<<"Uang Kembali            : "<<kembali<<endl<<endl;

cout<<"Uang Seratus Ribu       : "<<seratusribu<<endl;

cout<<"Uang Lima Puluh Ribu    : "<<limapuluhribu<<endl;

cout<<"Uang Dua Puluh Ribu     : "<<duapuluhribu<<endl;

cout<<"Uang Sepuluh Ribu       : "<<sepuluhribu<<endl;

cout<<"Uang Lima Ribu          : "<<limaribu<<endl;

cout<<"Uang Dua Ribu           : "<<duaribu<<endl;

cout<<"Uang Seribu             : "<<seribu<<endl;

cout<<"Uang Lima Ratus         : "<<limaratus<<endl;

cout<<"Uang Dua Ratus          : "<<duaratus<<endl;

cout<<"Uang Seratus            : "<<seratus<<endl<<endl;

cout<<"======================================"<<endl<<endl;

cout<<"   Terima Kasih Atas Kunjungan Anda"<<endl;

cout<<"Semoga Anda Puas dengan Pelayanan Kami"<<endl<<endl;

cout<<"======================================"<<endl;

}

else if (x=='3')

{

cout<<"Harga Solar Perliter : 4000";cout<<endl;

cout<<"Jumlah Liter          : ";cin>>liter;

cout<<"Masukkan Uang Bayar   : ";cin>>bayar;

solar=4000;

total=solar*liter;

kembali=bayar-total;

seratusribu = kembali / 100000;

sisa1 = kembali % 100000;

limapuluhribu = sisa1 / 50000;

sisa2 = sisa1 % 50000;

duapuluhribu = sisa2 / 20000;

sisa3 = sisa2 % 20000;

sepuluhribu = sisa3 / 10000;

sisa4 = sisa3 % 10000;

limaribu = sisa4 / 5000;

sisa5 = sisa4 % 5000;

duaribu = sisa5 / 2000;

sisa6 = sisa5 % 2000;

seribu = sisa6 / 1000;

sisa7 = sisa6 % 1000;

limaratus = sisa7 / 500;

sisa8 = sisa7 % 500;

duaratus = sisa8 / 200;

sisa9 = sisa8 % 200;

seratus = sisa9 / 100;

sisa10 = sisa9 % 100;

cout<<endl<<endl;

cout<<"Total Bayar           : "<<total;cout<<endl;

cout<<"Uang Kembali          : "<<kembali<<endl<<endl;

cout<<"Uang Seratus Ribu     : "<<seratusribu<<endl;

cout<<"Uang Lima Puluh Ribu  : "<<limapuluhribu<<endl;

cout<<"Uang Dua Puluh Ribu   : "<<duapuluhribu<<endl;

cout<<"Uang Sepuluh Ribu     : "<<sepuluhribu<<endl;

cout<<"Uang Lima Ribu        : "<<limaribu<<endl;

cout<<"Uang Dua Ribu         : "<<duaribu<<endl;

cout<<"Uang Seribu           :"<<seribu<<endl;

cout<<"Uang Lima Ratus       : "<<limaratus<<endl;

cout<<"Uang Dua Ratus        : "<<duaratus<<endl;

cout<<"Uang Seratus          : "<<seratus<<endl<<endl;

cout<<"======================================"<<endl<<endl;

cout<<"   Terima Kasih Atas Kunjungan Anda"<<endl;

cout<<"Semoga Anda Puas dengan Pelayanan Kami"<<endl<<endl;

cout<<"======================================"<<endl;

}

else

cout<<"Maaf, Pilihan Salah. Silahkan Masukkan Pilihan Anda";

getch();

}
