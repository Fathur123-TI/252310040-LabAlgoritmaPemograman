#include <iostream>
using namespace std;

void validasi(int *x) {
    if (*x < 0)
        *x = 0;
    else if (*x > 100)
        *x = 100;
}

int main() {
    int nilai;

    cout << "=== PROGRAM VALIDASI NILAI ===" << endl;
    cout << "Masukkan angka (0 - 100) : ";
    cin >> nilai;

    validasi(&nilai);

    cout << "Hasil validasi nilai : " << nilai << endl;

    return 0;
}


