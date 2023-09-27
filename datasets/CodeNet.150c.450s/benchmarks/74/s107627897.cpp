#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<map>
#include<set>
#include<list>
#include<random>
#include<iomanip>
#include<vector>
#include<functional>
#include<algorithm>
#include<cstdio>
#include<stdlib.h>
#include<cstdlib>
#include<unordered_map>
#include<time.h>
#define rep(i,a,n) for (int (i)=(a);(i)<(n);(i)++)
#define int long long
using namespace std;
typedef long long ll;
typedef long double ld;
const int inf = 999999999999999999;
using namespace std;
int n, m, a[20], dp[60001];
signed main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++)
		cin >> a[i];
	fill(dp, dp + 60001, inf);
	dp[0] = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j <= n; j++) {
			dp[j + a[i]] = min(dp[j + a[i]], dp[j] + 1);
		}
	}
	cout << dp[n] << endl;
	getchar(); getchar();
}