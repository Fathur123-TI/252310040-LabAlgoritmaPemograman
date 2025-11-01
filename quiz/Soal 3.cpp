#include <iostream>
using namespace std;

int main () {
	int nilai [5];
	int rata_rata, tertinggi, terendah;
	
	cout << "Nilai ujian 5 mahasiswa: " << endl ;
		for (int i = 0; i < 5; i++) {
		cout << "Nilai ke-" << i + 1 << ": ";
		cin >> nilai[i];
	}
	
	tertinggi = nilai[0];
	terendah = nilai[0];
	
	for (int i = 1; i < 5; i++) {
		if (nilai[i] > tertinggi)
			tertinggi = nilai[i];
		if (nilai[i] < terendah)
			terendah = nilai[i];
		if (nilai[i] < rata_rata)
			rata_rata = nilai[i];
	}
	
	cout <<"\nNilai tertinggi = " << tertinggi << endl;
	cout << "Nilai terendah = " << terendah << endl;
	cout << "Nilai rata-rata = " << rata_rata << endl;
	
}
