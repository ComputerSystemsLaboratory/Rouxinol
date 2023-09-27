#include<iostream>
#include<queue>
using namespace std;

int main(){
  queue<int> q;
  int n,k,u,max=0;
  int g[101]={},c[101];
  int d[101][101]={};
  int di;
  cin>>n;
  for(int i=0;i<101;i++) c[i]=-1;
  c[1]=0;
  g[1]=1;
  for(int i=0;i<n;i++){
    cin>>u>>k;
    if(max<k) max=k;
    for(int j=0;j<k;j++){
      cin>>di;
	d[u][j]=di;
    }
  }

  q.push(1);

  int a;
  while(!q.empty()){
 a=q.front();
    for(int i=0;i<=max;i++){

      if( d[a][i]>1 && g[d[a][i]]==0){
	g[d[a][i]]=1;
	q.push(d[a][i]);
	 c[d[a][i]]=c[a]+1;
      }
    }
      q.pop();
  }
  for(int i=1;i<=n;i++) cout<<i<<" "<<c[i]<<endl;
  return 0;
}