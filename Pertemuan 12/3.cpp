#include <iostream>
using namespace std;

struct Mahasiswa{
	string nama;
	string kelas;
	int npm;
	float ipk;
}Helena, Anton;

int main(){
	Mahasiswa Fathur{"Fathur", "TI-25-PA", 252310040, 38.9};
	cout<<Fathur.nama;
	
//	return 0;
}

