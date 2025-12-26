#include <iostream>
using namespace std;

int main() {
    int banyakJenis;
    char jenis[10];
    int banyak[10], harga[10], jumlah[10];
    int total = 0;

    cout << "GEROBAK FRIED CHICKEN\n";
    cout << "===============================\n";
    cout << "Kode | Jenis Potong | Harga\n";
    cout << "===============================\n";
    cout << "D    | Dada         | 2500\n";
    cout << "P    | Paha         | 2000\n";
    cout << "S    | Sayap        | 1500\n";
    cout << "===============================\n\n";

    cout << "Banyak Jenis yang dibeli : ";
    cin >> banyakJenis;
    cout << endl;

    for (int i = 0; i < banyakJenis; i++) {
        cout << "Jenis ke-" << i + 1 << endl;
        cout << "Jenis Potong (D/P/S) : ";
        cin >> jenis[i];
        cout << "Banyak Potong        : ";
        cin >> banyak[i];

        if (jenis[i] == 'D' || jenis[i] == 'd')
            harga[i] = 2500;
        else if (jenis[i] == 'P' || jenis[i] == 'p')
            harga[i] = 2000;
        else if (jenis[i] == 'S' || jenis[i] == 's')
            harga[i] = 1500;
        else
            harga[i] = 0;

        jumlah[i] = harga[i] * banyak[i];
        total += jumlah[i];

        cout << endl;
    }

    int pajak = total * 10 / 100;
    int totalBayar = total + pajak;
    
    

    cout << "GEROBAK FRIED CHICKEN\n";
	cout << "--------------------------------------------------\n";
	cout << "No  Jenis  Harga   Banyak  Jumlah\n";
	cout << "--------------------------------------------------\n";

	for (int i = 0; i < banyakJenis; i++) {
    	cout << i + 1 << "   "
        	 << jenis[i] << "      "
        	 << harga[i] << "    "
        	 << banyak[i] << "       "
         	<< jumlah[i] << endl;
	}

	cout << "--------------------------------------------------\n";

    cout << "Jumlah Bayar : Rp. " << total << endl;
    cout << "Pajak 10%    : Rp. " << pajak << endl;
    cout << "Total Bayar  : Rp. " << totalBayar << endl;

    return 0;
}

