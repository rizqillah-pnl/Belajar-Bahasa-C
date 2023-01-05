#include <conio.h>
#include <iostream.>
using namespace std;
int main()
{
	char nama[50],kode;
	int NoUj,NilUj,j,jlk,jlm,jle,jtlk,jtlm,jtle;
	jlk=0;
	jlm=0;
	jle=0;
	
	jtlk=0;
	jtlm=0;
	jtle=0;
	
	cout<<"DATA CALON PEGAWAI!\n\n";
	cout<<"masukkan jumlah calon pegawai=";cin>>j;
	for(int i=1;i<=j;i++);
	{
		cout<<"Masukkan Nomor Ujian";
		cin>>"NoUj";
		cout<<"Masukkan Nama:";
		cin>>"nama";
		cout<<"Masukkan Nilai Ujian:";
		cin>>"NilUjian";
		
		if(NilUj>=75){
		cout<<"Masukkan Kode Bidang dengan huruf besar(K\M\E):";cin>>kode;
		switch(kode){
			case'K':
				jlk=jlk+1;
				cout<<"Sarjana Komputer\n\n"<<endl;
				break;
			case'M':
				jlm=jlm+1;
				cout<<"Sarjana Matematika\n\n"<<endl;
				break;
			case'E':
				jle=jle+1;
				cout<<"Sarjana Elektro\n\n"<<endl;
				break;
			default:
			cout<<"kode bidang study anda tidak sesuai";
	cout<<"\nSelamat!\n"<<nama<<"Diterima Sebagai Pegawai.\n\n";	
		}
	}
