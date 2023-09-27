#include<cstdio>
#include <iostream>
#include<algorithm>
#include<string>
#include<queue>
#include<vector>
#include<functional>
#include<cmath>
#include<map>
#include<stack>
#include<list>
#include<set>
#include<numeric>

#define MOD 1000000007

using namespace std;
typedef long long ll;

ll sum[100010];
ll a[100010];

int main()
{
	while (1) {
		ll n, k;
		cin >> n >> k;
		if (n == 0 && k == 0)break;

		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}

		sum[1] = a[1];
		for (int i = 2; i <= n; i++) {
			sum[i] = sum[i - 1] + a[i];
		}

		ll mx = 0;
		ll ans = 0;
		for (int i = k; i <= n; i++) {
			mx = sum[i] - sum[i - k];
			ans = max(mx, ans);
		}
		cout << ans << endl;
	}
	return 0;
}