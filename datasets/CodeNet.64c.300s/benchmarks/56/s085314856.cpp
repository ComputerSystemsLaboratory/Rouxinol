#include <iostream>

using namespace std;

const int big_month = 20;
const int small_month = 19;
const int ordinal_year = big_month * 5 + small_month * 5;
const int special_year = big_month * 10;
const int three_years = ordinal_year * 2 + special_year;
const int millennium = three_years * 333 + 1;

int count_day_from_first(int y, int m, int d) {
	int day = 0;
	if (y % 3 == 0) {
		day += three_years * ((y-1) / 3);
		day += ordinal_year * ((y-1) % 3);
		day += big_month * (m-1);
		day += d;
	} else {
		day += three_years * ((y-1) / 3);
		day += ordinal_year * ((y-1) % 3);
		day += (big_month + small_month) * ((m-1) / 2);
		if ((m-1) % 2 == 1) {
			day += big_month;
		} 
		day += d;
	}
	return day;
}

int main() {
	int n; cin >> n;
//	cout << millennium << endl;
//	cout << three_years << endl;
	for (int i = 0; i < n; i++) {
		int y, m, d; cin >> y >> m >> d;
//		cout << count_day_from_first(y, m, d) << endl;
		cout << millennium - count_day_from_first(y, m, d) << endl;
	}
	return 0;
}

	