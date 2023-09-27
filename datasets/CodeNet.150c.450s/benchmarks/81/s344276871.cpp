#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int d[105][105];
int main()
{
	int n,m;
	scanf("%d",&m);
	while(m){
		n=0;
		memset(d,0x3f,sizeof d);
		for(int i=1;i<=m;i++){
			int a,b,c;
			scanf("%d%d%d",&a,&b,&c);
			d[a][b]=c;
			d[b][a]=c;
			n=max(n,max(a,b));
		}
		for(int i=0;i<=n;i++)
			d[i][i]=0;
		for(int k=0;k<=n;k++)
			for(int i=0;i<=n;i++)
				for(int j=0;j<=n;j++)
					if(d[i][k]!=1061109567&&d[k][j]!=1061109567)
					d[i][j]=min(d[i][k]+d[k][j],d[i][j]);
		int ans=1<<30,ansi;
		for(int i=0;i<=n;i++){
			int sum=0;
			for(int j=0;j<=n;j++){
				if(d[i][j]==1061109567){
					sum=1<<30;
					break;
				}
				sum+=d[i][j];
			}
			if(sum<ans)
				ans=sum,ansi=i;
		}
		printf("%d %d\n",ansi,ans);
		scanf("%d",&m);
	}
}