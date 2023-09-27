#include <iostream>
using namespace std;

int main(void){
	int x[3],temp;
	cin >> x[0] >> x[1] >> x[2];
	
	for (int i = 0; i < 3-1; i++){
		for (int j = 3-1; j>i; j--){
			if (x[j] <  x[j-1]){
				temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}
		}
	}

	cout << x[0] << " " << x[1] << " " << x[2] << "\n";

	return 0;
}