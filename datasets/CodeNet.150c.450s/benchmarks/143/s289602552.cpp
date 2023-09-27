#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ALL(x) (x).begin(), (x).end()
typedef long long ll;
typedef pair<int, int> pii;
const int INF = 1e9;
const int MOD = 1000000007;
const double PI = acos(-1);
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	rep(i,n) cin >> v[i];
	int q;
	cin >> q;
	vector<pii> u(q);
	rep(i,q) cin >> u[i].first >> u[i].second;
	map<int, int> mp;
	ll sum = 0;
	rep(i,n) {
		mp[v[i]]++;
		sum += v[i];
	}

	rep(i,q) {
		sum -= (ll) u[i].first * mp[u[i].first];
		sum += (ll) u[i].second * mp[u[i].first];
		mp[u[i].second] += mp[u[i].first];
		mp[u[i].first] = 0;
		cout << sum << endl;
	}
}