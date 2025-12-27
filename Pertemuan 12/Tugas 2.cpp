#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judul;
    string penulis;
    string penerbit;
    int tahun;
};

int main() {
    // Data buku (hard coded)
    Buku daftarBuku[] = {
        {"Keluarga Cemara", "Arswendo Atmowiloto", "Gramedia Pustaka Utama", 2017},
        {"Laskar Pelangi", "Andrea Hirata", "Bentang Pustaka", 2005},
        {"Negeri 5 Menara", "Ahmad Fuadi", "Gramedia", 2009},
        {"Dilan 1990", "Pidi Baiq", "Pastel Books", 2014},
    };

    int jumlahBuku = sizeof(daftarBuku) / sizeof(daftarBuku[0]);
    string judulCari;
    bool ditemukan = false;

    // Input judul yang dicari
    cout << "Masukkan judul buku yang dicari: ";
    getline(cin, judulCari);

    // Pencarian buku
    for (int i = 0; i < jumlahBuku; i++) {
        if (daftarBuku[i].judul == judulCari) {
            cout << "\nBuku ditemukan!\n";
            cout << "Judul   : " << daftarBuku[i].judul << endl;
            cout << "Penulis : " << daftarBuku[i].penulis << endl;
            cout << "Penerbit: " << daftarBuku[i].penerbit << endl;
            cout << "Tahun   : " << daftarBuku[i].tahun << endl;
            ditemukan = true;
            break;
        }
    }

    // Jika tidak ditemukan
    if (!ditemukan) {
        cout << "\nBuku tidak ditemukan." << endl;
    }

    return 0;
}

