#include <iostream>

using namespace std;

int main (){
    int a=0;
    //for(start value;kondisi;increment)
    for (a=1;a<=10;a++){
        cout <<a<<" UDINUS"<<endl;
    }
    cout<<endl;
    cout<<"========================================"<<endl;
    cout<<endl;
    cout<<"Bilangan 1-10"<<endl;
    for (a=1;a<=10;a++){
        cout <<a<<" ";
    }
    cout<<endl;

    cout<<"Bilangan Ganjil"<<endl;
    for (a=1;a<=20;a+=2){   //bilangan ganjil<20
        cout <<a<<" ";
    }
    cout<<endl;
    cout<<"Bilangan Genap"<<endl;
    for (a=2;a<=20;a+=2){   //bilangan genap<20
        cout <<a<<" ";
    }

    cout<<endl;
    cout<<"========================================"<<endl;

    cout<<endl;
    /*buat perulangan utk menjumlahkan anaknya
    12345=15*/
    cout<<"Jumlah Bilangan 1-5"<<endl;
    int jml=0;
    for (a=1;a<=5;a++){
        cout <<a<<" ";
        jml+=a;
    }
    cout<<"= "<<jml;

    cout<<endl;
    /*buat perulangan utk menjumlahkan bilangan ganjil dan genap
    */
    /*cout<<"Jumlah Bilangan Ganjil 1-5"<<endl;
    int jml1=0; //ganjil
    for (a=1;a<=5;a+=2){
        cout <<a<<" ";
        jml1+=a;
    }
    cout<<"= "<<jml1;

    cout<<endl;
    /*buat perulangan utk menjumlahkan bilangan ganjil dan genap
    */
    /*cout<<"Jumlah Bilangan Genap 1-5"<<endl;
    int jml2=0; //genap
    for (a=2;a<=5;a+=2){
        cout <<a<<" ";
        jml2+=a;
    }
    cout<<"= "<<jml2;*/



return 0;
}
