#include <iostream>
using namespace std;

int main() {
    cout << "----------------------------------------" << endl;
    cout << "     PROGRAM : LUAS LINGKARAN" << endl;
    cout << "----------------------------------------" << endl;

    double jari, luas;
    const double PI = 3.14;

    cout << "Masukkan nilai jari-jari lingkaran : ";
    cin >> jari;

    luas = PI * jari * jari;

    cout << endl;
    cout << ">>> Rumus : L = p × r × r" << endl;
    cout << ">>> Nilai p (pi) = " << PI << endl;
    cout << ">>> Nilai jari-jari (r) = " << jari << endl;
    cout << ">>> Proses : " << PI << " × " << jari << " × " << jari << endl;
    cout << ">>> Luas Lingkaran = " << luas << endl;

    cout << "----------------------------------------" << endl;
    cout << "Program selesai dijalankan dengan sukses." << endl;

    return 0;
}
