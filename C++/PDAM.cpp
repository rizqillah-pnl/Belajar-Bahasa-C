#include <iostream.>;
#include<stdio.h>;
using namespace std;
main()
{
int pakai, a, b, c, d, biaya;
                cout<<"\t----------------------------------------------------------------\n";
                cout<<"\t-----------------Pembayaran Pemakaian Air PDAM------------------\n";
                cout<<"\t----------------------------------------------------------------\n";
   cout<<"\n Inputkan Pemakaian air dalam M3 : ";cin>>pakai;
                a=10;
                b=0;
                c=0;
                d=0;
   if (pakai>30)
   {            b=10; c=10; d=pakai-30;         }
   else if (pakai>20)
   {            b=10; c=pakai-20;   }
   else if (pakai>10)
   {            b=pakai-10;             }

   biaya= ((a*2000)+(b*3000)+(c*4000)+(d*5000)+10000);
   cout<<"\n Biaya Pembayaran : "<<biaya<<endl;
   return 0;

}
