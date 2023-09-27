#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		int r, l;
		r = l = 0;
		string s;
		int bb = 0;
		int ans = 0;
		for (int i = 0; i < n; i++) {
			cin >> s;
			if (s == "lu") {
				l++;
			}
			else if (s == "ru") {
				r++;
			}
			else if (s == "ld") {
				l--;
			}
			else {
				r--;
			}
			if (bb == 0 && l == 1 && r == 1) {
				ans++;
				bb = 1;
			} else if (bb == 1 && l == 0 && r == 0) {
				ans++;
				bb = 0;
			}

		}
		cout << ans << endl;
	}
	return 0;
}