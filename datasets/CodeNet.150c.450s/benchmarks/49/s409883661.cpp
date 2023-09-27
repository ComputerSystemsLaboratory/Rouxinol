#include <iostream>
#include <fstream>
using namespace std;

int main(){
int raw,j,a[100];
while (1) {
	//cout << "????????°?????\???" << endl;
	cin >> raw;
	if (raw == 0) { break;
	}
	else {
		//cout << "?????????????§?" << endl;

		for (j = 0; j < raw; j++) { cin >> a[j]; }
		int min = a[0], max = a[0];
		for (j = 0; j < raw; j++) {
			if (a[j] < min) { min = a[j]; }	
		if (a[j] > max) { max = a[j]; }
	}
	int sum = 0;
	for (j = 0; j < raw; j++) { sum = sum+a[j]; }
	cout << (sum - min - max) / (raw - 2)<<endl;
	}
}
return 0;}