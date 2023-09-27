#include<iostream>
using namespace std;
int main() {
	int cards[4][13]={0};
	int num, i, x, y;
	char ch;
	cin >> num;
	for (i = 0; i < num; i++) {
		cin >> ch >> y;
		if (ch == 'S') x = 0;
		else if (ch == 'H') x = 1;
		else if (ch == 'C') x = 2;
		else x = 3;
		cards[x][y - 1] = 1;
	}
	int j, k;
	for (j = 0; j < 4; j++) {
		for (k = 0; k < 13; k++) {
			if (cards[j][k] != 1) {
				if (j == 0) cout << "S " << k + 1 << endl;
				else if (j == 1) cout << "H " << k + 1 << endl;
				else if (j == 2) cout << "C " << k + 1 << endl;
				else cout << "D " << k + 1 << endl;
			}
		}
	}
	return 0;
}

