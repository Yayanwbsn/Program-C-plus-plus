#include <iostream>
using namespace std;

//AKHMAD WAHYUDI YANUAR WIBISONO [A11.2025.16497]

int main() {
    int n;
    cout << "Input n: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Input ke-" << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Hasil Array Genap: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] % 2 == 0)
            cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Hasil Array Ganjil: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] % 2 != 0)
            cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
