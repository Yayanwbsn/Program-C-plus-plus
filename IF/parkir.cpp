#include <iostream>
#include <iomanip>
#include <string.h>


using namespace std;

int main() {
   string jeniskendaraan;
   double lamaparkir,totalbiaya =0;

   time_t nowuptime=time(0);
   char*date=ctime(&nowuptime);
   cout<<date<<endl;

   cout<<"Selamat datang di Parkiran!\n"<<endl;
   cout<<"Jenis Kendaraan yang tersedia\n"<<endl;
    cout << "1. Sepeda Motor\n";
    cout << "2. Mobil\n";
    cout << "3. Mini Truck\n"<<endl;
    cout << "Masukkan jenis kendaraan Anda  : ";

    getline(cin, jeniskendaraan);
    for (char &c : jeniskendaraan){
        c=tolower(c);
    }

    cout <<"Masukkan lama parkir (dalam jam) : ";
    cin>> lamaparkir;

    if (jeniskendaraan.find("motor") != string::npos || jeniskendaraan.find("sepeda") != string::npos) {
        if (lamaparkir>12){
            totalbiaya = 50000;
        } else{
            totalbiaya= lamaparkir*30000;
        }
} else if (jeniskendaraan.find ("mobil") != string::npos){
    if (lamaparkir>12){
        totalbiaya =75000;
    }else {
        totalbiaya=lamaparkir*50000;
    }

}else if (jeniskendaraan.find ("truck") != string::npos ||jeniskendaraan.find("bus") != string::npos){
    if (lamaparkir>12){
        totalbiaya =250000;
    }else {
        totalbiaya=lamaparkir*25000;
    }

}else{
    cout<< "-------------------------------\n"<<endl;
    cout<< "Jenis Kendaraan tidak dikenali. \n"<<endl;
    cout<< "-------------------------------\n";
    return 1;

}
cout<<"\n-------Rincian Biaya Parkir------------\n"<<endl;
cout<<"Jenis Kendaraan  : "<<jeniskendaraan<<endl;
cout<<"Lama Parkir      : "<<lamaparkir<<" jam"<<endl;
cout << "Total Biaya      : Rp " << fixed << setprecision(0) << totalbiaya << endl;
cout<<"\n----------------------------------------\n"<<endl;


    return 0;
}

