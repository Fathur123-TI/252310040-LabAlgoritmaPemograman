#include <iostream>
using namespace std;

int main() {
    string nama;
    float a, b, c, r;

    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    cout << "Nama Siswa : ";
    getline(cin, nama);
    cout << "Nilai Pertandingan I : "; cin >> a;
    cout << "Nilai Pertandingan II : "; cin >> b;
    cout << "Nilai Pertandingan III : "; cin >> c;

    r = (a + b + c) / 3;

    cout << "\nSiswa yang bernama " << nama << endl;
    cout << "Memperoleh nilai rata-rata " << r << " dari hasil perlombaan yang diikutinya" << endl;

    if (r >= 70) {
        if (r >= 85)
            cout << "Hadiah: Komputer Core i5" << endl;
        else
            cout << "Hadiah: Uang Rp 2.500.000" << endl;
    } else {
        cout << "Hadiah: Hiburan" << endl;
    }
    return 0;
}

