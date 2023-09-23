#include <cstdio>
#include <algorithm>
using namespace std;
#define inf 1<<25
#define min(a,b)((a)<=(b)?(a):(b))
#define rep(i,n)for(int i=0;i<n;i++)
int n,a,b,c;
int cost[10][10];
bool use[10];
int main() {
	while(scanf("%d",&n),n) {
		fill(use,use+10,false);
		fill(cost[0],cost[0]+10*10,inf);
		rep(i,n) {
			scanf("%d %d %d",&a,&b,&c);
			cost[a][b]=cost[b][a]=c;
			use[a]=use[b]=true;
		}
		rep(k,10)rep(i,10)rep(j,10) {
			cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
		}
		int to,cs=inf;
		rep(i,10) {
			if(!use[i])continue;
			int sum=0;
			rep(j,10)if(i!=j&&cost[i][j]<inf)sum+=cost[i][j];
			if(cs>sum)to=i,cs=sum;
		}
		printf("%d %d\n",to,cs);
	}
}