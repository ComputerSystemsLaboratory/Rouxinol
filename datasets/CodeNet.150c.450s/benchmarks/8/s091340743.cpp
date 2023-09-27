#include <iostream>

using namespace std;

int main() {
	int n, p1 = 0, p2 = 0;
	string t1, t2;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t1 >> t2;
		if (t1 > t2) {
			p1 += 3;
		}
		else if (t1 < t2) {
			p2 += 3;
		}
		else {
			p1 += 1;
			p2 += 1;
		}
	}
	cout << p1 << " " << p2 << endl;
	return 0;
}