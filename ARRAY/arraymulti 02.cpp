#include <iostream>

using namespace std;

int main(){

        // [baris][kolom][dimensi]
    int a [2] [2] [2] = {//    0     1
                            {{1,2},{3,4}},  //baris pertama 0
                            {{5,6},{7,8}}   //baris kedua 1
                        };//   0,1   0,1
    cout << a[1][0][1] <<endl; //6
    cout << a[0][1][0] <<endl; //3
    cout << a[0][0][1] <<endl; //2
    cout << endl;
        for (int i=0;i<2;i++){ //baris
            for (int j=0;j<2;j++){ //kolom
                for (int k=0;k<2;k++){ //dimensi
                        cout << a[i][j][k] <<" ";
                        }
            }
        }
        cout << endl;

return 0;
    }

