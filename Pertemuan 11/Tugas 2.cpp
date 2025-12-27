#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat;
    
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);
    
    cout << "Hasil setelah dibalik: ";

    int start = 0;

    for (int i = 0; i <= kalimat.length(); i++) {
        if (kalimat[i] == ' ' || i == kalimat.length()) {

            for (int j = i - 1; j >= start; j--) {
                cout << kalimat[j];
            }
            if (i < kalimat.length()) cout << " ";
            start = i + 1;
        }
    }

    return 0;
}

