#include <iostream>
using namespace std;

int main() {
    float r, t;
    const float PI = 3.14;

    cout << "=== Mencari Volume Tabung ===" << endl;
    cout << "Masukkan jari-jari : ";
    cin >> r;
    cout << "Masukkan tinggi : ";
    cin >> t;

    cout << "Rumus Volume = PI * r * r * t" << endl;
    cout << "PI = " << PI << endl;
    cout << "r = " << r << endl;
    cout << "Volume = " << PI << " * " << r << " * " << r << " * " << t << endl;
    cout << "Hasil volume tabung = " << PI * r * r * t << endl;

    return 0;
}

