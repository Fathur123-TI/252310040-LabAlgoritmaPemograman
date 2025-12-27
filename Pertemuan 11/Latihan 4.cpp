#include <iostream>
using namespace std;

int main(){

    int ilham, amir, *raka;
    ilham = 75;
    amir = ilham;
    raka = &ilham;
    cout << "Nilai Ilham: " << ilham << endl;
    cout << "Nilai Amir: " << amir << endl;
    cout << "Alamat Ilham: " << &ilham << endl << endl;

    int yofrie = 93;
    int *hadriansyah;
    cout << "nilai awal yofrie = " << yofrie << endl;
    hadriansyah = &yofrie;
    cout << "Nilai hadriansyah sekarang = " << *hadriansyah << endl;
    *hadriansyah = 50;
    cout << "Nilai hadriansyah sekarang = " << *hadriansyah << endl << endl;

    int ilham2;
    int *raka2;
    int **amir2;
    int ***bob;

    ilham2 = 75;
    cout << "Nilai Ilham: " << ilham2 << endl;
    raka2 = &ilham2;
    amir2 = &raka2;
    bob = &amir2;

    cout << "Nilai Raka Mengakses Ilham = " << *raka2 << endl;
    cout << "Nilai Amir Mengakses Raka = " << **amir2 << endl;
    cout << "Nilai Bob Mengakses Amir = " << ***bob << endl;

    return 0;
}

