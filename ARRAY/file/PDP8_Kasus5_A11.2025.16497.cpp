#include <iostream>

//AKHMAD WAHYUDI YANUAR WIBISONO [A11.2025.16497]

using namespace std;

int main() {

    int n;
    cout << "Input n: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            arr[i] = 1;
        } else {
            arr[i] = 0;
        }
    }

    cout << "Hasil Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}
