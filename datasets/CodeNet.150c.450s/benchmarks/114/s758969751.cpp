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

int prim(vector<vector<int>> a) {
	int n = a.size();
	priority_queue<P, vector<P>, greater<P>> pq;
	pq.push(P(0, 0));
	set<int> mst;
	int res = 0;
	while (mst.size() < n) {
		int s = pq.top().second;
		int w = pq.top().first;
		pq.pop();
		if (mst.find(s) == mst.end()) res += w;
		mst.insert(s);
		REP(j, n) {
			if (a[s][j] >= 0 && mst.find(j) == mst.end()) {
				pq.push(P(a[s][j], j));
			}
		}
	}
	return res;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	vector<vector<int>> a(n, vector<int>(n));
	REP(i, n)REP(j, n) cin >> a[i][j];

	cout << prim(a) << "\n";
	
	return 0;
}

