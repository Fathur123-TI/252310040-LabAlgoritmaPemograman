#include <iostream>
using namespace std;

int main() {
    int A, B, temp;

    cout << "Masukkan nilai A: ";
    cin >> A;
    cout << "Masukkan nilai B: ";
    cin >> B;

    temp = A;
    A = B;
    B = temp;

    cout << "Hasil Penukaran:" << endl;
    cout << "Nilai A = " << A << endl;
    cout << "Nilai B = " << B << endl;

    return 0;
}

