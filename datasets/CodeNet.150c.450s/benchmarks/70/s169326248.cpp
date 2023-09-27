#include <iostream>
using namespace std;

const int t[14] = {0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335};

int main(void) {
	int m, d, a;

	while (cin >> m >> d, m) {
		a = (t[m-1] + d) % 7;
		if (a == 0) cout << "Wednesday";
		else if (a == 1) cout << "Thursday";
		else if (a == 2) cout << "Friday";
		else if (a == 3) cout << "Saturday";
		else if (a == 4) cout << "Sunday";
		else if (a == 5) cout << "Monday";
		else cout << "Tuesday";
		cout << endl;
	}

	return 0;
}