#include <iostream>

using namespace std;
/*penjumlahan
perkalian
pengurangan
pembagian
modulus
*/

int penjumlahan (int a,int b){
    return a+b;
}

int pengurangan (int a,int b){
    return a-b;
}

int perkalian (int a,int b){
    return a*b;
}

int pembagian (int a,int b){
    return a/b;
}

int sisabagi (int a,int b){
    return a%b;
}

int main(){
    int a, b;
    cout << "KALKULATOR SEDERHANA DARI YAYAN GANTENG"<<endl;
    cout << "----------------------------"<<endl;
    cout<<"Masukkan Angka \t: ";
    cin >> a;
    cout<<"Masukkan Angka \t: ";
    cin >> b;
    cout << "----------------------------"<<endl;
    cout<< "Penjumlahan \t: " << penjumlahan (a,b) <<endl;
    cout<< "Pengurangan \t: " << pengurangan (a,b) <<endl;
    cout<< "Perkalian \t: " << perkalian (a,b) <<endl;
    cout<< "Pembagian \t: " << pembagian (a,b) <<endl;
    cout<< "Modulus \t: " << sisabagi (a,b) <<endl;
    cout << "----------------------------"<<endl;

return 0;
}
