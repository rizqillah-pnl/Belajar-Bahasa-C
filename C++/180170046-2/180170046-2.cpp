#include <iostream>
#include <conio.h>
#include <windows.h>
#define max 2
using namespace std;

struct antri
{
    int data;
};

struct identitas
{
    char nama [20];
    char no_rek [15];
    char transaksi;
    int nominal;
};

main()
{

    identitas id [50];
    antri ant [50];
    int cek=0, y=0, hapus;
    char pil;
    do {
            system("cls");
            cout<<"\n\t\t ================================================";
            cout<<"\n\t\t ||  PROGRAM ANTRIAN NASABAH BANK INFORMATIKA  ||";
            cout<<"\n\t\t ================================================"<<endl<<endl;
            cout<<"1. Masukan Antrian"<<endl;
            cout<<"2. Proses Antrian"<<endl;
            cout<<"3. Keluar"<<endl;
         cout<<endl;
            cout<<"Masukkan pilihan Anda (1-3)\t= ";
            cin>>pil;
         cout<<endl;
if(pil!='1' && pil !='2' && pil !='3' )
{
    cout<<"Anda salah memasukkan pilihan\n\n";
    system("PAUSE");
}
            else
            {
                if(pil=='1')   //PUSH
                {
                    if(cek==15 && y==15)
                    {
                        cout<<"ANTRIAN PENUH!!!";
                    }

                        cout<<endl;
                        system("cls");
                        cout<<"Nama Nasabah\t: ";
                        cin>>id[cek].nama;
                        cout<<"Nomor Rekening\t: ";
                        cin>>id[cek].no_rek;
                        ulang:
                        cout<<"Jenis Transaksi\t: \n";
                        cout<<"\t: A.Debet\n";
                        cout<<"\t  B.Kredit\n"<<"Pilih\t: ";
                        cin>>id[cek].transaksi;
                        if(id[cek].transaksi=='a' || id[cek].transaksi=='A' || id[cek].transaksi=='b' || id[cek].transaksi=='B')
                        {
                            cout<<"Nominal\t\t: ";
                            cin>>id[cek].nominal;
                        }
                        else
                        {

                            cout<<"\n\nAnda Salah Memilih Jenis Transaksi\n\n";
                            cout<<"\n\n";
                            goto ulang;
                        }

                        cout<<endl;
                        cek++;
                        system("cls");

                        cout<<"Antrian saat ini\t:\n\n";
                                for(int z=0;z<cek;z++)
                                {

                                    cout<<"Nomor Antri\t: "<<z+1;
                                    cout<<endl;
                                    cout<<"Nama Nasabah\t: "<<id[z].nama<<endl;
                                    cout<<"Nomor Rekening\t: "<<id[z].no_rek<<endl;
                                    cout<<"Jenis Transaksi\t: ";
                                    if(id[z].transaksi=='a' || id[z].transaksi=='A')
                                    {
                                        cout<<"Debet";
                                    }
                                    else if(id[z].transaksi=='b' || id[z].transaksi=='B')
                                    {
                                        cout<<"Kredit";
                                    }
                                    cout<<endl;
                                    cout<<"Nominal\t\t: "<<id[z].nominal<<endl;
                                    cout<<endl<<endl;

                                }




                    cout<<"\n\n";
                    system("PAUSE");
                }
                else
                {
                    if(pil=='2')     //POP
                    {
                        if(cek==0)
                            cout<<"Antrian kosong";
                        else
                        {
                            for(int z=0;z<cek;z++)
                            hapus=z;
                            for(int v=0;v<cek;v++)
                                ant[v].data=ant[v+1].data;
                            ant[cek].data=NULL;
                            cek--;
                            system("cls");
                            cout<<"\nAntrian dengan nomor 1 diproses\n";
                            cout<<"\n\t\tData Nasabah \n\n";
                            cout<<"Nama Nasabah\t: "<<id[0].nama<<endl;
                            cout<<"Nomor Rekening\t: "<<id[0].no_rek<<endl;
                            cout<<"Jenis Transaksi\t: "<<id[0].transaksi<<endl;
                            cout<<"Nominal\t\t: "<<id[0].nominal<<endl;
                            cout<<endl;
                            {
                                int b;
                                for(b=0;b<cek;b++)
                                id[b]=id[b+1];
                                b--;
                            }
                        }

                        cout<<endl;
                        if(cek==0)
                            cout<<"Antrian kosong";
                        else
                            cout<<"Nomor Antrian saat ini : ";
                                for(int z=0;z<cek;z++)
                                {
                                    cout<<" | ";
                                    cout<<" "<<z+1;
                                    cout<<" | ";
                                }
                    cout<<endl<<endl;
                    system("PAUSE");
                    }

                }
            }

    }while(pil!='3');
}

