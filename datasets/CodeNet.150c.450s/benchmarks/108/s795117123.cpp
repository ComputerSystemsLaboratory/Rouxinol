#include<bits/stdc++.h>
using namespace std;

int n,u,k,v;
int g[102][102];
int d[102];
int sn[102];
int cnt=0;
int x,siz;

queue<int>q;

int main(){
  cin>>n;
  memset(g,0,sizeof(g));
  for(int i=1;i<=n;i++){
    cin>>u>>k;
    d[i]=-1;
    sn[i]=0;
    for(int j=1;j<=k;j++){
      cin>>v;
      g[u][v]=1;
    }
  }
  
  q.push(1);

  while(!q.empty()){

    siz=q.size();

    for(int i=0;i<siz;i++){
      
      x=q.front();
      q.pop();
      
      sn[x]=1;
      if(d[x]==-1)d[x]=cnt;
      
      for(int j=1;j<=n;j++){
	
	if(g[x][j]==1 && sn[j]==0){
	  q.push(j);
	}
      
      }

    }

    cnt++;

  }

  for(int i=1;i<=n;i++){
    
    cout<<i<<" "<<d[i]<<endl;

  }

}