#include <iostream>

using namespace std;
// fungsi void yang tidak memiliki nilainya
void tampil(string nama,string nim,string jurusan){ //untuk pekerjaan tertentu (menampilkan sesuatu) void tampil (){....}
    cout << "Saya belajar Fungsi/Method\n"<<endl;
    cout << "----------------------------"<<endl;

    cout<<"Nama \t: "<<nama<<endl;
    cout<<"Nim \t: "<<nim<<endl;
    cout<<"Jurusan : "<<jurusan<<endl;

}
//fungsi Tipe Data
int hitung1 (int a){//pass by value
    a+=20;
    return a;
}
int hitung2 (int *a){//pass by Reference
    *a+=20;
    return *a;
}

int main (){
    int a= 10;
    tampil("YAYAN GANTENG","A11.2025.16497","Teknik Informatika");
    cout << "----------------------------\n"<<endl;
    hitung1 (a);
    cout << "Hasil a PASS BY VALUE \t\t: "<< a<<endl;
    hitung2 (&a);
    cout << "Hasil a PASS BY REFERENCE \t: "<< a<<endl;
return 0;
}
