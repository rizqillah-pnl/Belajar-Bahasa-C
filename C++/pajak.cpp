#include <iostream.>
#include <stdlib.h>
using namespace std;
int main()
{


char beli, diskon, bayar, pajak, tp;
{

cout<<"Masukan Nilai Beli :";

cin>>beli;

if (beli<=100000)

diskon=0.10*beli;

else if (beli<=300000)

diskon=0.15*beli;

else if (beli<=400000)

diskon=0.20*beli;

bayar=beli-diskon;

if (beli>=1000000)

pajak=0.05*beli;

else

pajak=0.00*beli;

tp=pajak+bayar;
}
cout<<"Diskon = "<<diskon<<endl;

cout<<"Bayar  = "<<bayar<<endl;

cout<<"Pajak  = "<<pajak<<endl;

cout<<"Total Pembayaran = "<<tp<<endl;

system("PAUSE");

return 0;

}
