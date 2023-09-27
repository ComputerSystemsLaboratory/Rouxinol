#include <iostream>
using namespace std;

int main() {
	int m, f, r;
	int i, t;
	for (i = 0;; i++) {
		cin >> m >> f >> r;
		t = m+f;
		if (m == -1 && f == -1 && r == -1) break;
		else if (m == -1 || f == -1) cout << 'F' << endl;
		else if (t >= 80) cout << 'A' << endl;
		else if (t >= 65) cout << 'B' << endl;
		else if (t >= 50) cout << 'C' << endl;
		else if (t >= 30) {
			if (r >= 50) cout << 'C' << endl;
			else cout << 'D' << endl;
		}
		else cout << 'F' << endl;
	}
	return 0;
}