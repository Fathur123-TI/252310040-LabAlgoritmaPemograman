#include <iostream>
using namespace std;

int main() {
    char lagi;

    do {
        int n;
        long long hasil = 1;
        int i = 1;

        cout << "Masukkan bilangan: ";
        cin >> n;

        while(i <= n){
            hasil *= i;
            i++;
        }

        cout << "Hasil " << n << " ! = " << hasil << endl;
        cout << "Ulangi lagi? (y/n): ";
        cin >> lagi;
        cout << "--------------------------\n";

    } while(lagi == 'y' || lagi == 'Y');

    cout << "Selesai.\n";
    return 0;
}

