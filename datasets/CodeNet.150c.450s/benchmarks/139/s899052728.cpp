#include <bits/stdc++.h>
using namespace std;
#define reps(i, a, n) for (int i = (a); i < (n); ++i)
#define rep(i, n) reps(i, 0, n)
#define deps(i, a, n) for (int i = (a); i >= (n); --i)
#define dep(i, n) deps(i, n, 0)
#define inf 2147483647
#define int long long

int c[100005];
vector<int> ab[100005];
queue<int> qu;

signed main(void)
{
	int n, m, a, b; cin >> n >> m;
	reps (i, 1, m + 1)
	{
		cin >> a >> b;
		ab[a].push_back(b);
		ab[b].push_back(a);
	}
	qu.push(1);
	c[1] = 1;
	while (!qu.empty())
	{
		a = qu.front(); qu.pop();
		for(int nx: ab[a]) if(!c[nx]) qu.push(nx), c[nx] = a;
	}
	reps (i, 1, n + 1) if (!c[i]) {cout << "No" << endl; return 0;}
	cout << "Yes" << endl;
	reps (i, 2, n + 1) cout << c[i] << endl;
}
