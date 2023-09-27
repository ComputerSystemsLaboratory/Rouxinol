#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	for (;;) {
		int m, f, r;
		cin >> m >> f >> r;
		if (m == -1 && f == -1 && r == -1) {
			break;
		}
		int rate = m + f;
		if (m == -1 || f == -1) {
			cout << "F" << endl;
		}
		else if (rate >= 80) {
			cout << "A" << endl;
		}
		else if (rate >= 65) {
			cout << "B" << endl;
		}
		else if (rate >= 50) {
			cout << "C" << endl;
		}
		else if (rate >= 30) {
			if (r >= 50) {
				cout << "C" << endl;
			}
			else {
				cout << "D" << endl;
			}
		}
		else {
			cout << "F" << endl;
		}
	}
	return 0;
}