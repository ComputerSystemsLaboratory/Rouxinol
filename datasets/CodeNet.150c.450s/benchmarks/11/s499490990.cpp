#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, num;
	string s;
	int card[4][52];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			card[i][j] = 1;
		}
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s >> num;
		if (s == "S") {
			card[0][num - 1] = 0;
		} else if (s == "H") {
			card[1][num - 1] = 0;
		} else if (s == "C") {
			card[2][num - 1] = 0;
		} else if (s == "D") {
			card[3][num - 1] = 0;
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			if (i == 0 && card[i][j] == 1) {
			cout << "S " << j + 1 << endl;
			} else if (i == 1 && card[i][j] == 1) {
			cout << "H " << j + 1 << endl;
			} else if (i == 2 && card[i][j] == 1) {
			cout << "C " << j + 1 << endl;
			} else if (i == 3 && card[i][j] == 1) {
			cout << "D " << j + 1 << endl;
			}
		}
	}
	return 0;
}