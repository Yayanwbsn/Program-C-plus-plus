#include <iostream>

using namespace std;

int main (){

    int a = 0;

    int i[] ={1,2,3,4,5};
    int j[5] ={6,7,8,9,10};
    cout << i [0] << endl;
    cout << i [1] << endl;
    cout << i [2] << endl;
    cout << i [3] << endl;
    cout << i [4] << endl;

    for (int a=0; a<5; a++){
        cout << i [a] << " ";
    }

    cout << endl;
    for (int a=0; a<5; a++){
        cout << j [a] << " ";
    }
    cout << endl;


    int jumlahBuah;
    string namaBuah;

    cout << "Masukkan jumlah buah : ";
    cin >> jumlahBuah;
    string itemBuah[jumlahBuah];

    for (int a=0; a<jumlahBuah; a++){
        cout << "Buah " << a+1 << " : ";
        cin >> namaBuah;
        itemBuah [a] = namaBuah;
    }

    cout << endl;
    cout << "Semua buah yang di masukkan adalah: " << endl;
    for (int a=0; a<jumlahBuah; a++){
        cout << itemBuah [a];
        if (a<jumlahBuah-1)cout<< " ";
    }

return 0;
}
