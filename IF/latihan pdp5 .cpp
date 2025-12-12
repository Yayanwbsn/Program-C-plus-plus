#include <iostream>
#include <iomanip>
#include<string>

using namespace std;
int main (){
    string namabarang;
    double hargabarang,jumlahbarang,diskon,hargasetelahDiskon,totalHarga;
    int jmlbarang;

    cout<<"TOKO UD."<<endl;


    cout<<"Masukkan Nama Barang : ";
    getline(cin,namabarang);

    cout<<"Masukkan Harga Barang : ";
    cin>>hargabarang;

    cout<<"Masukkan Jumlah Barang : ";
    cin>>jumlahbarang;

    if (jumlahbarang>=3&&jumlahbarang<=5){
        diskon=0.02;
    }else if(jumlahbarang>=6&&jumlahbarang<=10){
        diskon=0.05;
    }else if(jumlahbarang>=11&&jumlahbarang<=17){
        diskon=0.10;
    }else if(jumlahbarang>=18){
        diskon=0.20;
    }

    cout<<"\n--Rincian Pembelian--\n";
    cout<<"Nama Barang      : "<<namabarang<<endl;
    cout<<"Harga Barang      : "<<hargabarang<<endl;
    cout<<"Nama Barang      : "<<namabarang<<endl;
    cout<<"Nama Barang      : "<<namabarang<<endl;
    cout<<"Nama Barang      : "<<namabarang<<endl;

return 0;
}
