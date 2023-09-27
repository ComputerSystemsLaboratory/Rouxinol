#include<iostream>
using namespace std;
void write(char);

int main() {
	int m, f, r, sum;

	while (true) {
		cin >> m >> f >> r;
		if (m == -1 && f == -1 && r == -1) break;
		sum = m + f;
		if (m == -1 || f == -1)	write('F');
		else if (sum >= 80)	write('A');
		else if (sum >= 65)	write('B');
		else if (sum >= 50)	write('C');
		else if (sum >= 30) {
			if (r >= 50)	write('C');
			else write('D');
		}
		else write('F');
	}

	return 0;
}

void write(char c) {
	cout << c << endl;
}