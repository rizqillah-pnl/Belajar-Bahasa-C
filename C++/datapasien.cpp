#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
int main()
{
	char Penyakit;
	char Nama[50];
	char Alamat[75];
	int Dokter;
	int Lama;
	int Kamar;
	char Kelamin[25];
	int harga;
	int jasa;
	char Lagi;
	int Dibayar;
	int total;
	int kembali;
	
	awal:
		cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<"===================Rumah Sakit PT.ARUN=========================="<<endl;
		cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<"Masukkan Data Anda Dibawah"<<endl;
		cout<<endl;
		
		cout<<"Masukkan Nama Anda =";
		cin>>Nama;
		cout<<endl;
		
		
		cout<<"Masukkan Alamat Anda =";
		cin>>Alamat;
		cout<<endl;
		cout<<"Masukkan Jenis Kelamin =";
		cin>>Kelamin;
		cout<<endl;
		cout<<"Masukkam Lama Menginap =";
		cin>>Lama;
		cout<<endl;
		cout<<"Jenis kamar"<<endl;
		cout<<"1.Kelas I" <<endl;
		cout<<"2.Kelas II" <<endl;
		cout<<"3.Kelas III" <<endl;
		cout<<"4.Kelas VIP" <<endl;
		cout<<"5.Kelas VVIP" <<endl;
		cout<<"Pilih Jenis Kamar Anda [1-5]=";
		cin>>Kamar;
		switch(Kamar)
		{
			case 1:
			harga=800000;
			cout<<"Kelas I"<<endl;
			cout<<"Tarif 800000"<<endl;
			break;
			
			case2:
			harga=600000;
			cout<<"Kelas II"<<endl;
			cout<<"Tarif 800000"<<endl;
			break;
			
			case 3:
			harga=300000;
			cout<<"Kelas III"<<endl;
			cout<<"Tarif 800000"<<endl;
			break;
			
			case 4:
			harga=800000;
			cout<<"Kelas VIP"<<endl;
			cout<<"Tarif 1300000"<<endl;
			break;
			
			case 5:
			harga=1500000;
			cout<<"Kelas VVIP"<<endl;
			cout<<"Tarif 1500000"<<endl;
			break;
			
			default :
			cout<<"Tidak Tersedia";	
		}
		cout<<endl;
		
		cout<<"Dokter"<<endl;
		cout<<"1.Dokter Anak"<<endl;
		cout<<"2.Dokter Penyakit Dalam"<<endl;
		cout<<"3.Dokter THT"<<endl;
		cout<<"4.Dokter Bedah"<<endl;
		cout<<"5.Dokter Umum"<<endl;
		cout<<"Masukkan Pilhan Anda[1-5]=";
		cin>>Dokter;
		
		switch(Dokter)
		{
			case 1:
				jasa=70000;
				cout<<"Dokter Anak"<<endl;
				cout<<"Tarif 70000"<<endl;
				break;
			case 2:
				jasa=80000;
				cout<<"Dokter Penyakit Dalam"<<endl;
				cout<<"Tarif 80000"<<endl;
				break;
			case 3:
				jasa=60000;
				cout<<"Dokter THT"<<endl;
				cout<<"Tarif 60000"<<endl;
				break;
			case 4:
				jasa=100000;
				cout<<"Dokter Bedah"<<endl;
				cout<<"Tarif 100000"<<endl;
				break;
			case 5:
				jasa=50000;
				cout<<"Dokter Umum"<<endl;
				cout<<"Tarif 50000"<<endl;
				break;
				
				default:
					cout<<"Tidak Tersedia"<<endl;
		}
		cout<<"+++++++++DATA ANDA++++++++++++"<<endl;
		cout<<"Nama Anda :"<<Nama<<endl;
		cout<<"Alamat Anda :"<<Alamat<<endl;
		cout<<"Jenis Kelamin :"<<Kelamin<<endl;
		cout<<"Lama Menginap :"<<Lama<<endl;
		cout<<"Jenis Kamar :"<<Kamar<<endl;
		cout<<"Dokter :"<<Dokter<<endl;
		cout<<"Yang Harus Dibayar :"<<jasa+harga*Lama<<endl;
		cout<<endl;
		cout<<"Ingin Mengulangi Lagi(Y/N)?";
		cin>>Lagi;
		if(Lagi=='y'||Lagi=='Y')
		{
			goto awal;
		}
		if(Lagi=='n'||Lagi=='N')
		{
			goto selesai;
		}
		selesai:
		cout<<"Terimakasih Atas Kunjungan Anda Di Rumah Sakit PT.ARUN"<<endl;
		
		return 0;
	}
		
