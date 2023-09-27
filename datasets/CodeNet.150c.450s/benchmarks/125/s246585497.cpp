#define _USE_MATH_DEFINES
#include "bits/stdc++.h"
using namespace std;

//#define int long long
#define DBG 0
#define dump(o) if(DBG){cerr<<#o<<" "<<o<<endl;}
#define dumpc(o) if(DBG){cerr<<#o; for(auto &e:(o))cerr<<" "<<e;cerr<<endl;}
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define each(it,c) for(auto it=(c).begin();it!=(c).end();it++)
#define all(c) c.begin(),c.end()
const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
const int MOD = (int)(1e9 + 7);
const int DONE = 1;
const int YET = 0;
int fin(vector<int>a) {
	rep(i, 0, a.size()) {
		if (a[i] == YET)return i;
	}
	return -1;
}
signed main() {
	int n; cin >> n; vector<vector<int> >vec(n, vector<int>());
	rep(i, 0, n) {
		int u, k; cin >> u >> k;
		u--;
		rep(j, 0, k) {
			int v; cin >> v; v--;
			vec[u].push_back(v);
		}
	}
	vector<int>check(n, 0);
	vector<pair<int, int> >stamp(n);
	stack<int>S;
	S.push(0);
	int t = 1;
	start:
	while (!S.empty()) {
		int u = S.top();
		if (check[u] == YET) {
			stamp[u].first = t++;
			check[u] = DONE;
		}
	here:
		if (DBG) {
			cout << "t == " << t << endl;
			rep(x, 0, n) {
				cout << x + 1 << " " << stamp[x].first << " " << stamp[x].second << endl;
			}
		}
		rep(i, 0, vec[u].size()) {
			if (check[vec[u][i]] == YET) {
				S.push(vec[u][i]);
				check[vec[u][i]] = DONE;
				stamp[vec[u][i]].first = t++;
				u = vec[u][i];
				goto here;
			}
		}
		u = S.top(); S.pop();
		stamp[u].second = t++;
	}
	if (fin(check) != -1) {
		S.push(fin(check));
		goto start;
	}
	rep(i, 0, n) {
		cout << i + 1 << " " << stamp[i].first << " " << stamp[i].second << endl;;
	}

	return 0;
}