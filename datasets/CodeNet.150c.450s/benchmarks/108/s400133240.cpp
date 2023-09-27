#include<bits/stdc++.h>
using namespace std;
int a[101][101],num[101],dis[101];
bool vis[101];
int n,u,k,x,t=1;
queue<int> q;
int main(){
	memset(a,0,sizeof(a));
	memset(vis,false,sizeof(vis));
	memset(dis,0x1f1f1f1f,sizeof(dis));
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>u>>k;
		num[u]=k;
		int j=0;
		while (k--){
			  cin>>x;
			  a[u][++j]=x;
		}
	}
	q.push(1);
	dis[1]=0;
	while (!q.empty()){
		  x=q.front(); q.pop(); vis[x]=true;
		  for (int i=1; i<=num[x]; i++){
		  	  if (!vis[a[x][i]]){
		  	     dis[a[x][i]]=min(dis[a[x][i]],dis[x]+1);
		  	     q.push(a[x][i]);
              }
		  }
	}
    for (int i=1; i<=n; i++){
    	cout<<i<<' ';
    	if (dis[i]==0x1f1f1f1f) dis[i]=-1;
		cout<<dis[i]<<endl;
	}
	return 0;
}
