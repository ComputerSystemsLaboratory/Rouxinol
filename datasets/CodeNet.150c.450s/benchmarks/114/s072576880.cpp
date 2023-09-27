#include<bits/stdc++.h>
using namespace std;
int main(){
	int mapp[101][101];
	int d[101],vis[101];
	int ans=0,n,u;
	cin>>n;
	for (int i=0; i<n; i++)
	    for (int j=0; j<n; j++)
	        cin>>mapp[i][j];
	memset(vis,0,sizeof(vis));
	memset(d,0x1f1f1f1f,sizeof(d));
	d[0]=0; 
	while (true){
		  int minn=0x1f1f1f1f;
		  for (int i=0; i<n; i++)
		  	  if (!vis[i] && d[i]<minn){
		  	  	 minn=d[i]; u=i;
			  }
		  vis[u]=1;
		  if (minn==0x1f1f1f1f)
		     break;
		  for (int i=0; i<n; i++)
		      if (!vis[i] && mapp[u][i]!=-1 && mapp[u][i]<d[i]){
		      	 d[i]=mapp[u][i];
			  }
	}
	for (int i=0; i<n; i++)
		ans+=d[i];
	cout<<ans<<endl;
	return 0;
}
