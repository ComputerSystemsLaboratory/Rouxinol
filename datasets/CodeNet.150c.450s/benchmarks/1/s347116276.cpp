#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#include<queue>
#include<vector>
#include<functional>
#include<cmath>
#include<map>
#include<stack>
#include<set>
#include<numeric>
#include<limits>
#include<iterator>

#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define rep(i,n) for(int i=0; i<n; i++)
#define INF (1<<20)

using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ll, char> plc;

ll dp[100010];
int n;
ll inf = (ll)(1e10);
vector<ll> a;

void solve() {
	fill(dp, dp + n, inf);
	rep(i, n) {
		*lower_bound(dp, dp + n, a[i]) = a[i];
	}
	cout << lower_bound(dp, dp + n, inf) - dp << endl;
}

int main() {
	cin >> n;
	a.resize(n);
	rep(i, n)cin >> a[i];
	solve();

	return 0;
}