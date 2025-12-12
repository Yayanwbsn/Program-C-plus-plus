#include <iostream>
#include <iomanip> // Untuk fixed dan setprecision
#include <string>  // Untuk tipe data string


using namespace std;

int main() {
    // Untuk menampilkan waktu sekarang
    time_t nowuptime = time(0);
    char* date = ctime(&nowuptime);
    cout << date << endl;

    // Menampilkan Judul
    cout << "*******************************************************************************" << endl;
    cout << "************************** PROGRAM PARKIR KENDARAAN ***************************" << endl;
    cout << "************************* UNIVERSITAS DIAN NUSWANTORO *************************" << endl;
    cout << "*******************************************************************************" << endl;

    // Deklarasi variabel
    int tipe_kendaraan;  // Variabel untuk input tipe kendaraan (1, 2, atau 3)
    char ulang;          // Variabel untuk mengulang program (Y/T)
    int lama_parkir;     // Variabel untuk lama parkir dalam jam
    double total_biaya = 0.0; // Menggunakan double untuk total_biaya agar fleksibel untuk format mata uang

    do {
        // Output pengisian tipe kendaraan
        cout << "\nPilih Kode di bawah ini untuk memilih tipe kendaraan Anda\n" << endl;
        cout << "-------------------------------------------------------------------------" << endl;
        cout << "1. Ketik [1] jika tipe kendaraan Anda : Mobil" << endl;
        cout << "2. Ketik [2] jika tipe kendaraan Anda : Motor, Tossa, Sepeda Listrik, Sepeda" << endl;
        cout << "3. Ketik [3] jika tipe kendaraan Anda : Truk, Mini Truk, Bus, Mini Bus" << endl;
        cout << "-------------------------------------------------------------------------" << endl;
        cout << "Masukkan pilihan Anda: ";
        cin >> tipe_kendaraan;


        cout << "Masukkan lama parkir (dalam jam): ";
        cin >> lama_parkir;


        // Logika untuk menghitung biaya parkir
        switch (tipe_kendaraan) {
            case 1: // Mobil
                if (lama_parkir > 12) {
                    total_biaya = 75000.0 + ((lama_parkir-12)*5000.0); // Biaya menginap
                } else {
                    total_biaya = lama_parkir * 5000.0;
                }
                break;
            case 2: // Motor, Tossa, Sepeda Listrik, Sepeda
                if (lama_parkir > 12) {
                    total_biaya = 50000.0 + ((lama_parkir-12)*3000.0); // Biaya menginap
                } else {
                    total_biaya = lama_parkir * 3000.0;
                }
                break;
            case 3: // Truk, Mini Truk, Bus, Mini Bus
                if (lama_parkir > 8) {
                    total_biaya = 250000.0 + ((lama_parkir-12)*25000.0); // Biaya menginap
                } else {
                    total_biaya = lama_parkir * 25000.0;
                }
                break;
            default:
                cout << "\nPilihan kendaraan tidak valid. Mohon masukkan 1, 2, atau 3." << endl;
                total_biaya = 0.0; // Set biaya menjadi 0 untuk pilihan tidak valid
                break;
        }

        // Menampilkan hasil perhitungan (jika pilihan valid)
        if (tipe_kendaraan >= 1 && tipe_kendaraan <= 3) {
            cout << "\n-------------------------------------------------------------------------" << endl;
            cout << "Rincian Parkir:" << endl;
            cout << "Tipe Kendaraan \t: " << tipe_kendaraan << endl;
            cout << "Lama Parkir \t: " << lama_parkir << " Jam" << endl;
            cout << "Total Biaya \t: Rp " << fixed << setprecision(0) << total_biaya << endl;
            cout << "-------------------------------------------------------------------------" << endl;
        }

        cout << "\nApakah Anda ingin menghitung biaya parkir lagi? (Y/T): ";
        cin >> ulang;



    } while (toupper(ulang) == 'Y'); // Kondisi perulangan yang benar

    cout << "\nTerima kasih telah menggunakan program parkir kami!" << endl;

    return 0;
}
