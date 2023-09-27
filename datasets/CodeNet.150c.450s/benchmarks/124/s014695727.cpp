#include<bits/stdc++.h>
using namespace std;
int n,M[105][105];
void djkstr(){
  int minv;
  int d[105],color[105];

  for(int i=0;i<n;i++){
    d[i]= 1234567890;
    color[i]=0;
  }
  d[0]=0;
  color[0]=1;
  while(1){
    minv = 1234567890;
    int u = -1;
    for(int i=0;i<n;i++){
      if(minv>d[i]&&color[i]!=2){
	u=i;
	minv = d[i];
      }
    }
    if(u==-1)break;
    color[u]=2;
    for(int v=0;v<n;v++){
      if(color[v]!=2&&M[u][v]!=1234567890){
	if(d[v]>d[u]+M[u][v]){
	  d[v]=d[u]+M[u][v];
	  color[v]=1;
	}
      }
    }
  }
  for(int i=0;i<n;i++){
    cout << i << " " << (d[i]==1234567890?-1:d[i])<<endl;
  }
}
int main(){
  cin >> n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      M[i][j]=1234567890;
    }
  }
  int k,c,u,v;
  for(int i=0;i<n;i++){
    cin >> u >> k;
    for(int j=0;j<k;j++){
      cin >> v >> c;
      M[u][v]=c;
    }
  }
  djkstr();
  return 0;
}

    