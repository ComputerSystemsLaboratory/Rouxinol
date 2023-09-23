#include <iostream>
using namespace std;

int main(void){

	int m, f, r;

	while(true){
		cin >> m >> f >> r;

		if (m + f + r == -3){
			break;
		}
		else if (m == -1 || f == -1){
			cout << 'F' << endl;
		}
		else if (m + f >= 80){
			cout << 'A' << endl;
		}
		else if (65 <= m+f && m+f < 80){
			cout << 'B' << endl;
		}
		else if (50 <= m+f && m+f < 65){
			cout << 'C' << endl;
		}
		else if (30 <= m+f && m+f < 50){
			cout << (r >= 50 ? 'C' : 'D') << endl;
		}
		else if (m + f < 30){
			cout << 'F' << endl;
		}

	}
	return 0;
}