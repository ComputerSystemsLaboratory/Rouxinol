#include<iostream>
#include<climits>
#include<vector>
#include<list>
#include<functional>
#include<algorithm>
#include<string>
#include<cmath>
#include<complex>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<deque>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i<(n);i++)
#define INF (int)1e9
#define INFL (ll)1e11
using namespace std;
typedef long long ll;
typedef pair<int, int> P;



int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	vector<vector<int>> a(n, vector<int>(n, 0));
	REP(i, n) {
		int u, k;
		cin >> u >> k;
		u--;
		REP(j, k) {
			int v;
			cin >> v;
			a[u][--v] = 1;
		}
	}
	REP(i, n) {
		REP(j, n) {
			cout << a[i][j];
			if (j < n - 1) cout << " ";
			else cout << "\n";
		}
	}
	
	return 0;
}

