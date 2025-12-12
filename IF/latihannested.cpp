#include <iostream>

using namespace std;
int main (){
    int jmlbeli,diskon=0;
    char kartu='Y';
    cout<<"Masukkan Jumlah Beli : ";
    cin>>jmlbeli;
    cout<<"Apakah punya kartu member ? [Y/T]";
    cin>>kartu;
    if (jmlbeli>1000000)
    {
        if ((kartu=='Y') || (kartu=='y'))
        {
            cout<<"Jumlah Beli     : "<<jmlbeli<<endl;
            diskon=(0.1*jmlbeli);
            cout<<"Diskon sebesar  : "<<diskon<<endl;
            cout<<"Total Bayar     : "<<jmlbeli-diskon<<endl;
        }
    }
        else
        {
            cout<<"Jumlah Beli      : "<<jmlbeli<<endl;
            cout<<"Tidak ada Diskon"<<endl;
            cout<<"Total Bayar      : "<<jmlbeli<<endl;
        }

return 0;
}
