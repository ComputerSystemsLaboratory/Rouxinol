#include<iostream>
using namespace std;

int main() {
	int m, f, r;
	while (1) {
		cin >> m >> f >> r;
		if (m == -1 && f == -1 && r == -1)break;
		int total = m + f;
		if (m == -1 || f == -1) cout << 'F' << endl;
		else {
			if (total >= 80) cout << 'A' << endl;
			else if (total < 80 && total >= 65) cout << 'B' << endl;
			else if (total < 65 && total >= 50) cout << 'C' << endl;
			else if (total < 50 && total >= 30) {
				if (r >= 50) cout << 'C' << endl;
				else cout << 'D' << endl;
			}
			else if (total < 30) cout << 'F' << endl;
		}

	}

	return 0;
}