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
using tii = tuple<int, int>;
#define rep(i,n) for(int i=0;i<n;i++)
#define range(i,s,n) for(int i=s;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define mp make_pair
//#define INF (ll)1E9
#define INF INT_MAX
#define EPS 1E-9
#define MOD 1000000007
#define PI 3.1415926535897932384

template <class T>ostream &operator<<(std::ostream &o, const vector<T> &v)
{
	rep(i, v.size()) {
		o << (i > 0 ? " " : "") << v[i];
	}
	return o;
}

//int dx[]={1,1,1,0,-1,-1,-1,0},dy[8]={1,0,-1,-1,-1,0,1,1,1};
//int dx[] = { 1,0,-1,0 }, dy[] = { 0,1,0,-1 };

//constexpr ll gcd(ll a, ll b) { return b ? gcd(b, a%b) : a; }

struct segtree {
	int N = 1;
	vi val;
	segtree(int n) {
		while (N < n) N *= 2;
		val = vi(2 * N);
		for (int i = 0; i < 2 * N; i++) {
			val[i] = 0;
		}
	}
	void add(int k, int a) {
		k += N;
		val[k] += a;
		while (k > 0) {
			k = k / 2;
			val[k] += a;
		}
	}
	int sum(int a, int b) { return sum(a, b, 1, 0, N); }
	int sum(int a, int b, int k, int l, int r) {
		if (r <= a || b <= l) return 0;
		if (a <= l && r <= b) return val[k];
		int m = (l + r) / 2;
		return sum(a, b, k * 2, l, m)+ sum(a, b, k * 2 + 1, m, r);
	}
};

int main(void) {
	int n, q;
	int a, b, c;
	cin >> n >> q;
	segtree st(n);
	//cout << st.val.size() << endl;
	rep(i, q) {
		cin >> a >> b >> c;
		if (a == 0) {
			st.add(b-1, c);
		}
		else cout << st.sum(b-1, c) << endl;
	}
	///cout << endl;
	//rep(i, st.val.size())cout <<i<<"  "<< st.val[i] << endl;
}


