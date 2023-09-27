#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using pii = pair<int, int>;

const int MAX = 1000005;

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) break;
		vector<int> s(MAX);
		rep(i, n) {
			int h1, m1, s1;
			int h2, m2, s2;
			scanf("%d:%d:%d", &h1, &m1, &s1);
			scanf("%d:%d:%d", &h2, &m2, &s2);
			int t1 = h1 * 60 * 60 + m1 * 60 + s1;
			int t2 = h2 * 60 * 60 + m2 * 60 + s2;
			s[t1]++;
			s[t2]--;
		}
		rep(i, MAX) s[i + 1] += s[i];
		int mx = 0;
		rep(i, MAX) mx = max(mx, s[i]);
		cout << mx << endl;
	}
	return 0;
}
