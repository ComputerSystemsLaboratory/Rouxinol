#include <iostream>
using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_A



int main() {
	int n, m;
	cin >> n;
	int s[n];
	for (int i = 0; i < n; i++) cin >> s[i];
	cin >> m;
	int t[m];
	for (int i = 0; i < m; i++) cin >> t[i];
	
	int ans = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (t[i] == s[j]) {
				ans++;
				break;
			}
		}
	}
	
	cout << ans << endl;
	return 0;
}