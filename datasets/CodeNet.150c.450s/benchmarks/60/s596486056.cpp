#include <iostream>
#include <list>

#define rep(i, first, to) for(ll i = first; i < to; ++i)
#define REP(i, first, to) for(ll i = first; i <= to; ++i)

using namespace std;
typedef long long ll;

list<int> from[101];
int to[101][101];
int n;
void solve() {
	cin >> n;
	rep(i, 0, n) {
		int u, k;
		cin >> u >> k;
		rep(j, 0, k) {
			int value;
			cin >> value;
			from[u].push_back(value);
		}
	}
	REP(i, 1, n) {
		while(!from[i].empty()) {
			to[i][from[i].front()] = 1;
			from[i].pop_front();
		}
	}
	REP(i, 1, n) {
		REP(j, 1, n) {
			if (j == n) {
				cout << to[i][j] << endl;
			} else {
				cout << to[i][j] << " ";
			}
		}
	}
}

int main() {
	solve();
	return 0;
}