#include<iostream>

using namespace std;

int main() {
	int p1[10000], p2[10000], n, point1, point2, i;
	while (true) {
		point1 = 0;
		point2 = 0;
		cin >> n;
		if (n == 0) { break; }
		for (i = 0; i < n; i++) {
			cin >> p1[i] >> p2[i];
		}
		for (i = 0; i < n; i++) {
			if (p1[i] == p2[i]) {
				point1 += p1[i];
				point2 += p2[i];
			}
			else if (p1[i] > p2[i]) {
				point1 += p1[i] + p2[i];
			}
			else {
				point2 += p1[i] + p2[i];
			}
		}
		cout << point1 << ' ' << point2 << endl;
	}
	return 0;
}