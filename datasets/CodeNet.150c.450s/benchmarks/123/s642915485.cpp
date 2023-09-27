#include <iostream>
using namespace std;
#include <cmath>

int main(void){

	int n;
	cin >> n;

	int count = 0;

	for (int i = 0; i < n; i++){

		int m;
		cin >> m;
		if (m == 2) count++;
		else if(m % 2 == 1){
			bool flg = true;
			for (int j = 3; j <= (int)sqrt(m); j += 2){
				if (m % j == 0){
					flg = false;
					break;
				}
			}
			if (flg) count++;
		}
	}

	cout << count << endl;
}