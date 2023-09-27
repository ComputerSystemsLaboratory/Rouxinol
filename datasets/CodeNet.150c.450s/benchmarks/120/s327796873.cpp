#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
//#define int long long
using namespace std;
typedef long long ll;

int R, C;
int a[10][10000];

signed main()
{
	while (true) {
		cin >> R >> C;
		if (R == 0 && C == 0) break;
		//rep(i,R) rep(j,C) cin >> a[i][j];
		rep(i,R) rep(j,C) scanf("%d", &a[i][j]);

		int ans = 0;
		for (int i = 0; i < 1 << R; i++) {
			int temp = 0;
			rep(j,C) {
				int one = 0;
				rep(k,R) {
					if ((i >> k & 1) && (a[k][j] == 0)) one++;
					else if (!(i >> k & 1) && (a[k][j] == 1)) one++;
				}
				temp += max(one, R - one);
			}
			ans = max(ans, temp);
		}

		cout << ans << endl;
	}
}