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
#define INF 1E9
#define EPS 1E-9
#define MOD (1E9+7)
#define PI 3.1415926535897932384626433832795

std::ostream &operator<<(std::ostream &out, const vector<int> &tgt)
{
	string s;
	for (int i = 0; i<tgt.size(); i++) {
		s += (to_string(tgt[i]) + ((i != tgt.size() - 1) ? " " : ""));
	}
	out << s;
	return out;
}

int main() {
	int n, in;
	vector<ll> v;
	cin >> n;
	rep(i, n) {
		cin >> in;
		v.push_back(in);
		cin >> in;
		if (i == n - 1)v.push_back(in);
	}
	vector<vector<ll>> vv(n, vector<ll>(n));
	for (int i = 1; i < n; i++) {
		vv[i - 1][i] = v[i - 1] * v[i] * v[i + 1];
	}
	for (int i = 2; i < n; i++) {
		for (int j = 0; i+j < n; j++) {
			ll ans;
			for (int k = 0; k <= i - 1; k++) {
				if (k == 0) {
					ans = vv[j][j + k] + vv[j + k+1][j + i] + v[j] * v[j + k + 1] * v[i + j + 1];
				}
				else {
					ll tmp = vv[j][j + k] + vv[j + k+1][j + i] + v[j] * v[j + k + 1] * v[i + j + 1];
					if (ans > tmp)ans = tmp;
				}
			}
			vv[j][i + j] = ans;
		}
	}
	cout << vv[0][n - 1] << endl;
}
