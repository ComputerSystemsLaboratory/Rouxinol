#include <iostream>
#include <stdio.h>
using namespace std;

int main(void) {
	int m, f, r;
	char grade;
	while (1) {
		cin >> m >> f >> r;
		if (m == -1 && f == -1 && r == -1)
			break;

		if (m == -1 || f == -1) {
			grade = 'F';
			cout << grade << endl;
			continue;
		}
		if (m + f >= 80) {
			grade = 'A';
		} else if (m + f >= 65) {
			grade = 'B';
		} else if (m + f >= 50) {
			grade = 'C';
		} else if (m + f >= 30) {
			if (r >= 50) grade = 'C';
			else grade = 'D';
		} else
			grade = 'F';

		cout << grade << endl;
	}

	return 0;
}

