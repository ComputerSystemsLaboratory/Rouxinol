#include <iostream>

using namespace std;

int main() {

	int n, number, suitnumber;
	char suit, outputsuit;
	bool card[4][13] = {0};
	

	cin >> n;

	for (int i = 0; i < n; i++) {

		cin >> suit >> number;

		if (suit == 'S') {
			suitnumber = 0;
		}
		else if (suit == 'H') {
			suitnumber = 1;
		}
		else if (suit == 'C') {
			suitnumber = 2;
		}
		else {
			suitnumber = 3;
		}

		card[suitnumber][number - 1] = true;

	}

	for (int j = 0; j < 4;j++) {//絵柄分

		for (int k = 0; k < 13;k++) {

			if (card[j][k] == false) {

				if (j == 0) {
					outputsuit = 'S';
				}
				else if (j == 1) {
					outputsuit = 'H';
				}
				else if (j == 2) {
					outputsuit = 'C';
				}
				else {
					outputsuit = 'D';
				}

				cout << outputsuit << ' ' << k + 1 << endl;
			}
		}

	}

	//cin >> /*変数他*/;
	//cout << /*文字列*/ << endl;
	return 0;
}
