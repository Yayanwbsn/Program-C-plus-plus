#include <iostream>
#include <string>
using namespace std;

int main() {
    string jabatan, status, kinerja;
    int lamaKerja;

    cout << "Masukkan jabatan (Manager/Staf/Operator): ";
    cin >> jabatan;
    cout << "Masukkan status (Tetap/Kontrak): ";
    cin >> status;
    cout << "Masukkan lama kerja (tahun): ";
    cin >> lamaKerja;
    cout << "Masukkan nilai kinerja (Baik/Cukup/Kurang): ";
    cin >> kinerja;

    int tunjangan = 0, bonus = 0;

    if (jabatan == "Manager") {
        if (status == "Tetap") {
            if (lamaKerja > 5) {
                if (kinerja == "Baik") {
                    tunjangan = 3000000;
                    bonus = 2000000;
                }
            } else if (lamaKerja >= 3) {
                if (kinerja == "Cukup") {
                    tunjangan = 2000000;
                    bonus = 1000000;
                }
            }
        } else if (status == "Kontrak") {
            if (kinerja == "Kurang") {
                tunjangan = 1000000;
                bonus = 0;
            }
        }
    }
else if (jabatan == "Staf") {
        if (status == "Tetap") {
            if (lamaKerja > 5 && kinerja == "Baik") {
                tunjangan = 2000000;
                bonus = 1500000;
            }
        } else if (status == "Kontrak") {
            if (lamaKerja >= 3 && kinerja == "Baik") {
                tunjangan = 1000000;
                bonus = 500000;
            }
        }
    }
    else if (jabatan == "Operator") {
        if (kinerja == "Kurang") {
            tunjangan = 500000;
            bonus = 0;
        }
    }

    cout << "\n--- HASIL PENILAIAN ---\n";
    cout << "Jabatan: " << jabatan << endl;
    cout << "Status: " << status << endl;
    cout << "Lama Kerja: " << lamaKerja << " tahun" << endl;
    cout << "Kinerja: " << kinerja << endl;
    cout << "Tunjangan: Rp " << tunjangan << endl;
    cout << "Bonus: Rp " << bonus << endl;

    return 0;
}

