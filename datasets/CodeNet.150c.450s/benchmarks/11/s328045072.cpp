#include<iostream>
using namespace std;

int main() {
	int card[4][14] = { 0 }, n, number, collerint;
	char coller, coller2[4] = { 'S','H','C','D' };

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> coller >> number;
		switch (coller) {
		case 'S':collerint = 0;
			break;
		case 'H':collerint = 1;
			break;
		case 'C':collerint = 2;
			break;
		case 'D':collerint = 3;
			break;
		}
		card[collerint][number] = true;
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 1; j <= 13; j++) {
			if (card[i][j] == 0)
				cout << coller2[i] << ' ' << j << "\n";
		}
	}

	return 0;
}