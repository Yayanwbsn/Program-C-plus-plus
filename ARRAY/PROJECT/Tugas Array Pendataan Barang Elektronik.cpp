#include <iostream>
#include <string>
#include <iomanip> // Untuk setw (membuat kolom rapi)

using namespace std;
//Akhmad Wahyudi Yanuar Wibisono [A11.2025.16497]

// Definisikan Struktur (Struct) untuk Barang Elektronika
struct BarangElektronika {
    string kode_barang;
    string nama;
    int stok;
    double harga;
};

int main() {
    const int JUMLAH_DATA = 3; // Menentukan jumlah barang yang akan diinput (misalnya 3)
    BarangElektronika inventaris[JUMLAH_DATA]; // Array dari struct

    // --- Input Data (Looping) ---
    cout << "===== Input Data Inventaris Barang Elektronika (3 Barang) =====" << endl;
    for (int i = 0; i < JUMLAH_DATA; i++) {
        cout << "\nInput Barang ke-" << i + 1 << ":" << endl;

        cout << "Kode Barang: ";
        getline(cin, inventaris[i].kode_barang);

        cout << "Nama Barang: ";
        getline(cin, inventaris[i].nama);

        cout << "Stok       : ";
        cin >> inventaris[i].stok;

        cout << "Harga (Rp) : ";
        cin >> inventaris[i].harga;

        cin.ignore(); // Membersihkan buffer setelah cin >> int/double
    }

    // --- Output Data (Looping) ---
    cout << "\n=========================================================" << endl;
    cout << "|             DATA INVENTARIS BARANG ELEKTRONIKA        |" << endl;
    cout << "=========================================================" << endl;
    cout << "| " << left << setw(12) << "KODE BARANG"
         << "| " << left << setw(20) << "NAMA BARANG"
         << "| " << right << setw(5) << "STOK"
         << "| " << right << setw(10) << "HARGA" << " |" << endl;
    cout << "=========================================================" << endl;

    for (int i = 0; i < JUMLAH_DATA; i++) {
        cout << "| " << left << setw(12) << inventaris[i].kode_barang
             << "| " << left << setw(20) << inventaris[i].nama
             << "| " << right << setw(5) << inventaris[i].stok
             << "| " << right << setw(10) << fixed << setprecision(0) << inventaris[i].harga << " |" << endl;
    }
    cout << "=========================================================" << endl;

    return 0;
}
//Akhmad Wahyudi Yanuar Wibisono [A11.2025.16497]
