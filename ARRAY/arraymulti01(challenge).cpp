/*    kode,nama barang, satuan, jumlah, harga
    b001    laptop          unit        10     15000000
    b002    televisi 50"    unit         6     50000000
    b003    lemari es       unit         1      25000000
    b004    AC Ucida        unit         1      35000000
*/
#include <iostream>

using namespace std;

int main(){

    string barang [4][5] = {
                    {"b001","LAPTOP  ", "  unit", "10",   "15000000"},
                    {"b002","TELEVISI", "  unit", "6",    "50000000"},
                    {"b003","LEMARI ES ","  unit", "1",    "25000000"},
                    {"b004","AC UCIDA ", "  unit", "1",    "35000000"},

    };
    cout << endl;
    cout << "----------------------------------------------" << endl;
    cout << "NO KODE\t  NAMA BARANG\t    SATUAN\t JUMLAH\t    HARGA" << endl;
    cout << "----------------------------------------------" << endl;
    for (int i=0;i<4;i++){
            cout << i+1<< " ";
        for (int j=0;j<5;j++){
            cout << barang [i] [j] << "\t   "; // \t : Supaya rapi
        }
        cout << endl;


}
return 0;
}
