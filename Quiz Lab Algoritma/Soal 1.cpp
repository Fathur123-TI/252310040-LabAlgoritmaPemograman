#include <iostream>
using namespace std;

int main(){
cout << "Nama\tNPM" << endl;

	string data [3][2] = {
	{"Helena",  "252310040"},
	{"Joshua",  "252310041"},
	{"Antoni",  "252310042"}
};

	
	for(int i = 0; i < 3; i++){
		cout << data[i][0] << "\t" << data [i][1] << endl;
}
return 0;
}
