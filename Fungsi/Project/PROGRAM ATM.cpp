#include <iostream>

using namespace std;

//AKHMAD WAHYUDI YANUAR WIBISONO (A11.2025.16497)

// --- Variabel Global dan Struct ---
long saldo = 100000; // Saldo Awal Nasabah
const int MAX_TRANSAKSI = 20; // Maksimal riwayat transaksi yang disimpan

// Struct untuk Riwayat Transaksi
struct Transaksi {
    string jenis; // "Simpan" atau "Ambil"
    long jumlah;
    long saldoAkhir;
};

// Array Statis untuk menampung riwayat transaksi
Transaksi riwayatTransaksi[MAX_TRANSAKSI];
int jumlahTransaksi = 0; // Penghitung jumlah transaksi yang sudah terjadi

// Data Nasabah
string kode_nasabah = "112516497";
string nama_nasabah = "Akhmad Wahyudi Yanuar Wibisono";
string jeniskel_nasabah = "Pria";
string alamat_nasabah = "Jl.Kapas Timur Raya/G.962";


//UNTUK HEADER
void header (){
    cout<< "\n\n\n";
    cout << "\t\t\t\t\t===========================================\n"
            "\t\t\t\t\t                BANK MIUN\n"
            "\t\t\t\t\t===========================================\n\n";
}


// Mencatat transaksi ke dalam array riwayat
void catatTransaksi(const string& jenis, long jumlah) {
    if (jumlahTransaksi < MAX_TRANSAKSI) {
        riwayatTransaksi[jumlahTransaksi].jenis = jenis;
        riwayatTransaksi[jumlahTransaksi].jumlah = jumlah;
        riwayatTransaksi[jumlahTransaksi].saldoAkhir = saldo;
        jumlahTransaksi++;
    }
    // Jika penuh, transaksi tetap dilakukan tapi tidak dicatat riwayatnya
}


//BAGIAN MENU
int menu (){
    int pilihanMenu;
    header();
    cout<<"\t\t\t\t\t                MENU ATM\n"
          "\t\t\t\t\t-------------------------------------------\n\n"
          "\t\t\t\t\t    1. ID NASABAH\n"
          "\t\t\t\t\t    2. CEK SALDO\n"
          "\t\t\t\t\t    3. SIMPAN UANG\n"
          "\t\t\t\t\t    4. AMBIL UANG\n"
          "\t\t\t\t\t    5. KELUAR\n\n"
          "\t\t\t\t\t-------------------------------------------\n\n";
    cout << "\t\t\t\t\t Pilih : "; cin >> pilihanMenu;

return pilihanMenu;
}

//INPUT PIN
void inputpin(){
    int pin;
    int i = 1;

    do{
    header();
    cout << "\n\t\t\t\t\t      SELAMAT DATANG DI ATM BANK MIUN\n\n\n\n"
            "\t\t\t\t\t               MASUKKAN PIN        \n\n"
            "\t\t\t\t\t                ATM ANDA        \n\n"
            "\t\t\t\t\t                 "; cin>> pin;

    if (pin == 123456){
        system("cls//?///");

    }else {
        cout<< "\n\t\t\t\t\t===========================================\n\n"
               "\t\t\t\t\t     Pin yang anda masukkan salah !!!\n\n"
               "\t\t\t\t\t===========================================\n\n";
        system("pause");
        system("cls");
        i += 1;
        if (i>3){
            header();
            cout << "\t\t\t\t\t===========================================\n"
                    "\n\n\t\t\t\t\t             TRANSAKSI GAGAL \n\n\n\n"
                    "\t\t\t\t\t          KARTU ANDA TERBLOKIR\n\n"
                    "\t\t\t\t\t      HUBUNGI KANTOR CABANG TERDEKAT\n\n"
                    "\t\t\t\t\t===========================================\n\n";
            system("pause");
            exit(0);
        }
    }
    }while (pin!=123456 && i<=3);
}

//IDENTITAS NASABAH BANK MIUN
void Nasabah(string kode,string namaNasabah,string jeniskel,string alamat){
    cout << "\t\t\t\t\t\t       DATA NASABAH \n";
    cout << "\t\t\t\t\t===========================================\n";
    cout << "\t\t\t\t\tKode \t\t: "<< " "<< kode <<endl;
    cout << "\t\t\t\t\tNama \t\t: "<< " "<< namaNasabah <<endl;
    cout << "\t\t\t\t\tJenis Kelamin\t: "<< " "<< jeniskel <<endl;
    cout << "\t\t\t\t\tAlamat \t\t: "<< " "<< alamat  <<endl;
    cout << "\t\t\t\t\t===========================================\n";
};

void Identitas(){
    Nasabah("112516497","Akhmad Wahyudi Yanuar Wibisono","Pria","Jl.Kapas Timur Raya/G.962");

}


//CEK SALDO
void ceksaldo(){
    cout << "\n\t\t\t\t\t\t  SALDO REKENING ANDA \n\n"
            "\t\t\t\t\t\t     RP\t" << saldo <<"\n\n\n"
            "\t\t\t\t\t===========================================\n";
}


