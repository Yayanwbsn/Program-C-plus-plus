#include <iostream>
#include <iomanip>  // <-- untuk setw
using namespace std;

int main() {

    int n = 5;  // Akhmad Wahyudi Yanuar Wibisono - A11.2025.16497

    string obat[5][5];
    int totalPerItem[5];
    int totalJumlah = 0;
    int totalHarga = 0;

    cout << "INPUT DATA OBAT" << endl;
    cout << "---------------------------" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i+1 << endl;

        cout << "Kode Obat   : ";
        cin >> obat[i][0];

        cout << "Nama Obat   : ";
        cin >> obat[i][1];

        cout << "Satuan      : ";
        cin >> obat[i][2];

        cout << "Jumlah      : ";
        cin >> obat[i][3];

        cout << "Harga       : ";
        cin >> obat[i][4];
        // A11.2025.16497
        int jumlah = stoi(obat[i][3]);
        int harga = stoi(obat[i][4]);

        totalPerItem[i] = jumlah * harga;

        totalJumlah += jumlah;
        totalHarga += totalPerItem[i];

        cout << endl;
    }

    cout << endl;
    cout << "Laporan Data Obat" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << left
         << setw(4)  << "No"
         << setw(15) << "Nama Obat"
         << setw(10) << "Satuan"
         << setw(10) << "Jumlah"
         << setw(10) << "Harga"
         << setw(10) << "Total"
         << endl;

    cout << "------------------------------------------------------------" << endl;

    for (int i = 0; i < n; i++) {
        cout << left
             << setw(4)  << i+1
             << setw(15) << obat[i][1]
             << setw(10) << obat[i][2]
             << setw(10) << obat[i][3]
             << setw(10) << obat[i][4]
             << setw(10) << totalPerItem[i]
             << endl;
    }

    cout << "------------------------------------------------------------" << endl;

    cout << left
         << setw(29) << "Total:"
         << setw(10) << totalJumlah
         << setw(10) << ""
         << setw(10) << totalHarga
         << endl;

    cout << "------------------------------------------------------------" << endl;

return 0;
}

