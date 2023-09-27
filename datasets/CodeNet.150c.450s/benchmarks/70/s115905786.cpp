#include <iostream>
using namespace std;

int main() {
	int month, day; cin >> month >> day;
	while (month != 0 && day != 0) {
		if (month >= 1) day = day;
		if (month >= 2) day = day + 31;
		if (month >= 3) day = day + 29;
		if (month >= 4) day = day + 31;
		if (month >= 5) day = day + 30;
		if (month >= 6) day = day + 31;
		if (month >= 7) day = day + 30;
		if (month >= 8) day = day + 31;
		if (month >= 9) day = day + 31;
		if (month >= 10) day = day + 30;
		if (month >= 11) day = day + 31;
		if (month >= 12) day = day + 30;
		if (day % 7 == 0) cout << "Wednesday" << endl;
		if (day % 7 == 1) cout << "Thursday" << endl;
		if (day % 7 == 2) cout << "Friday" << endl;
		if (day % 7 == 3) cout << "Saturday" << endl;
		if (day % 7 == 4) cout << "Sunday" << endl;
		if (day % 7 == 5) cout << "Monday" << endl;
		if (day % 7 == 6) cout << "Tuesday" << endl;
		cin >> month >> day;
	}
	return 0;
}
