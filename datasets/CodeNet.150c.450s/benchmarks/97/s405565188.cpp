#include<bits/stdc++.h>
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
#define MOD (ll)(1E9+7)
#define PI 3.1415926535897932384

template <class T>ostream &operator<<(std::ostream &o, const vector<T> &v)
{
	rep(i, v.size()) {
		o << (i > 0 ? " " : "") << v[i];
	}
	return o;
}



int main() {
	while (1) {
		int n;
		cin >> n;
		if (n == 0) break;
		vi x(n, 0);
		vi y(n, 0);
		for (int i = 1; i < n; i++) {
			int a, b;
			cin >> a >> b;
			x[i] = x[a];
			y[i] = y[a];
			if (b == 0) {
				x[i]--;
			}
			else if (b == 1) {
				y[i]--;
			}
			else if (b == 2) {
				x[i]++;
			}
			else if (b == 3) {
				y[i]++;
			}
		}
		int minx = *min_element(all(x));
		int miny= *min_element(all(y));
		int maxx= *max_element(all(x));
		int maxy= *max_element(all(y));
		cout << maxx - minx + 1 << " " << maxy - miny + 1 << endl;
	}
}

