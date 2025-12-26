#include <iostream>
using namespace std;


float konversi(int pilihan, float suhu) {
    float hasil;

    switch (pilihan) {
        case 1: hasil = (suhu - 32) * 5 / 9; break;          
        case 2: hasil = suhu - 273; break;                  
        case 3: hasil = suhu * 5 / 4; break;                
        case 4: hasil = (suhu * 9 / 5) + 32; break;          
        case 5: hasil = (suhu - 273) * 9 / 5 + 32; break;   
        case 6: hasil = (suhu * 9 / 4) + 32; break;         
        case 7: hasil = suhu * 4 / 5; break;                
        case 8: hasil = (suhu - 32) * 4 / 9; break;         
        case 9: hasil = (suhu - 273) * 4 / 5; break;        
        case 10: hasil = suhu + 273; break;                 
        case 11: hasil = (suhu - 32) * 5 / 9 + 273; break;  
        case 12: hasil = (suhu * 5 / 4) + 273; break;       
        default: hasil = 0;
    }

    return hasil;
}

int main() {
    int pilih;
    float suhu;

    cout << "=== PROGRAM KONVERSI SUHU ===\n";
    cout << "1. Fahrenheit -> Celcius\n";
    cout << "2. Kelvin -> Celcius\n";
    cout << "3. Reamur -> Celcius\n";
    cout << "4. Celcius -> Fahrenheit\n";
    cout << "5. Kelvin -> Fahrenheit\n";
    cout << "6. Reamur -> Fahrenheit\n";
    cout << "7. Celcius -> Reamur\n";
    cout << "8. Fahrenheit -> Reamur\n";
    cout << "9. Kelvin -> Reamur\n";
    cout << "10. Celcius -> Kelvin\n";
    cout << "11. Fahrenheit -> Kelvin\n";
    cout << "12. Reamur -> Kelvin\n";

    cout << "\nPilih menu (1-12): ";
    cin >> pilih;

    cout << "Masukkan nilai suhu: ";
    cin >> suhu;

    float hasil = konversi(pilih, suhu);

    cout << "Hasil konversi suhu = " << hasil << endl;

    return 0;
}

