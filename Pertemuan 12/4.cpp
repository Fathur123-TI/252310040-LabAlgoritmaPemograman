#include <iostream>
using namespace std;

struct Mahasiswa{
	string nama;
	string kelas;
	int npm;
	float ipk;
}Helena, Anton;

int main(){
	Mahasiswa TI[3];
	
	TI[0].nama = "Fathur";
	TI[0].npm = 252310041;
	
	TI[1].nama = "Fathir";
	TI[1].npm = 252310042;
	
	TI[2].nama = "Fathar";
	TI[2].npm = 252310043;
	
	for(int i = 0; i < 3; i++){
		cout<<TI[i].nama<<endl
			<<TI[i].npm<<endl<<endl;
}
return 0;
}
