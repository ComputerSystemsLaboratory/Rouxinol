#include <iostream>
using namespace std;

int main() {
	int m,f,r;
	char grade;
	while (cin >> m >> f >> r) {
		if (m == -1 && f == -1 && r == -1) {
			break;
		} else if (m == -1 || f == -1) {
			grade = 'F';
		} else {
			int total = m + f;
			if (total >= 80) {
				grade = 'A';
			} else if (total < 80 && total >= 65) {
				grade = 'B';
			} else if (total < 65 && total >= 50) {
				grade = 'C';
			} else if (total < 50 && total >= 30) {
				grade = r >= 50 ? 'C' : 'D';
			} else {
				grade = 'F';
			}
		}
		cout << grade << endl;
	}
}