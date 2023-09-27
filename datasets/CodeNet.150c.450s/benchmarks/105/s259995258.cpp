#include <bits/stdc++.h>
using namespace std;
#define int long long
inline void read (int &x) {
	char ch = getchar(); x = 0;
	while (!isdigit(ch)) ch = getchar();
	while (isdigit(ch)) x = x * 10 + ch - 48, ch = getchar();
} const int N = 238; int n, m = 62, a[N], k[N]; char ch[N]; 
signed main() {
	int T; read (T);
	while (T--) {
		read (n); int ok = 1;
		for (int i = 0; i <= 100; ++i) k[i] = 0;
		for (int i = 1; i <= n; ++i) read (a[i]);
		scanf ("%s", ch + 1);
		for (int i = n; i >= 1; --i) {
			for (int j = 0; j <= m; ++j) 
				if ((a[i] >> j) & 1) a[i] ^= k[j];
			if (ch[i] == '1') {
				if (a[i]) { ok = 0; break; }
			} else {
			  	for (int j = 0; j <= m; ++j)
					if ((a[i] >> j) & 1) { k[j] = a[i]; break; }
			}
		} ok ? puts ("0") : puts ("1");
	} return 0;
}