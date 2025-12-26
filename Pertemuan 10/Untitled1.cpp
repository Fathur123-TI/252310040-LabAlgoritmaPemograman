#include <iostream>
using namespace std;

long long faktorial(int n) {
	long long hasil = 1;
    for(int i = 1; i <= n; i++) {
    	 hasil *= i;
    }
    return hasil;
}

int main() {
    int angka;

    cout << "Masukkan angka: ";
    cin >> angka;

    cout << "Faktorial dari " << angka << " adalah: " << faktorial(angka) << endl;

    return 0;
}
