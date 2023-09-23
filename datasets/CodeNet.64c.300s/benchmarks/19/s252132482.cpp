#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1000000
using namespace std;
int main() {
	int n;
	while (cin >> n,n) {
		int ans = -INF, cnt = 0;
		rep(i, n) {
			int a;
			cin >> a;
			if (cnt < 0) cnt = a;
			else cnt += a;
			ans = max(ans, cnt);
		}
		cout << ans << endl;
	}
	return 0;
}
