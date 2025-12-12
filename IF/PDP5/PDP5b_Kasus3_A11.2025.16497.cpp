#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    time_t nowuptime = time(0);
    char* date = ctime(&nowuptime);
    cout << date << endl;

    cout << "***********************************************" << endl;
    cout << "************** SELAMAT DATANG *****************" << endl;
    cout << "************ DI TOKO BABA SLAMET **************" << endl;
    cout << "***********************************************" << endl;

    // Deklarasi variabel yang benar di dalam main()
    int pilihan; // Gunakan tipe data int untuk pilihan menu
    int jumlah; // Gunakan tipe data int untuk jumlah barang
    double harga_awal, harga_akhir, diskon_nominal;
    double diskon_persentase = 0.0;
    string bonus = "";
    char ulang;

    do {
        // Pindahkan menu dan input ke dalam loop do-while
        cout << "\nSilahkan pilih produk yang akan anda beli : \n" << endl;
        cout << "-------------------------------------------------" << endl;
        cout << "1. [1] Kertas Paper A4 80Gram  (Rp 55.000,00)" << endl;
        cout << "2. [2] Epson INKQ (Rp 125.000,00)" << endl;
        cout << "3. [3] Flashdisk Sundrive 64GB (Rp 180.000,00)" << endl;
        cout << "-------------------------------------------------" << endl;
        cout << "Masukkan Pilihan Anda : ";
        cin >> pilihan; // Gunakan cin >> untuk membaca integer
        cout << "Jumlah Barang yang ingin Anda Beli :";
        cin >> jumlah; // Gunakan cin >> untuk membaca integer

        // Membersihkan buffer input setelah cin
        cin.ignore();

        switch (pilihan) {
            case 1: { // Gunakan kurung kurawal untuk mendefinisikan scope case
                const double harga_brg = 55000.0;
                harga_awal = jumlah * harga_brg;
                if (jumlah >= 3 && jumlah <= 5) {
                    diskon_persentase = 0.05;
                } else if (jumlah >= 6 && jumlah <= 10) {
                    diskon_persentase = 0.10;
                } else if (jumlah >= 11 && jumlah <= 15) {
                    diskon_persentase = 0.15;
                } else if (jumlah > 15) {
                    diskon_persentase = 0.20;
                    bonus = " (GRATIS BOBA DAN MILK TEA)";
                }

                diskon_nominal = harga_awal * diskon_persentase;
                harga_akhir = harga_awal - diskon_nominal;

                cout << "-----------------------------------" << endl;
                cout << "Ringkasan Pesanan:" << endl;
                cout << "Produk: Kertas A4" << endl;
                cout << "Jumlah: " << jumlah << endl;
                cout << "Harga Awal: Rp " << fixed << setprecision(2) << harga_awal << endl;
                if (diskon_persentase > 0) {
                    cout << "Diskon (" << diskon_persentase * 100 << "%): Rp " << diskon_nominal << endl;
                }
                cout << "Harga Akhir: Rp " << harga_akhir << bonus << endl;
                cout << "-----------------------------------" << endl;
                break;
            }
            case 2: {
                const double harga_brg = 125000.0;
                harga_awal = jumlah * harga_brg;
                if (jumlah >= 3 && jumlah <= 10) {
                    diskon_persentase = 0.10;
                } else if (jumlah > 10) {
                    diskon_persentase = 0.20;
                    diskon_nominal = harga_awal * diskon_persentase + (jumlah * 2000.0);
                    harga_akhir = harga_awal - diskon_nominal;
                    bonus = " (GRATIS 1 TINTA HITAM DAN GRATIS 1 PACK)";

                    cout << "-----------------------------------" << endl;
                    cout << "Ringkasan Pesanan:" << endl;
                    cout << "Produk: Epson INKQ" << endl;
                    cout << "Jumlah: " << jumlah << endl;
                    cout << "Harga Awal: Rp " << fixed << setprecision(2) << harga_awal << endl;
                    cout << "Total Diskon: Rp " << diskon_nominal << endl;
                    cout << "Harga Akhir: Rp " << harga_akhir << bonus << endl;
                    cout << "-----------------------------------" << endl;
                    break;
                }

                diskon_nominal = harga_awal * diskon_persentase;
                harga_akhir = harga_awal - diskon_nominal;

                cout << "-----------------------------------" << endl;
                cout << "Ringkasan Pesanan:" << endl;
                cout << "Produk: Epson INKQ" << endl;
                cout << "Jumlah: " << jumlah << endl;
                cout << "Harga Awal: Rp " << fixed << setprecision(2) << harga_awal << endl;
                if (diskon_persentase > 0) {
                    cout << "Diskon (" << diskon_persentase * 100 << "%): Rp " << diskon_nominal << endl;
                }
                cout << "Harga Akhir: Rp " << harga_akhir << bonus << endl;
                cout << "-----------------------------------" << endl;
                break;
            }
            case 3: {
                const double harga_brg = 180000.0;
                harga_awal = jumlah * harga_brg;
                double diskon_potongan = 0.0;

                if (harga_awal > 5000000.0) {
                    diskon_potongan = 750000.0;
                    bonus = " (GRATIS 1 tas reguler dan 1 gantungan kunci)";
                } else if (harga_awal > 1800000.0) {
                    diskon_potongan = 250000.0;
                    bonus = " (GRATIS 1 tas mini)";
                }

                harga_akhir = harga_awal - diskon_potongan;

                cout << "-----------------------------------" << endl;
                cout << "Ringkasan Pesanan:" << endl;
                cout << "Produk: Flashdisk Sundrive 64GB" << endl;
                cout << "Jumlah: " << jumlah << endl;
                cout << "Harga Awal: Rp " << fixed << setprecision(2) << harga_awal << endl;
                if (diskon_potongan > 0) {
                    cout << "Diskon: Rp " << diskon_potongan << endl;
                }
                cout << "Harga Akhir: Rp " << harga_akhir << bonus << endl;
                cout << "-----------------------------------" << endl;
                break;
            }
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }

        cout << "\nApakah Anda ingin bertransaksi lagi? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}
