#include <iostream>
using namespace std;

int main() {
	int n, x;
	cin >> n;
	for (int lop = 0; lop < n; lop++) {
		int a = 0, b = 0;
		bool f = true;
		for (int i = 0; i < 10; i++) {
			cin >> x;
			if (f) {
				if (a < x && b < x) {
					if (a < b) {
						b = x;
						continue;
					}
					a = x;
					continue;
				}
				if (a < x) {
					a = x;
					continue;
				}
				if (b < x) {
					b = x;
					continue;
				}
				f = false;
			}
		}
		if (f)
			cout << "YES\n";
		else
			cout << "NO\n";
		//cout << (f ? "YES\n" : "NO\n");
	}
	return 0;
}
