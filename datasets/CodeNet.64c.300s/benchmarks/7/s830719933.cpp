#include <iostream>
using namespace std;

int main() {
	bool card[4][14] = { {0} };
	char a;
	int n=0,b=0,f=0;

	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a >> b;
		if (a == 'S') f = 0;
		if (a == 'H') f = 1;
		if (a == 'C') f = 2;
		if (a == 'D') f = 3;
		
		card[f][b] = 1;
	}

	for (int j = 0;j < 4 ;j++) {
		for (int k = 1;k <= 13;k++) {
			if (card[j][k] != 1) {
				if (j == 0) cout << "S " << k << endl;
				if (j == 1) cout << "H " << k << endl;
				if (j == 2) cout << "C " << k << endl;
				if (j == 3) cout << "D " << k << endl;
			}
		}
	}
}