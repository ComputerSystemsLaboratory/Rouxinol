#include <iostream>
using namespace std;

int calendar[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
	int month, day;
	while (1) {
		int sum = 0;
		cin >> month >> day;
		if (month == 0) break;
		for (int i = 0; i < month - 1; i++) {
			sum += calendar[i];
		}
		sum += day;
		if (sum % 7 == 0) cout << "Wednesday" << endl;
		if (sum % 7 == 1) cout << "Thursday" << endl;
		if (sum % 7 == 2) cout << "Friday" << endl;
		if (sum % 7 == 3) cout << "Saturday" << endl;
		if (sum % 7 == 4) cout << "Sunday" << endl;
		if (sum % 7 == 5) cout << "Monday" << endl;
		if (sum % 7 == 6) cout << "Tuesday" << endl;
	}
	return 0;
}
