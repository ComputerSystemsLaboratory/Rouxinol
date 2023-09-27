#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;

int main() {
	int a[3];
	int n; cin >> n;
	rep(i,n) {
		cin >> a[0] >> a[1] >> a[2];
		sort(a, a + 3);
		if (a[2] * a[2] == a[0] * a[0] + a[1] * a[1])puts("YES");
		else puts("NO");
	}
	return 0;
}