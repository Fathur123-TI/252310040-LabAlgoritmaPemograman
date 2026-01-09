#include <iostream>
using namespace std;

struct Pegawai {
    string nama;
    string jabatan;
    int gaji;
};

int main() {
    Pegawai pegawai;
    int umr;

    cout << "=== Input Data Pegawai ===" << endl;
    cout << "Nama Pegawai   : ";
    getline(cin, pegawai.nama);

    cout << "Jabatan        : ";
    getline(cin, pegawai.jabatan);

    cout << "Gaji           : ";
    cin >> pegawai.gaji;

    cout << "UMR Daerah     : ";
    cin >> umr;

    cout << "\n=== Data Pegawai ===" << endl;
    cout << "Nama    : " << pegawai.nama << endl;
    cout << "Jabatan : " << pegawai.jabatan << endl;
    cout << "Gaji    : " << pegawai.gaji << endl;

    if (pegawai.gaji >= umr) {
        cout << "Keterangan : Gaji pegawai di atas UMR" << endl;
    } else {
        cout << "Keterangan : Gaji pegawai di bawah UMR" << endl;
    }

    return 0;
}

