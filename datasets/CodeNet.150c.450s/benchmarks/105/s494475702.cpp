/********************************************************************************
	
	Code by a weak man who named CYJian, and he hopes the code can get more points.

	Algorithm: 

 ********************************************************************************/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

//{{{ FAST IO AND SOME FUNCTIONS
const int __SIZE = 1 << 18;
char ibuf[__SIZE], *iS, *iT;

#define ge (iS == iT ? (iT = (iS = ibuf) + fread(ibuf, 1, __SIZE, stdin), (iS == iT ? EOF : *iS++)) : *iS++)
#define ri read_int()
#define rl read_ll()
#define FILE(s) freopen(s"in", "r", stdin), freopen(s"out", "w", stdout)

template<typename T>
inline void read(T &x) {
	char ch, t = 0; x = 0;
	while(!isdigit(ch = ge)) t |= ch == '-';
	while(isdigit(ch)) x = x * 10 + (ch ^ 48), ch = ge;
	x = t ? -x : x;
}
inline int read_int() { int x; return read(x), x; }
inline ll read_ll() { ll x; return read(x), x; }

template<typename T> inline void chkmin(T&a, T b) { a = a < b ? a : b; }
template<typename T> inline void chkmax(T&a, T b) { a = a > b ? a : b; }
//}}}

int bel[210];
ll a[210];
ll b[70];

inline int Insert(ll x) {
	ll bs = 1ll << 60;
	for(int i = 60; ~i; i--, bs >>= 1)
		if(x & bs) {
			if(b[i]) x ^= b[i];
			else return b[i] = x, 1;
		}
	return 0;
}

int main() {
#ifdef LOCAL
	FILE("");
#endif

	int Case = ri;
	while(Case--) {
		int n = ri;
		for(int i = 1; i <= n; i++) a[i] = rl;
		for(int i = 1; i <= n; i++) {
			char ch = ge;
			while(!isdigit(ch)) ch = ge;
			bel[i] = ch - '0';
		} int res = 0;
		for(int i = n; i >= 1; i--) {
			int ok = Insert(a[i]);
			if(bel[i] && ok) res = 1;
		} printf("%d\n", res);
		memset(b, 0, sizeof(b));
	}
	return 0;
}