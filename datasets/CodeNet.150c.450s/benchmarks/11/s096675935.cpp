#include <iostream>

using namespace std;

int main()
{
	// if card[charactor][number] == 0 -> Missing Card.
	int card[4][13] = { 0 }, n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char charactor;
		int number;
		cin >> charactor >> number;
		switch (charactor) {
		case 'S':
			card[0][number - 1] = 1;
			break;
		case 'H':
			card[1][number - 1] = 1;
			break;
		case 'C':
			card[2][number - 1] = 1;
			break;
		case 'D':
			card[3][number - 1] = 1;
			break;
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			if (!card[i][j]) {
				switch (i) {
				case 0:
					cout << "S ";
					break;
				case 1:
					cout << "H ";
					break;
				case 2:
					cout << "C ";
					break;
				case 3:
					cout << "D ";
					break;
				}
				cout << j + 1 << endl;
			}
		}
	}
}