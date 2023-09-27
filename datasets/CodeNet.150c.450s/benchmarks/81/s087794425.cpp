#include<bits/stdc++.h>
using namespace std;
const int N=105,INF=0x3f3f3f3f;
int n,v,ansNum,G[N][N],ans[N],Map[N];
signed main(void){
	ios::sync_with_stdio(false);
	while(cin>>n&&n!=0){
		v=0;
		ansNum=1;
		memset(G,0x3f,sizeof(G));
		memset(Map,0,sizeof(Map));
		memset(ans,0,sizeof(ans));
		for(int i=1,x,y,w;i<=n;i++){
			cin>>x>>y>>w;
			if(Map[x]==0)
				Map[x]=++v;
			x=Map[x];
			if(Map[y]==0)
				Map[y]=++v;
			y=Map[y];
			G[x][y]=G[y][x]=min(G[x][y],w);
		}
		for(int i=1;i<=v;i++)
			G[i][i]=0;
		for(int k=1;k<=v;k++)
			for(int i=1;i<=v;i++)
				for(int j=1;j<=v;j++)
					if(G[i][j]>G[i][k]+G[k][j])
						G[i][j]=G[i][k]+G[k][j];
		for(int i=1;i<=v;i++)
			for(int j=1;j<=v;j++)
				ans[i]+=G[i][j];
		for(int i=1;i<=v;i++)
			if(ans[i]<ans[ansNum])
				ansNum=i;
		for(int i=0;i<N;i++)
			if(Map[i]==ansNum){
				ansNum=i;
				break;
			}
		cout<<ansNum<<" "<<ans[Map[ansNum]]<<endl;
	}
}