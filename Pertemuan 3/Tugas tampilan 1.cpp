#include <iostream>
using namespace std;

int main() {
    float r;
    const float PI = 3.14;

    cout << "=== Menghitung Luas Lingkaran ===" << endl;
    cout << "Masukkan jari-jari : ";
    cin >> r;

    cout << "Rumus Luas lingkaran = PI * r * r" << endl;
    cout << "PI = " << PI << endl;
    cout << "r = " << r << endl;
    cout << "Luas = " << PI << " * " << r << " * " << r << endl;
    cout << "Hasil luas lingkaran = " << PI * r * r << endl;

    return 0;
}

