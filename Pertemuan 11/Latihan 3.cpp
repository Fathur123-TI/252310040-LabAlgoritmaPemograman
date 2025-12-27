#include <iostream>
#include <math.h>
using namespace std;

void pangkatTiga(int *angka) {
    *angka = pow (*angka, 3); 
}

int main() {
    int angka;

    cout << "Masukkan angka: ";
    cin >> angka;

    pangkatTiga(&angka);  

    cout << "Angka setelah pangkat 3: " << angka << endl;

    return 0;
}
