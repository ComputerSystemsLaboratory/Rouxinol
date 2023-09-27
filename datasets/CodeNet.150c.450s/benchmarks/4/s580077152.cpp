#include <iostream>
using namespace std;

char grade(int, int, int);

int main() {
	int m, f, r;
	char X;

	while (1) {
		cin >> m >> f >> r;
		X = grade(m, f, r);

		if (X == 'x')
			break;

		cout << X << endl;
	}
	return 0;
}

char grade(int m, int f, int r) {
	if (m == -1 && f == -1 && r == -1)
		return 'x';

	if (m == -1 || f == -1)
		return 'F';
	else if (m + f >= 80)
		return 'A';
	else if (m + f >= 65)
		return 'B';
	else if (m + f >= 50)
		return 'C';
	else if (m + f >= 30) {
		if (r >= 50)
			return 'C';
		else
			return 'D';
	}
	else
		return'F';
}