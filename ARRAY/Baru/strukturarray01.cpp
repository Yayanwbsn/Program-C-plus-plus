#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct jnsKel {
    string lk = "Laki-Laki";
    string pr = "Perempuan";
};

struct Mahasiswa {
    string nim, nama_mhs;
    int nilai;
    jnsKel jnskel;
};

int main (){
    Mahasiswa mhs, mhs2;
    Mahasiswa siswa [5];
    mhs.nim="A11.2025.16489";
    mhs.nama_mhs="Joko Wibowo";
    mhs.nilai=90;
    mhs2.nim="A11.2025.16488";
    mhs2.nama_mhs="Suki";
    mhs2.nilai=88;
    for (int i=0;i<2;i++){
        cout << "Nim      : ";
        getline(cin, siswa[i].nim);
        cout << "Nama Mhs : ";
        getline(cin, siswa[i].nama_mhs);
        cout << "Jenis kel: ";
        getline(cin, siswa[i].jnskel.lk);
        cout << "Nilai    : ";
        cin >> siswa[i].nilai;
        cin.ignore();  // Clear buffer setelah input nilai
    }

    cout << "================================================" << endl;
    cout << "NIM    NAMA MAHASISWA      JENIS KEL       NILAI" << endl;
    cout << "================================================" << endl;

    for (int a=0; a<2; a++){
        cout << siswa[a].nim << "\t " << siswa[a].nama_mhs << "\t " << siswa[a].jnskel.lk << "\t " << siswa[a].nilai << endl;
        cin.ignore();
    }

    cout << endl;
    cout << "Latihan Struktur" << endl;
    cout << "NIM      :" << mhs.nim << endl;
    cout << "Nama Mhs :" << mhs.nama_mhs << endl;
    cout << "Nilai    :" << mhs.nilai << endl;
    cout << "Jenis Kel:" << mhs.jnskel.lk << endl;

    cout << "NIM      :" << mhs2.nim << endl;
    cout << "Nama Mhs :" << mhs2.nama_mhs << endl;
    cout << "Nilai    :" << mhs2.nilai << endl;
    cout << "Jenis Kel:" << mhs2.jnskel.pr << endl;

    return 0;
}
