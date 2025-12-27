#include <iostream>
using namespace std;

// Membuat struct buku
struct Buku {
    string judul;
    string penulis;
    string penerbit;
    int tahunTerbit;
};

int main() {
    Buku buku1, buku2;

    // Input data buku pertama
    cout << "Masukkan Data Buku 1\n";
    cout << "Judul        : ";
    getline(cin, buku1.judul);
    cout << "Penulis      : ";
    getline(cin, buku1.penulis);
    cout << "Penerbit     : ";
    getline(cin, buku1.penerbit);
    cout << "Tahun Terbit : ";
    cin >> buku1.tahunTerbit;
    cin.ignore();

    cout << "\n";

    // Input data buku kedua
    cout << "Masukkan Data Buku 2\n";
    cout << "Judul        : ";
    getline(cin, buku2.judul);
    cout << "Penulis      : ";
    getline(cin, buku2.penulis);
    cout << "Penerbit     : ";
    getline(cin, buku2.penerbit);
    cout << "Tahun Terbit : ";
    cin >> buku2.tahunTerbit;

    // Output data buku
    cout << "\n===== DATA BUKU =====\n";
    cout << "\nBuku 1\n";
    cout << "Judul        : " << buku1.judul << endl;
    cout << "Penulis      : " << buku1.penulis << endl;
    cout << "Penerbit     : " << buku1.penerbit << endl;
    cout << "Tahun Terbit : " << buku1.tahunTerbit << endl;

    cout << "\nBuku 2\n";
    cout << "Judul        : " << buku2.judul << endl;
    cout << "Penulis      : " << buku2.penulis << endl;
    cout << "Penerbit     : " << buku2.penerbit << endl;
    cout << "Tahun Terbit : " << buku2.tahunTerbit << endl;

    return 0;
}
