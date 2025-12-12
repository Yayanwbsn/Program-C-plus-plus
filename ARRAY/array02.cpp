#include <iostream>

using namespace std;

int main (){

    int jmlarr, angka = 0;
    cout << "Masukkan Jumlah Array :";
    cin >> jmlarr;
    int arr [jmlarr];
    for (int a=0; a<jmlarr; a++){
        cout << "Angka "<< a+1 << " : ";
        cin >> angka;
        arr [a] = angka;
    }
    cout << "Angka yang anda masukkan " << endl;
    for (int a=0; a<jmlarr; a++){
        cout << arr[a] << " ";
    }
    cout << endl;

    cout << "Jumlah Elemen :" << jmlarr << endl;
    int totarr = 0;
    for (int a=0; a<jmlarr; a++){
        totarr = arr[a];
    }
    cout << "Total Array   :" << totarr << endl;
    cout << endl;

    int besar = arr [0];
    for (int a=0; a<jmlarr; a++){
        if (arr[a]>besar){
            besar = arr[a];
        }
    }
    cout << "Aangka yang paling besar adalah :" << besar << endl;

    int kecil = arr [0];
    for (int a=0; a<jmlarr; a++){
        if (arr[a]<kecil){
            kecil = arr[a];
        }
    }
    cout << "Aangka yang paling kecil adalah :" << kecil << endl;

return 0;
}
