#include <iostream>             // Library untuk menampilkan dan mengambil input (cout,endl)
using namespace std;            // Agar tidak perlu menulis std :: di setiap penggunaan cout

int main () {
	// inisialisasi variabel
	int x = 50;                 // Nilai awal x
	int a,b,c,d,e;             // Variabel untuk menyimpan hasil logika
	
	// Proses Logika
	a = x > 5 + 5;              // Mengecek apakah x lebih besar dari 10, jika benar hasilnya 1, jika salah hasilnya 0
	
	b = x > 100;                // Mengecek apakah x lebih besar dari 100, jika benar hasilnya 1, jika salah hasilnya 0
	
	c = a && b;                 // AND: hasilnya 1 jika a dan b sama-sama 1, jika salah satu 0 maka hasilnya 0
	
	d = a || b;                 // OR: hasilnya 1 jika salah satu dari a atau b bernilai 1
	
	e = ! (c);                  // NOT: membalik nilai c (jika c = 0 maka hasilnya 1, jika c = 1 maka hasilnya 0)
	
	// Output berupa 1 (benar) dan 0 (salah) Hasil
	cout<<"\nNilai a = x > 5 + 5 = "<<a<<endl;       // Menampilkan hasil dari a
	cout<<"\nNilai b = x > 100 = "<<b<<endl;         // Menampilkan hasil dari b
	cout<<"\nNilai c = a && b = "<<c<<endl;          // Menampilkan hasil dari c
	cout<<"\nNilai d = a || b = "<<d<<endl;          // Menampilkan hasil dari d
	cout<<"\nNilai e = ! (c) = "<<e<<endl;           // Menampilkan hasil dari e
	
	getchar();                 // Menahan program agar tidak langsung tertutup, menunggu input dari keyboard
}

