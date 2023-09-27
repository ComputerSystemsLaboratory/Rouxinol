#include<bits/stdc++.h>
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

#define FOR(i,a,b) for (int i = a; i < b; ++i)
#define FORR(i,a,b) for (int i = b - 1; i >= a; --i)
#define REP(i,n) FOR(i,0,n)
#define REPR(i,n) FORR(i,0,n)

//#define DEBUG_MODE


int main() {
	int N, M;
	cin >> N >> M;

	vector<vector<int>> conn(N+1, vector<int>(0));
	REP(i, M) {
		ll A, B;
		cin >> A >> B;
		conn[A].push_back(B);
		conn[B].push_back(A);
	}

#ifdef DEBUG_MODE
	FOR(i, 1, N+1) {
		cout << i << ": ";
		REP(j, conn[i].size()) {
			cout << conn[i][j] << " ";
		}
		cout << endl;
	}
#endif

	vector<int> ans(N+1, 0);
	queue<int> search_list;

	REP(i, conn[1].size()) {
		search_list.push(conn[1][i]);
		ans[conn[1][i]] = 1;
	}

	while (!search_list.empty()) {
		int n = search_list.front();
		search_list.pop();

		REP(i, conn[n].size()) {
			int m = conn[n][i];
			if (ans[m] != 0) continue;
			search_list.push(m);
			ans[m] = n;
		}

#ifdef DEBUG_MODE
		cout << "search for " << n << endl;
		FOR(i, 2, N+1) {
			cout << i << ": " << ans[i] << endl;
		}
#endif
	}

	cout << "Yes" << endl;
	FOR(i, 2, N+1) cout << ans[i] << endl;

	return 0;
}