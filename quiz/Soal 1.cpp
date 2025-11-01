#include <iostream>
using namespace std;

int main () {
	int jumlah = 0;

	cout<<"10 deret bilangan genap =  ";
	
	
	for ( int i=2; i<=20; i+=2) {
		jumlah+= i;
	}
	
	cout << "2 + 4 + 6 + 8 + 10 + 12 + 14 + 16 + 18 +20 = "<< jumlah << endl;
	
	return 0;

}
