#include <iostream>

using namespace std;

int main() {

	int n, num;
	bool checker[4][13 + 1];//????????????????????¨??°??????????????????
	char gara;

	cin >> n;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 14; j++) {
			checker[i][j] = false;
		}
	}


	//??\???????¢????
	for (int i = 0; i < n; i++) {
		cin >> gara >> num;
		if (gara == 'S') {
			checker[0][num] = true;
		}
		else if (gara == 'H') {
			checker[1][num] = true;
		}
		else if (gara == 'C') {
			checker[2][num] = true;
		}
		else if (gara == 'D') {
			checker[3][num] = true;
		}
		//cout << "input " << gara << " " << num << endl;
	}

	/*
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 14; j++) {
			cout << "i= " << i << " j=" << j << " input=" << checker[i][j] << endl;
		}
	}
	*/

	//?¶????????????????????????????
	for (int i = 0; i < 4; i++) {
		for (int j = 1; j < 14; j++) {
			if (checker[i][j] == false) {
				char chara;
				if (i == 0) {
					chara = 'S';
				}
				else if (i == 1) {
					chara = 'H';
				}
				else if (i == 2) {
					chara = 'C';
				}
				else if (i == 3) {
					chara = 'D';
				}
				cout << chara << " " << j << endl;
			}
		}
	}

	return 0;

}