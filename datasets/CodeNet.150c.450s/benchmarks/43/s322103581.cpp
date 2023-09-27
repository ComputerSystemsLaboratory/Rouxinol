#include<iostream>

using namespace std;

int main() {

	int n;
	while (cin >> n) {
		if (n == 0) {
			break;
		}

		int point_a = 0;
		int point_b = 0;

		for (int i = 0; i < n; ++i) {
			int a, b;
			cin >> a >> b;
			if (a > b) {
				point_a += a + b;
			}
			else if (a < b) {
				point_b += a + b;
			}
			else {
				point_a += a;
				point_b += b;
			}
		}
		cout << point_a << " " << point_b << endl;
	}
	return 0;
}