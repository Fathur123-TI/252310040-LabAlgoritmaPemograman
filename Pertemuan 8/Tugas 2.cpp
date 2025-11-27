#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, hasil = "";

    cout << "Masukkan kalimat: ";
    getline(cin, input);

    // Membalik seluruh string dan huruf
    for (int i = input.length() - 1; i >= 0; i--) {
        char c = input[i];

        if (isupper(c))
            c = tolower(c);
        else if (islower(c))
            c = toupper(c);

        hasil += c;
    }

    cout << "Hasil akhir = " << hasil << endl;

    return 0;
}


