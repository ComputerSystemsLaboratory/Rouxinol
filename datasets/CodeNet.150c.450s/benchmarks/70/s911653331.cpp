#include "bits/stdc++.h"
using namespace std;
int main() {
	int m, d;
	int dd[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
	string Mon[7] = { "Monday","Tuesday" , "Wednesday" , "Thursday" , "Friday", "Saturday", "Sunday" };
	while (cin >> m >> d) {
		int day = 2;
		if (m == 0 && d == 0) break;
		for (int i = 1; i < m;i++) {
			day += dd[i];
		}
		day += d;
		day %= 7;
		cout << Mon[day] << endl;
	}
}