#include<iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
int main() {
	int x, y,i;
	vector<int> s;
	s.resize(12);
	s[0] = 0;
	s[1] = 31;
	s[2] = 29;
	s[3] = 31;
	s[4] = 30;
	s[5] = 31;
	s[6] = 30;
	s[7] = 31;
	s[8] = 31;
	s[9] = 30;
	s[10] = 31;
	s[11] = 30;
	while (cin >> x >> y) {
		if (x == 0)break;
		for (i = 0; i < x; i++) {
			y += s[i];
		}
	    if (y % 7 == 1) {
			cout << "Thursday" << endl;
		}
		else if (y % 7 == 2) {
			cout << "Friday" << endl;
		}
		else if (y % 7 == 3) {
			cout << "Saturday" << endl;
		}
		else if (y % 7 == 4) {
			cout << "Sunday" << endl;
		}
		else if (y % 7 == 5) {
			cout << "Monday" << endl;
		}
		else if (y % 7 == 6) {
			cout << "Tuesday" << endl;
		}
		else if (y % 7 == 0) {
			cout << "Wednesday" << endl;
		}
	}
	return 0;
}