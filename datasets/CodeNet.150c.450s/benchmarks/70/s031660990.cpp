# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <set>
# include <cmath>
# include <iomanip>
# include <functional>
# include <utility>
using namespace std;

int main() {
	int m, d;
	while (cin >> m >> d&&m != 0 && d != 0) {
		int sum = 0;
		for (int i = 1; i < m; i++) {
			if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
				sum += 31;
			}
			else if (i == 2) {
				sum += 29;
			}
			else {
				sum += 30;
			}
		}
		sum += d;
		if (sum % 7 == 1) {
			cout << "Thursday" << endl;
		}
		else if (sum % 7 == 2) {
			cout << "Friday" << endl;
		}
		else if (sum % 7 == 3) {
			cout << "Saturday" << endl;
		}
		else if (sum % 7 == 4) {
			cout << "Sunday" << endl;
		}
		else if (sum % 7 == 5) {
			cout << "Monday" << endl;
		}
		else if (sum % 7 == 6) {
			cout << "Tuesday" << endl;
		}
		else {
			cout << "Wednesday" << endl;
		}
	}
}