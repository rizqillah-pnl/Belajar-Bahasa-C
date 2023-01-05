#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
	int nilai_algoritma[10],i;
	for(i=1;i<=5;i++)
	{
		cout<<"Masukkan Nilai Algoritma" <<i<<"=";
		cin>>nilai_algoritma[i];
	}
	for(i=1;i<=5;i++)
	{
		cout<<"Nilai Algoritma"<<i <<"=" <<nilai_algoritma[i]<<endl;
	}
	getch();
}
