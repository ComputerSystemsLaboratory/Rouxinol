#include <iostream>
using namespace std;
int main() {
	int n, i, j, num;
	char mark, markList[4] = { 'S','H','C','D' };
	bool card[4][13];
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 13; j++) {
			card[i][j] = true;
		}
	}
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> mark >> num;
		switch (mark) {
			case 'S':
				card[0][num - 1] = false;
				break;
			case 'H':
				card[1][num - 1] = false;
				break;
			case 'C':
				card[2][num - 1] = false;
				break;
			case 'D':
				card[3][num - 1] = false;
				break;
		}
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 13; j++) {
			if (card[i][j]) {
				cout << markList[i] << ' ' << j+1 << endl;
			}
		}
	}
}