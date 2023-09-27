#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define repp(i, m, n) for(int i = m; i < (int)n; i++)
#define reps(i, n) for(int i = 1; i <= (int)n; i++)
const int    INF = 100000000;
const double EPS = 1e-10;
const int    MOD = 1000000007;
using namespace std;
typedef long long ll;
typedef pair<int, int> pai;
typedef pair<ll,ll> pal;


int main()
{
	pai a[10010];
	int n;
	while(1)
	{
		cin >> n;
		int h, m, s;
		if(n==0) break;
		rep(i, n)
		{
			char dummy;
			cin >> h >> dummy >> m >> dummy >> s;
			a[i].first=h*3600+m*60+s;
			cin >> h >> dummy >> m >> dummy >> s;
			a[i].second=h*3600+m*60+s;
		}
		sort(a, a+n);
		int b[10010]={};
		rep(i, n)
		{
			for(int j=i+1; j<=n; j++)
			{
				if(a[j].first>=a[i].second && b[j]==0)
				{
					b[j]=b[i]+1;
					break;
				}
			}
		}
		int ans=0;
		rep(i, n) if(b[i]==0) ans++;
		cout << ans << endl;
	}
	return 0;
}