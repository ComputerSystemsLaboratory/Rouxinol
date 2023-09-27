#include <iostream>
using namespace std;

int howmany(int);

int main() {
	int month, day, mod;
	

	while (cin >> month >> day) {
		if (month == 0) break;
		int total = 0;

		for (int i = 1;i < month; i++) {
			total += howmany(i);
		}
		total += day;
		mod = total % 7;

		switch (mod) {
		case 0:
			cout << "Wednesday" << endl;
			break;
		case 1:
			cout << "Thursday" << endl;
			break;
		case 2:
			cout << "Friday" << endl;
			break;
		case 3:
			cout << "Saturday" << endl;
			break;
		case 4:
			cout << "Sunday" << endl;
			break;
		case 5:
			cout << "Monday" << endl;
			break;
		case 6:
			cout << "Tuesday" << endl;
			break;
		default:
			break;
		}
	}

	return 0;
}

int howmany(int month) {
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		return 31;
	}
	else if (month == 2) {
		return 29;
	}
	else {
		return 30;
	}
}