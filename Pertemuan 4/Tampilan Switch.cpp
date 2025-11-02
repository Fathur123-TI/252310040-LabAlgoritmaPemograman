#include <iostream>
using namespace std;

int main() {
    string nama;
    float a, b, c, r;
    int kategori;

    cout << "Program Hitung Nilai Rata-Rata\n";
    cout << "Nama Siswa : ";
    getline(cin, nama);
    cout << "Nilai Pertandingan I : "; cin >> a;
    cout << "Nilai Pertandingan II : "; cin >> b;
    cout << "Nilai Pertandingan III : "; cin >> c;

    r = (a + b + c) / 3;
    kategori = (int)(r / 10); 

    cout << "\nSiswa yang bernama " << nama << endl;
    cout << "Memperoleh nilai rata-rata " << r << " dari hasil perlombaan yang diikutinya" << endl;

    switch (kategori) {
        case 10:
        case 9:
            cout << "Hadiah: Komputer Core i5" << endl;
            break;
        case 8:
        case 7:
            cout << "Hadiah: Uang sebesar Rp 2.500.000" << endl;
            break;
        default:
            cout << "Hadiah: Hiburan" << endl;
    }
    return 0;
}

