#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
#define repp(i, m, n) for(int i = m; i < n; i++)
#define reps(i, n) for(int i = 1; i <= n; i++)
const int    INF = 100000000;
const double EPS = 1e-10;
const int    MOD = 1000000007;
using namespace std;
typedef long long ll;
typedef pair<int, int> pai;
typedef pair<ll,ll> pal;



int main()
{
	int n, k, a[100010];
	while(cin >> n >> k)
	{
		if(n==0 && k==0) break;
		rep(i, n) cin >> a[i];
		int sum=0, ans;
		rep(i, k) sum+=a[i];
		ans=sum;
		rep(i, n-k)
		{
			sum+=(a[i+k]-a[i]);
			ans=max(sum, ans);
		}
		cout << ans << endl;
	}
	return 0;
}