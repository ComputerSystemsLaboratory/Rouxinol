#include <iostream>
using namespace std;

int a[10];

int main() {
	int T;
	cin >> T;
	while (T--) {
		bool ans = true;
		for (int i = 0; i < 10; ++i) {
			cin >> a[i];
		}
		int l, r;
		l = r = 0;
		for (int i = 0; i < 10; ++i) {
			if (a[i] > l) {
				l = a[i];
			} else if (a[i] > r) {
				r = a[i];
			} else {
				ans = false;
				break;
			}
		}
		cout << (ans ? "YES" : "NO") << endl;
	}
}