#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int n, a[200010], ma[200010], mi[200010], ans = -1145141919;
int main(){
	cin >> n;
	rep(i, n)cin >> a[i];
	rep(i, n) {
		if (i == 0)mi[i] = a[i];
		else mi[i] = min(mi[i - 1], a[i]);
	}
	for (int i = n - 1; i >= 0; i--) {
		if (i == n - 1)ma[i] = a[i];
		else ma[i] = max(ma[i + 1], a[i]);
	}
	rep(i, n - 1)ans = max(ma[i + 1] - mi[i], ans);
	cout << ans << endl;
	return 0;
}
