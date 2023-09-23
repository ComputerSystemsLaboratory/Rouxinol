#include <iostream>

using namespace std;

int main(void) {
	while (1) {
		int mid, fin, re;
		char record;
		cin >> mid >> fin >> re;
		if (mid == -1 && fin == -1 && re == -1) {
			break;
		}
		else if (mid == -1 || fin == -1) {
			record = 'F';
		}
		else if (mid + fin >= 80) {
			record = 'A';
		}
		else if (mid + fin >= 65) {
			record = 'B';
		}
		else if (mid + fin >= 50) {
			record = 'C';
		}
		else if (mid + fin >= 30) {
			if (re >= 50) {
				record = 'C';
			}
			else {
				record = 'D';
			}
		}
		else {
			record = 'F';
		}

		cout << record << "\n";
	}

	return 0;
}