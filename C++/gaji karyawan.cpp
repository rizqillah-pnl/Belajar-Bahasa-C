#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
 int jamkerja,lembur,jamtanpalembur,upahlembur,upahkes,upah,seminggu,upahseminggu,lemburseminggu;
    char nama[20],golongan[20];
    system("title Program Gaji Karyawan");
    cout<<"\nNama Karyawan      : ";
    cin>>nama;
    cout<<"Golongan [a/b/c/d] : ";
    cin>>golongan;
    cout<<"Jumlah Jam Kerja   : ";
    cin>>jamkerja;
    cout<<endl;
   
    if (jamkerja>48)
    {
                   lembur=jamkerja-48;
                   jamtanpalembur=48;
                   }
                   else
                   {
                       lembur=0;
                       jamtanpalembur=jamkerja;
                       }
                      
    upahlembur=lembur*3000;
                      
    if(golongan=="a")
    {
                     upah=jamtanpalembur*4000;
                     }
                     else
    if(golongan=="b")
    {
                     upah=jamtanpalembur*5000;
                     }
                     else
    if(golongan=="c")
    {
                     upah=jamtanpalembur*6000;
                     }
                     else
    if(golongan=="d")
    {
                     upah=jamtanpalembur*7000;
                     }
                     else
    {
    cout<<"Golongan Tidak Ketemu"<<endl;
    cout<<endl;
    }
    //upah karyawan
    upahkes=upah+upahlembur;
   
    cout<<"====================================";
    cout<<"\n  Hasil Penghitungan Gaji Karyawan";
    cout<<"\n====================================";
    cout<<endl;
    cout<<"Nama Karyawan    : "<<nama<<endl;
    cout<<"Upah Kerja       : Rp "<<upah<<endl;
    cout<<"Lembur           : Rp "<<upahlembur<<endl;
    cout<<"Upah Keseluruhan : Rp "<<upahkes<<endl;
    getche();
}