//SIMPAN UANG
void simpanUang(){
    long nominalUang;

    cout << "\t\t\t\t\tMasukkan nominal uang : Rp. "; cin >> nominalUang;
    saldo += nominalUang;

    // PENTING: Catat Transaksi
    catatTransaksi("Simpan", nominalUang);

    system("cls");
    header();
    cout << "\t\t\t\t\t         Anda Berhasil Setor Uang \n\n"
            "\t\t\t\t\t===========================================\n\n"
            "\t\t\t\t\t     Nominal Uang : Rp. "<< nominalUang<<"\n\n"
            "\t\t\t\t\t===========================================\n";
}

//AMBIL UANG
void ambilUang(){
    int tarik;
    long nominal = 0;

    cout << "\t\t\t\t\t       [1] 100.000     [3] 500.000\n\n"
            "\t\t\t\t\t       [2] 200.000     [4] 1000.000\n\n"
            "\t\t\t\t\t          [5] Penarikan Jumlah Lain \n\n"
            "\t\t\t\t\t===========================================\n"
            "\t\t\t\t\t   Pilih : "; cin >> tarik;

    if (tarik==1){
        nominal = 100000;
    }else if (tarik==2){
        nominal = 200000;
    }else if (tarik==3){
        nominal = 500000;
    }else if (tarik==4){
        nominal = 1000000;
    }else if (tarik==5){
        system("cls");
        header();
        cout << "\t\t\t\t\t Masukkan Nominal : "; cin >> nominal;
    }

    system("cls");
    header();
    if (saldo<=nominal){
        cout << "\t\t\t\t\t        Saldo Kamu Tidak Mencukupi \n\n"
                "\t\t\t\t\t===========================================\n\n"
                "\t\t\t\t\t\t     Sisa Saldo Anda \n"
                "\t\t\t\t\t\t       Rp "<<saldo<<"\n\n"
                "\t\t\t\t\t===========================================\n\n";
    }else {
        saldo -= nominal;

        // PENTING: Catat Transaksi
        catatTransaksi("Ambil", nominal);

        cout << "\t\t\t\t\t       Anda Berhasil Menarik Uang \n\n"
                "\t\t\t\t\t===========================================\n\n"
                "\t\t\t\t\t   Nominal Uang : Rp " << nominal << "\n\n"
                "\t\t\t\t\t===========================================\n";
    }

}

//Laporan Koran ATM
void LaporanKoran(){
    time_t nowuptime=time(0);
    char*date=ctime(&nowuptime);
    cout<<"\t\t\t\t\t"<<date<<" ";
    cout << "\t\t\t\t\t===========================================" << endl;
    cout << "\t\t\t\t\t           LAPORAN REKENING KORAN              " << endl;
    cout << "\t\t\t\t\t===========================================" << endl;
    cout << "\t\t\t\t\tNasabah: " << nama_nasabah << endl;
    cout << "\t\t\t\t\tKode   : " << kode_nasabah << endl;
    cout << "\t\t\t\t\t-------------------------------------------" << endl;
    cout << "\t\t\t\t\tJENIS\tJUMLAH (Rp)\tSALDO AKHIR (Rp)\n";
    cout << "\t\t\t\t\t-------------------------------------------" << endl;

    if (jumlahTransaksi==0){
        cout << "\t\t\t\t\t         Belum ada transaksi tercatat.\n\n";
    }else {
        for (int i = 0; i < jumlahTransaksi; ++i) {
            cout << "\t\t\t\t\t" + riwayatTransaksi[i].jenis << "\t" << riwayatTransaksi[i].jumlah << "\t\t\t" << riwayatTransaksi [i].saldoAkhir <<endl;
        }
    }
    cout << "\t\t\t\t\t-------------------------------------------" << endl;
    cout << "\t\t\t\t\tSALDO TERKINI: Rp. " << saldo << endl;
    cout << "\t\t\t\t\t===========================================" << endl;
}


//BAGIAN UTAMA (UNTUK MENAMPILKAN SEMUA DATA YANG TELAH DI BUAT)
int main(){

    int pilihMenu;
    inputpin();

    menuUlang:
    do{
        system("cls");
        pilihMenu=menu();

        system("cls");
        header();
        if (pilihMenu == 1){
            Identitas();
        }else if (pilihMenu == 2){
            ceksaldo();
        }else if (pilihMenu == 3){
            simpanUang();
        }else if (pilihMenu == 4){
            ambilUang();
        }else if (pilihMenu==5){
            LaporanKoran();
            exit(0);
        }else;
    }while (pilihMenu>4);

    system ("pause");
    system("cls");
    header();
    int pilih;
    cout << "\t\t\t\t\t        APAKAH ANDA INGIN MELAKUKAN\n"
            "\t\t\t\t\t\t      TRANSAKSI LAIN?\n\n"
            "\t\t\t\t\t1.YA \t\t\t\t 2.TIDAK\n\n"
            "\t\t\t\t\t===========================================\n"
            "\t\t\t\t\t\t Pilih : "; cin>>pilih;
    if (pilih==1){
        goto menuUlang;
    } else {
        exit(0);
    }

return 0;
}
//AKHMAD WAHYUDI YANUAR WIBISONO (A11.2025.16497)
