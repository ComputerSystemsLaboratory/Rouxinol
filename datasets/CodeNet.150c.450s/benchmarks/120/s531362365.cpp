#include<cstdio>
#include<algorithm>
using namespace std;
#define MAXM 10000
#define MAXN 10

int n,m,ans;
bool st[MAXN+3][MAXM+3];

void Dfs(int i) {
	if(i>n) {
		int tot=0;
		for(int j=1;j<=m;j++) {
			int sum=0;
			for(int k=1;k<=n;k++)
				sum+=st[k][j];
			tot+=max(sum,n-sum);
		}
		ans=max(ans,tot);
		return ;
	}
	Dfs(i+1);
	for(int j=1;j<=m;j++)
		st[i][j]=!st[i][j];
	Dfs(i+1);
}
int main() {
	while(scanf("%d %d",&n,&m)&&n&&m) {
		ans=0;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				scanf("%d",&st[i][j]);
		Dfs(1); printf("%d\n",ans);
	}
	return 0;
}
