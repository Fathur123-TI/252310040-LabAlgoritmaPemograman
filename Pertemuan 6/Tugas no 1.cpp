#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int a, b;
    char lagi;
    do {
        cout << "Masukkan bilangan: ";
        cin >> a;
        b = a % 2;
        cout << "Nilai " << a << " % 2 = " << b << endl;

        cout << "Ingin hitung lagi [Y/T]: ";
        lagi = getche();
        cout << endl;

    } while (lagi == 'Y' || lagi == 'y');

    return 0;
}

