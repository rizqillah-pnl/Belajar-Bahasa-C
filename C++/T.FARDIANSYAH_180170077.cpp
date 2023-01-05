#include<iostream>
#include<conio.h>
#include<math.h>
main ()
{
	int pilihan;
    int kode,pri,jml,tot,byr,kbl;
    char mad;
    do
    {
    cout<<"WARUNG MAHASISWA"<<endl;
    cout<<"RASA NGEBOS HARGA ANAK KOS"<<endl;
    cout<<"BLANG PULOE"<<endl;
    cout<<"============================================"<<endl;
    cout<<""<<endl;
   
    cout<<"Menu Makanan                Harga"<<endl;
    cout<<"============================================"<<endl;
    cout<<"1. AYAM GORENG            Rp. 10.000"<<endl;
    cout<<"2. NASI GORENG            Rp.  8.000"<<endl;
    cout<<"3. MIE PANGSIT            Rp. 10.000"<<endl;
    cout<<"4. AYAM LALAPAN + NASI    Rp. 12.000"<<endl;
    cout<<"5. NASI CAMPUR            Rp.  8.000"<<endl;
    cout<<"6. JUS JERUK              Rp.  6.000"<<endl;
    cout<<"7. AQUA GELAS              Rp.    500"<<endl;
    cout<<'\n'<<"MASUKKAN PILIHAN ANDA :";
    cin>>kode;
    switch (kode){
    case 1:
        cout<<'\n'<<"AYAM GORENG"<<endl;
        pri=10000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 2:
        cout<<'\n'<<"NASI GORENG"<<endl;
            pri=8000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 3:
        cout<<'\n'<<"MIE PANGSIT"<<endl;
            pri=10000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 4:
        cout<<'\n'<<"AYAM LALAPAN + NASI"<<endl;
            pri=12000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 5:
        cout<<'\n'<<"NASI CAMPUR"<<endl;
            pri=8000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 6:
        cout<<'\n'<<"JUS JERUK"<<endl;
            pri=6000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 7:
        cout<<'\n'<<"AQUA GELAS"<<endl;
            pri=500;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    default:
    cout<<"Kode Yang Anda Masukkan Tidak Ada \n";
    }
    }
    while (mad/='Y');
    cout<<"Terimah Kasih Atas Kunjungan Anda";
    return 0;
}
