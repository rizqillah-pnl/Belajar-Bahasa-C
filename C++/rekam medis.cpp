#include<iostream.>
#include<conio.h>
#include<iostream.>
using namespace std;
//taufiq hidayat.12100931
//untuk menu
class menu
{
    private:

    public:
void pilihan()
{
    {
		clrscr();
        cout<<"PROGRAM REKAM MEDIS RS EL RAHMA :"cout<<endl;
        cout<<"\t 1.Data Obat"<<endl;
        cout<<"\t 2.Data Pasien"<<endl;
        cout<<"\t 3.Data Dokter"<<endl;
        cout<<"\t 4.Data Kamar"<<endl;
        cout<<"\t 5.Keluar Program"<<endl;
        cout<<"Pilihan : ";
}};
//pilihan menu
class tekan
{
    private:

    public:

void kembali()
{
    cout<<" Tekan 1 Untuk Ke Menu Utama " <<endl;
    cout<<" Tekan 2 Untuk Kembali " <<endl;
    cout<<" Tekan 3 Untuk Keluar Program " <<endl;
}
};
//class obat
class obat
{
private:
        int x;
        int i;
        char kode[100][100],nama[100][100],spek[100][100];
public:
        void input();
        void output();
      void data();
};
void obat::data (){
cout<<"masukkan banyak data yg akan diinput  :";
cin>>i;
}

void obat::input(){
for(x=0;x<i;x++)
{
cout<<"masukkan kode obat          :";cin>>kode[x];
cout<<"masukkan nama obat          :";cin>>nama[x];
cout<<"masukkan spesifikasi obat   :";cin>>spek[x];
cout<<"============================="<<endl;
}
}
void obat::output(){
for(x=0;x<i;x++)
{
cout<<"kode obat          :"<<kode[x]<<endl;
cout<<"nama obat          :"<<nama[x]<<endl;
cout<<"spesifikasi obat   :"<<spek[x]<<endl;
cout<<"============================="<<endl;
}};
//class pasien
class pasien
{
private:
        int x;
        int i;
    char no[100][100],nama[100][100],alamat[100][100],jenis[100][100],agama[100][100]
,status[100][100];
public:
        void input();
        void output();
      void data();
};
void pasien::data(){
cout<<"masukkan banyak data yg akan diinput  :";
cin>>i;
}

void pasien::input(){
for(x=0;x<i;x++)
{
cout<<"masukkan no.RM                :";cin>>no[x];
cout<<"masukkan nama pasien          :";cin>>nama[x];
cout<<"masukkan alamat pasien        :";cin>>alamat[x];
cout<<"masukkan jenis kelamin pasien :";cin>>jenis[x];
cout<<"masukkan agama                :";cin>>agama[x];
cout<<"masukkan status nikah         :";cin>>status[x];
cout<<"============================="<<endl;
}
}
void pasien::output(){
for(x=0;x<i;x++)
{
cout<<"no.RM                :"<<no[x]<<endl;
cout<<"nama pasien          :"<<nama[x]<<endl;
cout<<"alamat pasien        :"<<alamat[x]<<endl;
cout<<"jenis kelamin pasien :"<<jenis[x]<<endl;
cout<<"agama                :"<<agama[x]<<endl;
cout<<"status nikah         :"<<status[x]<<endl;
cout<<"============================="<<endl;
}};


//main
void main()
{
    char pilih;
    char x;
    char nomor;
    menu men;
    tekan kem;
    obat bat;
   pasien pas;
   dokter dok;
    kamar kam;
    label:
    men.pilihan();
    cin>>pilih;
    cout<<"\n";
       switch(pilih)
    {
//obat
        case '1':ulang1:
      clrscr();
            cout<<"Menu data obat "<<endl;
         cout<<"1.jumlah data obat"<<endl;
            cout<<"2.input data obat"<<endl;
            cout<<"3.output data obat"<<endl;
            cout<<"4.Kembali ke menu utama"<<endl;
            cout<<"Pilihan : ";
            cin>>nomor;
            cout<<"\n";
            switch(nomor)
            {
                case '1':bat.data();
                            kem.kembali();
                            bali1:
                            cin >> x;
                            switch(x)
                            {
                                case '1':goto label; break;
                                case '2':goto ulang1; break;
                                case '3':break;
                                default :cout<<"Nomor Yang Anda Masukkan Salah, Silahkan Ulangi Lagi !!!"<<endl;
                                            goto bali1; break;
                            }
                            break;
                case '2':bat.input();
                            kem.kembali();
                            bali2:
                            cin >> x;
                            switch(x)
                            {
                                case '1':goto label; break;
                                case '2':goto ulang1; break;
                                case '3':break;
                                default :cout<<"Nomor Yang Anda Masukkan Salah, Silahkan Ulangi Lagi !!!"<<endl;
                                            goto bali2; break;
                            }
                            break;
            case '3':bat.output();
                            kem.kembali();
                            bali3:
                            cin >> x;
                            switch(x)
                            {
                                case '1':goto label; break;
                                case '2':goto ulang1; break;
                                case '3':break;
                                default :cout<<"Nomor Yang Anda Masukkan Salah, Silahkan Ulangi Lagi !!!"<<endl;
                                            goto bali3; break;
                            }
                            break;

                case '4':goto label;
                            break;
                default :cout<<"Nomor Yang Anda Masukkan Salah, Silahkan Ulangi Lagi !!!"<<endl;
                            goto ulang1;
                            break;
            }
            break;

//pasien
   case '2':ulang2:
            clrscr();
         cout<<"menu input data pasien"<<endl;
           cout<<"1.banyak data pasien   :"<<endl;
           cout<<"2.input data pasien    :"<<endl;
           cout<<"3.output data pasien   :"<<endl;
           cout<<"4.Kembali ke menu utama"<<endl;
            cout<<"Pilihan : ";
            cin>>nomor;
            cout<<"\n";
            switch(nomor)
            {
                case '1':pas.data();
                            kem.kembali();
                            bali4:
                            cin >> x;
                            switch(x)
                            {
                                case '1':goto label; break;
                                case '2':goto ulang2; break;
                                case '3':break;
                                default :cout<<"Nomor Yang Anda Masukkan Salah, Silahkan Ulangi Lagi !!!"<<endl;
                                            goto bali4; break;
                            }
                            break;
                case '2':pas.input();
                            kem.kembali();
                            bali5:
                            cin >> x;
                            switch(x)
                            {
                                case '1':goto label; break;
                                case '2':goto ulang2; break;
                                case '3':break;
                                default :cout<<"Nomor Yang Anda Masukkan Salah, Silahkan Ulangi Lagi !!!"<<endl;
                                            goto bali5; break;
                            }
                            break;
            case '3':pas.output();
                            kem.kembali();
                            bali6:
                            cin >> x;
                            switch(x)
                            {
                                case '1':goto label; break;
                                case '2':goto ulang2; break;
                                case '3':break;
                                default :cout<<"Nomor Yang Anda Masukkan Salah, Silahkan Ulangi Lagi !!!"<<endl;
                                            goto bali6; break;
                            }
                            break;

                case '4':goto label;
                            break;
                default :cout<<"Nomor Yang Anda Masukkan Salah, Silahkan Ulangi Lagi !!!"<<endl;
                            goto ulang2;
                            break;
            }
            break;


case '3':break;
        default : cout<<"Pilihan anda Salah, Silahkan Pilih Ulang\n"<<endl; goto label; break;

    }
}
