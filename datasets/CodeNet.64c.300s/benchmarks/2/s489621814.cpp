#include<iostream>

using namespace std;


int main() {
	int m, f, r;

	while(true) {
		cin >> m >> f >> r;

		if ((m == -1 && f == -1) && r == -1)break;

		if (m == -1 || f == -1) {
			cout << "F" << endl;
			continue;
		}

		if (m + f < 30) {
			cout << "F" << endl;
			continue;
		}
		if (30 <= m + f&&m + f < 50) {
			cout << (r < 50 ? "D" : "C") << endl;
			continue;
		}
		if (50 <= m + f&&m + f < 65) {
			cout << "C" << endl;
			continue;
		}
		if (65 <= m + f&&m + f < 80) {
			cout << "B" << endl;
			continue;
		}
		if (80 <= m + f) {
			cout << "A" << endl;
			continue;
		}
	}

	return 0;
}