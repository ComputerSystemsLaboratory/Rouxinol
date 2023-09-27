#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); ++i)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) for(int i = (n) - 1; (i) >= 0; --i)
#define SZ(n) (int)(n).size()
#define ALL(n) (n).begin(), (n).end()
#define MOD LL(1e9 + 7)
#define INF 1000000
using namespace std;
using LL = long long;


int main() {
	string s;
	while (cin >> s) {
		if (s == "-") break;
		int m;
		cin >> m;
		int h;
		queue<char> q;
		for (auto & e : s) {
			q.push(e);
		}
		for (int i = 0; i < m; i++) {
			cin >> h;
			for (int j = 0; j < h; j++) {
				char c = q.front(); q.pop();
				q.push(c);
			}

		}
		while (!q.empty()) {
			cout << q.front();
			q.pop();
		}
		cout << endl;
	}
	return 0;
}

