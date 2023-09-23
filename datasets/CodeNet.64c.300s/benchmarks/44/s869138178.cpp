#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;

ll d[11][11];
int main() {
	int n;
	while (cin >> n, n) {
		memset(d, 0x3f, sizeof(d));
		int Max = 1;
		rep(i, n) {
			int a, b, c; scanf("%d%d%d", &a, &b, &c);
			d[a][b] = c; d[b][a] = c;
			Max = max(Max, max(a, b) + 1);
		}
		rep(k, Max)rep(i, Max)rep(j,Max)
			d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
		int index;
		ll Min = LLONG_MAX;
		rep(i, Max) {
			ll cnt = 0;
			rep(j, Max) {
				if (i == j)continue;
				cnt += d[i][j];
			}
			if (cnt < Min) {
				Min = cnt;
				index = i;
			}
		}
		cout << index << ' ' << Min << endl;
	}
}