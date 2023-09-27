#include<bits/stdc++.h>
using namespace std;
int a[101][101],num[101],tt[101][2];
bool vis[101];
int n,u,k,x,t=1;
void dfs(int k){
     tt[k][0]=t; t++;
     vis[k]=true;
	 for (int i=1; i<=num[k]; i++){
	     if (!vis[a[k][i]]){
	     	dfs(a[k][i]);
		 }
     }
	 tt[k][1]=t; t++;
}
int main(){
	memset(a,0,sizeof(a));
	memset(vis,false,sizeof(vis));
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
	for (int i=1; i<=n; i++)
	    if (!vis[i])
		   dfs(i); 
	for (int i=1; i<=n; i++){
		cout<<i;
		for (int j=0; j<2; j++)
		    cout<<' '<<tt[i][j];
		cout<<'\n';
	}
	return 0;
}
