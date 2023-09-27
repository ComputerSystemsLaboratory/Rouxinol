#include <iostream>
#include <string>

using namespace std;

string today[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

int main() {
	int month, day;
	long AA = 0, BB = 0, CC = 0, DD = 0;

	while (cin >> month >> day) {
		if (month == 0) {
			break;
		}

		AA = 2004;
		if (month < 3) {
			AA--;
			month += 13;
		}
		else {
			month++;
		}

		AA *= 365.25;
		BB = month * 30.6;
		CC = 2004 / 400;
		DD = 2004 / 100;

		AA = AA + BB + CC + day - DD - 429;
		BB = AA / 7;
		AA = AA - (BB * 7);

		cout << today[AA] << endl;
	}
	return 0;
}