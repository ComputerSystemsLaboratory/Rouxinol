#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;
#define N 100000
#define INF INT_MAX
int n,l[N],dp[N],r=0;

int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&l[i]),dp[i]=INF;
	for(int i=0;i<n;i++)
		*lower_bound(dp,dp+n,l[i])=l[i];
	printf("%d\n",lower_bound(dp,dp+n,INF)-dp);
	return 0;
}