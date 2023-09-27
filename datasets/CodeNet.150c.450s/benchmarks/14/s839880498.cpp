#include<iostream>
using namespace std;

int i = 1, x, n;

void checknum();
void include3();
void endchecknum();

int main() {
	cin >> n;
	checknum();
	return 0;
}

void checknum() {
	x = i;
	if (x % 3 == 0) {
		cout << " " << i;
		endchecknum();
	} else {
		include3();
	}
}

void include3() {
	if (x % 10 == 3) {
		cout << " " << i;
		endchecknum();
	} else {
		x /= 10;
		if (x) {
			include3();
		} else {
			endchecknum();
		}
	}
}

void endchecknum() {
	if (++i <= n) {
		checknum();
	} else {
		cout << endl;
		return;
	}
}