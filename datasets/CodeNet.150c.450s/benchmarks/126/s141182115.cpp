#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
int a,b,n,dp[17][17],x,y;
bool c[17][17];
int main()
{
while(1){
	scanf("%d %d",&a,&b);
	if(a==0&&b==0) return 0;
	for(int i=1;i<=a;i++){
		fill(c[i],c[i]+b+1,0);
		fill(dp[i],dp[i]+b+1,0);
	}
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&x,&y);
		c[x][y]=1;
	}
	dp[1][1]=1;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			if(c[i][j]) continue;
			if(i-1>0) dp[i][j]+=dp[i-1][j];
			if(j-1>0) dp[i][j]+=dp[i][j-1];
		}
	}
	printf("%d\n",dp[a][b]);
}
}