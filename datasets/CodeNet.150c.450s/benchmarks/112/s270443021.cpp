//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0501
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	while (1) {
		int n; cin >> n;
		if (!n) break;
		map<char, bool> m1;
		map<char, char> m2;
		for (int i = 0; i < n;i++) {
			char c1, c2; cin >> c1 >> c2;
			m1[c1] = true;
			m2[c1] = c2;
		}
		int m; cin >> m;
		for (int i = 0; i < m;i++) {
			char c; cin >> c;
			if (m1[c]) { cout << m2[c]; continue; }
			else cout << c;
		}
		cout << endl;
	}
}