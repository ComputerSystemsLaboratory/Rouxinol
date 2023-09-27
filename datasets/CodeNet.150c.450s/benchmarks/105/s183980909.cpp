#include<bits/stdc++.h>
using namespace std;
const int MAXN = 205;
typedef long long ll;
template <typename T> void chkmax(T &x, T y) {x = max(x, y); }
template <typename T> void chkmin(T &x, T y) {x = min(x, y); } 
template <typename T> void read(T &x) {
	x = 0; int f = 1;
	char c = getchar();
	for (; !isdigit(c); c = getchar()) if (c == '-') f = -f;
	for (; isdigit(c); c = getchar()) x = x * 10 + c - '0';
	x *= f;
}
ll a[MAXN], b[MAXN], bit[MAXN];
char s[MAXN];
void ins(ll x) {
	for (int i = 60; i >= 0; i--)
		if (x & bit[i]) {
			if (b[i] == 0) {
				b[i] = x;
				break;
			}
			x ^= b[i];
		}
}
bool query(ll x) {
	for (int i = 60; i >= 0; i--)
		if (x & bit[i]) x ^= b[i];
	return x == 0;
}
int main() {
	int T; read(T);
	while (T--) {
		int n; read(n);
		for (int i = 1; i <= n; i++)
			read(a[i]);
		scanf("\n%s", s + 1);
		for (int i = 0; i <= 60; i++)
			b[i] = 0, bit[i] = 1ll << i;
		bool win = false;
		for (int i = n; i >= 1; i--) {
			if (s[i] == '0') ins(a[i]);
			else win |= !query(a[i]);
		}
		if (win) puts("1");
		else puts("0");
	}
	return 0;
}
