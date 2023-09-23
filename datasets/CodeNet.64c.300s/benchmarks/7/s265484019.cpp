#include <iostream>

using namespace std;

int main() {
	int cards[4][13] = { 0 }, i, j, n, rank;
	char suit;
	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >> suit >> rank;
		switch (suit){
		case 'S':
			cards[0][rank - 1] = 1;
			break;
		case 'H':
			cards[1][rank - 1] = 1;
			break;
		case 'C':
			cards[2][rank - 1] = 1;
			break;
		case 'D':
			cards[3][rank - 1] = 1;
			break;
		}
	}
	for (i = 0; i <= 3; i++) {
		for (j = 0; j <= 12; j++) {
			if (cards[i][j] == 0) {
				if (i == 0) cout << 'S' << " " << j + 1;
				else if (i == 1) cout << 'H' << " " << j + 1;
				else if (i == 2) cout << 'C' << " " << j + 1;
				else            cout << 'D' << " " << j + 1;
				cout << endl;
			}
		}
	}
}