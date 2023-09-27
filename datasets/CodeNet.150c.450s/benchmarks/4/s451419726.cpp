#include <iostream>
using namespace std;

char rankCheck(int m, int f, int r) {
	int total = m + f;
	if (m == -1 || f == -1 || total <30)
		return 'F';
	if (total >= 80)
		return 'A';
	if (total >= 65)
		return 'B';
	if (total >= 50 || r >= 50)
		return 'C';
	else
		return 'D';
}

int main() {
	int middle, fin, retest;
	while(true) {
		cin >> middle >> fin >> retest;
		if (middle == -1 && fin == -1 && retest == -1)
			break;
		cout << rankCheck(middle, fin, retest) << endl;
	}
	return 0;
}