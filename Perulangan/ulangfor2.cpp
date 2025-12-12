#include <iostream>

using namespace std;
int main(){

    int jml=0;
    int a=0;
    int genap=0;
    int ganjil=0;
    int jmlgenap=0;
    int jmlganjil=0;

    for (a=1;a<=5;a++)
    {
        jml +=a;
        cout<<a<<" ";
        if (a%2==0){
            jmlgenap+=a;
            genap++;
        }else {
            jmlganjil+=a;
            ganjil++;
        }
    }
    cout <<endl;
    cout<<"Jumlah Semua Bilangan = "<<jml<<endl;
    cout<<"Jumlah Bilangan Genap = "<<jmlgenap<<endl;
    cout<<"Jumlah Bilangan Ganjil = "<<jmlganjil<<endl;
    cout<<"Berapa Bilangan Genap = "<<genap<<endl;
    cout<<"Berapa Bilangan Ganjil = "<<ganjil<<endl;
return 0;
}
