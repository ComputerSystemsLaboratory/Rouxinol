#include <iostream>
using namespace std;

int main() {
	bool card[4][13] = { false };
	int n, temp, s;
	char d, design[] = { 'S', 'H', 'C', 'D' };

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> d >> temp;
		for (int j = 0; j < 4; j++) {
			if (d == design[j]) {
				s = j;
				break;
			}
		}
		card[s][temp - 1] = true;
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			if (card[i][j] == false) {
				cout << design[i] << ' ' << j + 1 << endl;
			}
		}
	}
}