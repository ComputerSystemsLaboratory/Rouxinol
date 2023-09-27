#include <iostream>
using namespace std;

const int MAX_N = 10000;
const int MAX_Q = 500;

int main() {
	int n, q, s[MAX_N], t, ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> t;
		for (int i = 0; i < n; i++) {
			if (t == s[i]) {
				ans++;
				break;
			}
		}
	}
	cout << ans << endl;
	return 0;
}