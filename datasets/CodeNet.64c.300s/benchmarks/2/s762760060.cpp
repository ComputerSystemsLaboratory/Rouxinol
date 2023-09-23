#include <iostream>
using namespace std;

int main(){
	int m, f, r;
	for (;;){
		cin >> m >> f >> r;
		if (m == -1 && r == -1 && f == -1)
			break;

		if (m + f < 30||m==-1||f==-1){
			cout << "F"<<endl;
		}
		else if (m + f >= 80){
			cout << "A" << endl;
		}
		else if (m + f < 80 && m + f >= 65){
			cout << "B" << endl;
		}
		else if ((m + f >= 30 && m + f < 50 && r >= 50)||m+f>=50&&m+f<65){
			cout << "C" << endl;
		}
		else{
			cout << "D" << endl;
		}
	
	
	}

	return 0;
}