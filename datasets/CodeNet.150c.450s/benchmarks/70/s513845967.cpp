#include<iostream>

using namespace std;

int main() {
	int mon, date;
	while (cin >> mon >> date) {
		if (mon == 0) {
			break;
		}
	int year = 2004, tmp;
		if (0 < mon && mon <= 2) {
			year -= 1;
			mon += 12;
		}
		tmp = year;
		tmp += int(year / 4);
		tmp -= int(year / 100);
		tmp += int(year / 400);
		tmp += int((mon * 13 + 8) / 5);
		tmp += date;
		tmp %= 7;
		if (tmp == 0) {
			cout << "Sunday" << endl;
		}
		if (tmp == 1) {
			cout << "Monday" << endl;
		}
		if (tmp == 2) {
			cout << "Tuesday" << endl;
		}
		if (tmp == 3) {
			cout << "Wednesday" << endl;
		}
		if (tmp == 4) {
			cout << "Thursday" << endl;
		}
		if (tmp == 5) {
			cout << "Friday" << endl;
		}
		if (tmp == 6) {
			cout << "Saturday" << endl;
		}




	}
}
