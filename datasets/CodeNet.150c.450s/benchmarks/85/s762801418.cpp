#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define endl '\n'

int n;
ll r[111],c[111],d[111];
ll dp[111][111];
const ll oo = 1000000000000000LL;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> r[i] >> c[i];
	d[0] = r[1];
	for(int i = 1; i <= n; i++)
		d[i] = c[i];
	for(int size = 1; size <= n;size++){
		for(int i = 1; i <= n - size; i++){
			int j = i + size;
			dp[i][j] = oo;
			for(int k = i; k <= j - 1;k++){
				ll cost = dp[i][k] + dp[k + 1][j] + d[i - 1]*d[k]*d[j];
				dp[i][j] = min(dp[i][j],cost);
			}
		}
	}
	
	cout << dp[1][n] << endl;

	return 0;
}
