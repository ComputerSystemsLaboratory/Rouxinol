#include <iostream>
using namespace std;

int main() {
	int n, pn, pnc=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> pn;
		if ((pn == 2)||(pn == 3))
			pnc += 1;
		else if (pn % 2 == 0) {}
		else {
			for (int j = 3; j <= pn/j; j += 2) {
				if (pn % j == 0) {
					pnc -= 1; 
					break;
				}
			}
			pnc += 1;
		}
	}	
	cout << pnc << endl;
	return 0;
}