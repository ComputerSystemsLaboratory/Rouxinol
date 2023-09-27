#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;
using msi = map<string, int>;
using mii = map<int, int>;
using psi = pair<string, int>;
using pii = pair<int, int>;
using vlai = valarray<int>;
#define rep(i,n) for(int i=0;i<n;i++)
#define range(i,s,n) for(int i=s;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define INF 1e9
#define EPS 1e-9
#define MOD (1e9+7)

int main() {
	int n,in,k,ans=0;
	vi v;
	cin >> n >> k;
	rep(i, n) {
		cin >> in;
		v.pb(in);
	}
	int l = 1,r=20000*n;
	int p = r;
	while (1) {
		bool s = true;
		p = (l + r) / 2;
		int c = 1, tmp = 0;
		rep(j,n) {
			tmp += v[j];
			if (tmp > p) {
				c++;
				tmp = v[j];
				if (tmp > p)s = false;
			}
		}
		if (c <= k&& s) {
			ans = p;
			if ((l + r) / 2 == r)break;
			r = p;
		}
		else {
			if ((l + r) / 2 == l)break;
			l = p;
		}
	}
	cout << ans << endl;
}

