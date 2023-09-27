#include<iostream>
#include<iomanip>
using namespace std;


int main() {
	int n;
	int card[4][14] = {0};
	cin >> n;
	for (int i = 0; i< n; i++) {
		char suit;
		int num;
		int suitn;
		cin >> suit >> num;
		switch (suit) {
		case 'S':
			suitn = 0;
			break;
		case 'H':
			suitn = 1;
			break;
		case 'C':
			suitn = 2;
			break;
		case 'D':
			suitn = 3;
			break;
		default:
			throw "input error";
		}
		card[suitn][num] = 1;
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 1; j <= 13; j++) {
		char suitc[4] = { 'S','H','C','D', };
			if (card[i][j] == 0) {
				cout << suitc[i] << ' ' << j << endl;
			}
		}
	}
	return 0;
}