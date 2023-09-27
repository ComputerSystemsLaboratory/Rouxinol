#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
//#define int long long
using namespace std;

int n, k;
int a[100000];

signed main()
{
	while (true) {
		cin >> n >> k;
		if (n == 0 && k == 0) break;
		rep(i,n) cin >> a[i];

		int mx;
		int sum = 0;
		rep(i,k) {
			sum += a[i];
		}
		mx = sum;
		//cout << "first = " << mx << endl;

		for (int i=0; i<=n-k -1; i++) {
			sum -= a[i];
			sum += a[i+k];
			//printf("i = %d, sum = %d\n", i, sum);
			mx = max(mx, sum);
		}

		cout << mx << endl;
	}
}