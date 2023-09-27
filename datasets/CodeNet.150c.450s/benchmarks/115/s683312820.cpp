#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
#define repp(i, m, n) for(int i = m; i < n; i++)
const int    INF = 100000000;
const double EPS = 1e-10;
const int    MOD = 1000000007;
using namespace std;
typedef long long ll;
typedef pair<int, int> pai;
typedef pair<ll,ll> pal;
int q;
string x, y;
int n, m;
int dp[1001][1001];
int main()
{
	cin >> q;
	for(int i=0; i<q; i++)
	{
		for(int j=0; j<1001; j++)
		{
			for(int k=0; k<1001; k++)
			{
				dp[j][k]=0;
			}
		}
		cin >> x >> y;
		n=x.size();
		m=y.size();
		for(int j=1; j<=n; j++)
		{
			for(int k=1; k<=m; k++)
			{
				if(x[j-1]==y[k-1])
				{
					dp[j][k]=dp[j-1][k-1]+1;
				}
				else
				{
					dp[j][k]=max(dp[j-1][k], dp[j][k-1]);
				}
			}
		}
		cout << dp[n][m] << endl;
	}
	return 0;
}