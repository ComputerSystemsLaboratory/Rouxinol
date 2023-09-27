#include <algorithm>
#include <cctype>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const double PI = 3.1415926535;

class Dice {
private:
	void roll(int a, int b, int c, int d) {
		swap(x[a], x[b]);
		swap(x[b], x[d]);
		swap(x[c], x[d]);
	}
public:
	int x[6];
	void roll_N() { roll(0, 1, 4, 5); }
	void roll_E() { roll(0, 3, 2, 5); }
	void roll_S() { roll(0, 4, 1, 5); }
	void roll_W() { roll(0, 2, 3, 5); }
};

int main() {
	// 小数点以下12ケタを表示させるためのおまじない
	cout << fixed << setprecision(12);

	Dice die;
	for (int i = 0; i < 6; i++) {
		cin >> die.x[i];
	}
	char ch;
	while (cin >> ch) {
		if (ch == 'N') {
			die.roll_N();
		} else if (ch == 'E') {
			die.roll_E();
		} else if (ch == 'S') {
			die.roll_S();
		} else {
			die.roll_W();
		}
	}
	cout << die.x[0] << endl;
	return 0;
}

