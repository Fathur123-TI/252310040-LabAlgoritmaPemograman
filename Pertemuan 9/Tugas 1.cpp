#include <iostream>
using namespace std;

int main() {
    int baris, kolom;
    int a[100][100], b[100][100];
    int tambah[100][100], kurang[100][100], kali[100][100];

    cout << "=====================================\n";
    cout << "     PROGRAM PERHITUNGAN MATRIKS     \n";
    cout << "=====================================\n\n";

    cout << "Masukkan jumlah baris (1 - 100): ";
    cin >> baris;
    cout << "Masukkan jumlah kolom (1 - 100): ";
    cin >> kolom;

    cout << "\nMasukkan elemen matriks pertama:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Matriks a[" << i+1 << "][" << j+1 << "] = ";
            cin >> a[i][j];
        }
    }

    cout << "\nMasukkan elemen matriks kedua:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Matriks b[" << i+1 << "][" << j+1 << "] = ";
            cin >> b[i][j];
        }
    }

    // Penjumlahan, Pengurangan, Perkalian elemen
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            tambah[i][j] = a[i][j] + b[i][j];
            kurang[i][j] = a[i][j] - b[i][j];
            kali[i][j]   = a[i][j] * b[i][j];
        }
    }

    cout << "\nHasil Penjumlahan Matriks:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << tambah[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nHasil Pengurangan Matriks:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << kurang[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nHasil Perkalian Matriks:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << kali[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

