#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

	int m, f, r;
	char score;

	while (true) {

		cin >> m >> f >> r;

		if (m == -1&&f == -1&&r == -1) {
			break;
		}
		else if ((m == -1 || f == -1)|| m + f < 30) {
			score = 'F';
		}
		else if (m + f < 50&&!(r >= 50)) {
			score = 'D';
		}
		else if ((m + f < 50 && r >= 50) || m + f < 65) {
			score = 'C';
		}
		else if (m + f <80) {
			score = 'B';
		}else {
			score = 'A';
		}
		cout << score << endl;
	}

	//cin >> /*変数他*/;
	//cout << /*文字列*/ << endl;
	return 0;
}
