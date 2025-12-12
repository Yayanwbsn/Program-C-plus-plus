#include <iostream>
#include <iomanip> // Untuk memformat output desimal

using namespace std;
//Akhmad Wahyudi Yanuar Wibisono [A11.2025.16497]

// 1. Definisikan Struct untuk menyimpan semua input data
struct DataGeometri {
    double panjang;
    double lebar;
    double jari_jari; // r
    double tinggi;    // t
};

// Konstanta
const double PHI = 3.14; // Nilai Phi yang umum digunakan

// --- Fungsi Perhitungan ---

// Fungsi untuk menghitung Luas Persegi Panjang
double hitungLuasPersegiPanjang(const DataGeometri& data) {
    return data.panjang * data.lebar;
}

// Fungsi untuk menghitung Luas Lingkaran
double hitungLuasLingkaran(const DataGeometri& data) {
    // Menggunakan 22.0/7.0 atau PHI, di sini kita gunakan PHI untuk konsistensi
    return PHI * data.jari_jari * data.jari_jari;
    // Jika ingin menggunakan 22/7, bisa: return (22.0/7.0) * data.jari_jari * data.jari_jari;
}

// Fungsi untuk menghitung Volume Kerucut
double hitungVolumeKerucut(const DataGeometri& data) {
    // Rumus: 1/3 * phi * r^2 * t
    return (1.0 / 3.0) * PHI * data.jari_jari * data.jari_jari * data.tinggi;
}

// Fungsi untuk menghitung Volume Bola
double hitungVolumeBola(const DataGeometri& data) {
    // Rumus: 4/3 * phi * r^3
    return (4.0 / 3.0) * PHI * (data.jari_jari * data.jari_jari * data.jari_jari);
}

// --- Main Program ---

int main() {
    // 2. Deklarasi dan Input Data
    DataGeometri p; //untuk persegi panjang
    DataGeometri l; //untuk lingkaran
    DataGeometri k; //untuk kerucut
    DataGeometri b; //untuk bola

    cout << "=================================================" << endl;
    cout << "           PROGRAM HITUNG RUMUS GEOMETRI         " << endl;
    cout << "=================================================" << endl;

    // Input data untuk Persegi Panjang (panjang & lebar)
    cout << "Masukkan Panjang Persegi Panjang \t: \t";
    cin >> p.panjang;
    cout << "Masukkan Lebar Persegi Panjang \t\t: \t";
    cin >> p.lebar;


    // Input data untuk Lingkaran, Kerucut, dan Bola (jari-jari)
    cout << "Masukkan Jari-Jari (r) Lingkaran \t: \t";
    cin >> l.jari_jari;

    // Input data untuk Kerucut (tinggi)
    cout << "Masukkan Tinggi Kerucut (t) \t\t: \t";
    cin >> k.tinggi;

    cout << "Masukkan Jari-Jari (r) Kerucut \t\t: \t";
    cin >> k.jari_jari;

    cout << "Masukkan Jari-Jari (r) Bola \t\t: \t";
    cin >> b.jari_jari;


    // 3. Menampilkan Hasil Perhitungan
    cout << "\n=================================================" << endl;
    cout << "                  HASIL PERHITUNGAN              " << endl;
    cout << "=================================================" << endl;

    // Pastikan output menggunakan dua angka desimal
    cout << fixed << setprecision(2);

    // Luas Persegi Panjang
    cout << "Luas Persegi Panjang (P:" << p.panjang << ", L:" << p.lebar << "): "
         << hitungLuasPersegiPanjang(p) << endl;

    // Luas Lingkaran
    cout << "Luas Lingkaran (r:" << l.jari_jari << "): "
         << hitungLuasLingkaran(l) << endl;

    // Volume Kerucut
    cout << "Volume Kerucut (r:" << k.jari_jari << ", t:" << k.tinggi << "): "
         << hitungVolumeKerucut(k) << endl;

    // Volume Bola
    cout << "Volume Bola (r:" << b.jari_jari << "): "
         << hitungVolumeBola(b) << endl;

    cout << "=================================================" << endl;

    return 0;
}
//Akhmad Wahyudi Yanuar Wibisono [A11.2025.16497]
