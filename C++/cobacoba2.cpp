#include <conio.h>
#include <math.h>
using namespace std;
int main ()
{
	float alas,tinggi,diagonal;
		cout <<"hitung diagonal"<<endl;
	{
		cout<<"alas?"cin>>alas;
		cout<<"tinggi?"cin>>tinggi;
		diagonal=sqrt((double)alas*alas+(double)tinggi*tinggi);
		cout<<"diagonal="<<diagonal<<endl;
	}
}
