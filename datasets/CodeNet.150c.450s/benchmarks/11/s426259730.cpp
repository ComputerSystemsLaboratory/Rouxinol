#include <iostream>
using namespace std;

int main(void) {
	int card[4][13] = {0}, n, x, i, j;
	char c, ansc;
	cin >> n;
	while (n--) {
		cin >> c >> x;
		switch (c) {
		case 'S':
			card[0][x-1]++;
			break;
		case 'H':
			card[1][x-1]++;
			break;
		case 'C':
			card[2][x-1]++;
			break;
		case 'D':
			card[3][x-1]++;
			break;
		}
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 13; j++) {
			if (!card[i][j]) {
				switch (i) {
				case 0:
					ansc = 'S';
					break;
				case 1:
					ansc = 'H';
					break;
				case 2:
					ansc = 'C';
					break;
				case 3:
					ansc = 'D';
					break;
				}
				cout << ansc << ' ' << j + 1 << endl;
			}
		}
	}
	return 0;
}