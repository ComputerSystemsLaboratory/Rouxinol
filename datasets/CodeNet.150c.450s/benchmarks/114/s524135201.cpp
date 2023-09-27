#include<bits/stdc++.h>
using namespace std;
int n,M[105][105];
int prim(){
  int u,minv;
  int d[105],p[105],color[105];
  for(int i=0;i<n;i++){
    d[i]=1234567890;
    p[i]=-1;
    color[i] = 0;
  }
  d[0]=0;
  while(1){
    minv = 1234567890;
    u = -1;
    for(int i=0;i<n;i++){
      if(minv > d[i] && color[i]!=2){
	u=i;
	minv = d[i];
      }
    }
    if(u==-1)break;
    color[u]=2;
    for(int v=0;v<n;v++){
      if(color[v]!=2&&M[u][v]!=1234567890){
	if(d[v]>M[u][v]){
	  d[v]=M[u][v];
	  p[v]=u;
	  color[v]=1;
	}
      }
    }
  }
  int sum = 0;
  for(int i=0;i<n;i++){
    if(p[i]!=-1)sum+=M[i][p[i]];
  }
  return sum;
}
int main(){
  cin >> n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      int e;
      cin >> e;
      M[i][j]=(e==-1)? 1234567890 : e;
    }
  }
  cout << prim() << endl;
  return 0;
}