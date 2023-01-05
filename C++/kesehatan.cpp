#include <conio.h>
#include <stdio.h>
#include <iostream>
main()
{
int tb,bb,x;
char gen,lg;
atas:
cout<<"MALE/FEMALE [M/F] : ";cin>>gen;
cout<<"Masukan Tinggi Badan Anda : ";cin>>tb;
cout<<"Masukan Berat Badan Anda : ";cin>>bb;
clrscr();
x=(tb-100)-10*(tb-100)/100;
if (bb<x)
cout<<"\t =>KURUS<= \n\nANDA HARUS MENAIKAN "<<(x-bb)<<"KG SUPAYA BERAT BADAN ANDA MENJADI IDEAL";
else if (bb=x)
cout<<"\t =>NORMAL<= \n\nBERAT BADAN ANDA SUDAH IDEAL";
else if (bb>x)
cout<<"\t =>GEMUK<= \n\nANDA HARUS MENURUNKAN "<<(bb-x)<<"KG SUPAYA BERAT BADAN ANDA MENJADI IDEAL";
else
cout<<"=>OVER SIZE<=";
cout<<"\n\nIngin Hitung Lagi [Y/N] : ";cin>>lg;
if (lg=='Y'||lg=='y')
goto atas;
else
cout<<"\n\t THANK YOU \nPLEASE CLOSE THIS PROGRAM NOW"<<endl<<endl;
getch();
}

