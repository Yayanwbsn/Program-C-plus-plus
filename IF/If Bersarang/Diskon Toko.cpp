#include <iostream>
#include <string>

using namespace std;

int main(){

    string jenisbrg;
    int totdiskon;
    int jumlah;
    int metodebyr;
    char member;



    cout<<"Selamat Datang di TOKO ANDA"<<endl;
    cout<<"Selamat Berbelanja\n"<<endl;

    cout<<"Masukkan Jenis Barang yang ingin anda beli (Elektronik, Pakaian, Makanan):"<<endl;
    cin>> jenisbrg;

    cout<<"Masukkan Jumlah Barang yang ingin anda beli :"<<endl;
    cin>>jumlah;

    cout<<"Apakah anda terdaftar sebagai member ? (Y/N)"<<endl;
    cin>>member;

    cout<<"Masukkan [a] untuk cash atau [b] untuk kredit"<<endl;
    cin>>metodebyr;

    if ((jenisbrg == "elektronik")||(jenisbrg == "Elektronik")){
        if (jumlah > 10){
            if((member == 'Y')||(member == 'y')){
                if ((metodebyr == "cash"){
                    totdiskon == 0.15
                }
            }
        }
    }else if ((jenisbrg == "Pakaian")||(jenisbrg == "pakaian"))




return 0;
}
