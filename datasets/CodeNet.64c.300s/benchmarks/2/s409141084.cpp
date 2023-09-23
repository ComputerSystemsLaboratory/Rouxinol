#include<iostream>
using namespace std;

int main() {
	int m, f, r, sum;
	char grade;
	while (1) {
		cin >> m >> f >> r;
		if (m == -1 && f == -1 && r == -1)break;
		sum = m + f;
		if (m == -1 || f == -1 || sum < 30)grade = 'F';
		else if (sum >= 80)grade = 'A';
		else if (sum >= 65)grade = 'B';
		else if (sum >= 50 || r >= 50)grade = 'C';
		else grade = 'D';
		cout << grade << endl;
	}
	return 0;
}