#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
const int MAXM = 4e2 + 5;
const int MAXN = 26 + 5;
const ll linf = 0x3f3f3f3f3f3f3f3f;

int c[MAXN];
int a[MAXM][MAXN];

int main(void)
{
	int n=26, m;
	scanf("%d",&m);
	for(int i=1; i<=n; ++i) scanf("%d",&c[i]);
	for(int i=1; i<=m; ++i)
		for(int j=1; j<=n; ++j)
			scanf("%d",&a[i][j]);
	
	static int lst[MAXM];
	
	ll ans = 0;
	for(int k=1; k<=m; ++k)
	{
		int x;
		scanf("%d",&x);
		
		ans += a[k][x];
		for(int i=1; i<=n; ++i) if(i!=x)
			ans -= c[i] * (k-lst[i]);
		lst[x] = k;
		
		printf("%lld\n",ans);
	}
	return 0;
}