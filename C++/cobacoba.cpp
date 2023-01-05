#include <conio.h>
#include <iostream>
using namespace std;
int main ()
{
	struct
	{
		float datar;
		float tegak;
		float miring;
	}segitiga;
	// structsegitiga;
	cout<<"masukkan sisi datar=";
	cin>>segitiga.datar;
	cout<<"masukkan datar=";
	cin>>segitiga.tegak;
	segitiga.miring=segitiga.datar*segitiga.tegak;
	cout<<"sisi miring dari segitiga yang mempunyai sisi"<<endl;
	cout<<"datar="<<segitiga.datar<<endl;
	cout<<"tegak="<<segitiga.tegak<<endl;
	cout<<"miring="<<segitiga.miring<<endl;
	getch ();
	
	
}
