#include <iostream>
using namespace std;

struct Mahasiswa {
	string nama;
    float tugas;
    float praktikum;
    float uts;
    float uas;
    float rataRata;
    char nilaiHuruf;
};

int main() {
    Mahasiswa m;

	cout << "Masukkan nama Mahasiswa   : ";
	getline(cin, m.nama);
    
    cout << "Masukkan nilai Tugas      : ";
    cin >> m.tugas;
    cout << "Masukkan nilai Praktikum  : ";
    cin >> m.praktikum;
    cout << "Masukkan nilai UTS        : ";
    cin >> m.uts;
    cout << "Masukkan nilai UAS        : ";
    cin >> m.uas;

    
    m.rataRata = (m.tugas + m.praktikum + m.uts + m.uas) / 4;

    
    if (m.rataRata >= 90)
        m.nilaiHuruf = 'A';
    else if (m.rataRata >= 80)
        m.nilaiHuruf = 'B';
    else if (m.rataRata >= 70)
        m.nilaiHuruf = 'C';
    else if (m.rataRata >= 60)
        m.nilaiHuruf = 'D';
    else
        m.nilaiHuruf = 'E';

    
    cout << "\nRata-rata nilai fathurrohman : " << m.rataRata << endl;
    cout << "Nilai huruf    : " << m.nilaiHuruf << endl;

    return 0;
}

