#include<iostream>

using namespace std;


bool Card[4][13];

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		char Picture;
		int Num;

		cin >> Picture >> Num;
		Num--;

		switch (Picture) {
		case'S':
			Card[0][Num] = true;
			break;
		case'H':
			Card[1][Num] = true;
			break;
		case'C':
			Card[2][Num] = true;
			break;
		case'D':
			Card[3][Num] = true;
			break;
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			if (!Card[i][j]) {
				switch (i) {
				case 0:
					cout << "S";
					break;
				case 1:
					cout << "H";
					break;
				case 2:
					cout << "C";
					break;
				case 3:
					cout << "D";
					break;
				}
				cout << " " << j + 1 << endl;
			}
		}
	}

	return 0;
}