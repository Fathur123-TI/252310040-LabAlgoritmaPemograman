#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah baris = ";
    cin >> n;

    int ukuran = 2 * n ;
    int abc = n ;

    for(int a = 1; a <= ukuran; a++){
        int jarakA = abs(abc - a);

        for(int b = 1; b <= ukuran; b++){
            int jarakB = abs(abc - b);

            if(jarakA + jarakB >= n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}


