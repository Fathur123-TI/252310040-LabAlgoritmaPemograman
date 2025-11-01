#include <iostream>
using namespace std;

int main() {
    int n;
    bool prima = true;

    cout << "Masukkan bilangan: ";
    cin >> n;

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            prima = false;
            break;
        }
    }

    if(n <= 1)
        prima = false;

    if(prima)
        cout << "Termasuk bilangan prima";
    else
        cout << "Bukan termasuk bilangan prima";

    return 0;
}

