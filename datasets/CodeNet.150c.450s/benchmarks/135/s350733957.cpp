#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
using P   = pair<ll, ll>;
using mat = vector<vector<ll>>;

void IOS() { ios::sync_with_stdio(false), cin.tie(0); }

const ll INF = 1e16;
const ll MOD = 1e9 + 7;
const ld EPS = 1e-12;

template <typename T>
void dump(T x) { cout << x << endl; }
void dumpf(ld x, int t) { cout << setprecision(t) << fixed << x << endl; }
template <typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val) {
	fill((T *)array, (T *)(array + N), val);
}
inline ll mod(ll a, ll b) {
	if (a > 0) return a % b;
	if (a % b == 0) return 0;
	ll x = -a / b + 1;
	a += x * b;
	return a % b;
}
ll powm(ll a, ll b, ll c) {
	if (b == 0)
		return 1;
	else if (b % 2 == 0) {
		ll d = powm(a, b / 2, c);
		return (d * d) % c;
	} else
		return (a * powm(a, b - 1, c)) % c;
}
ll gcd(ll a, ll b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

//ll dx[4] = {1, 0, -1, 0};
//ll dy[4] = {0, 1, 0, -1};

int main() {
	IOS();
	ll n = 1, m = 1;
	while (1) {
		cin >> n >> m;
		if (n * m == 0) break;
		vector<ll> h(n), sh(n + 1, 0), w(m), sw(m + 1, 0);
		map<ll, ll> mp1, mp2;
		for (int i = 0; i < n; i++) {
			cin >> h[i];
			sh[i + 1] = sh[i] + h[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> w[i];
			sw[i + 1] = sw[i] + w[i];
		}
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j <= n; j++) {
				mp1[sh[j] - sh[i]]++;
				//dump(sh[j] - sh[i]);
			}
		}
		for (int i = 0; i < m; i++) {
			for (int j = i + 1; j <= m; j++) {
				mp2[sw[j] - sw[i]]++;
			}
		}
		ll ans = 0;
		for (auto it = mp1.begin(); it != mp1.end(); it++) {
			ans += it->second * mp2[it->first];
			//cout << it->first << " " << it->second << endl;
		}
		dump(ans);
	}

	return 0;
}
