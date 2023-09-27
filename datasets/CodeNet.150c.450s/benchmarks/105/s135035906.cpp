#include <bits/stdc++.h>
using namespace std;
//#define cerr if (false) cerr
#define db(x) cerr << #x << "=" << x << endl
#define db2(x, y) cerr << #x << "=" << x << "," << #y << "=" << y << endl
#define db3(x, y, z) cerr << #x << "=" << x << "," << #y << "=" << y << "," << #z << "=" << z << endl
#define dbv(v) cerr << #v << "="; for (auto _x : v) cerr << _x << ", "; cerr << endl
#define dba(a, n) cerr << #a << "="; for (int _i = 0; _i < (n); ++_i) cerr << a[_i] << ", "; cerr << endl
template <typename A, typename B>
ostream& operator<<(ostream& os, const pair<A, B>& x) {
	return os << "(" << x.first << "," << x.second << ")";
}
typedef long long ll;
typedef long double ld;
// Invariant: basis is in rref form from bottom to top.
template <typename T>
bool add(T x, vector<T>& basis, bool a) {
	int siz = basis.size();
	for (int i = siz - 1; i >= 0; --i) {
		x = min(x, x ^ basis[i]);
	}
	if (!x) return false;
	if (a) basis.insert(lower_bound(basis.begin(), basis.end(), x), x);
	return true;
}
char S[205];
int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n;
		scanf("%d", &n);
		vector<ll> A(n);
		for (int i = 0; i < n; ++i) scanf("%lld", &A[i]);
		scanf("%s", S);
		vector<ll> B;
		bool win1 = false;
		for (int i = n - 1; i >= 0; --i) {
			if (S[i] == '1') {
				if (add(A[i], B, false)) {
					win1 = true;
					break;
				}
			} else {
				add(A[i], B, true);
			}
		}
		printf(win1 ? "1\n" : "0\n");
	}
}
