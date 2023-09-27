#include <iostream>
using namespace std;
void grade(char c) {
	cout << c << endl;
}
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int m, f, r;
	while (true) {
		cin >> m >> f >> r;
		if (m == -1 && f == -1 && r == -1) break;
		if (m == -1 || f == -1 || m + f < 30) { grade('F'); continue; }
		if (m + f >= 80) { grade('A'); continue; }
		if (m + f < 80 && m + f >= 65) { grade('B'); continue; }
		if (m + f < 65 && m + f >= 50) { grade('C'); continue; }
		if (r >= 50) { grade('C'); continue; }
		grade('D');
	}
}