#include <iostream>
#include <climits>
using namespace std;
#define	int long long
const int INF=1e18;
const int MAX_V=2000;
int v,g[MAX_V][MAX_V],r;
void warshall(){
  for(int k=0;k<v;k++)
    for(int i=0;i<v;i++)
      for(int j=0;j<v;j++) g[i][j]=min(g[i][j],g[i][k]+g[k][j]);
}
signed main(){
  int e;
  cin>>v>>e;
  for(int i=0;i<v;i++) for(int j=0;j<v;j++) g[i][j]=i==j?0:INF;
  for(int i=0,a,b,c;i<e&&cin>>a>>b>>c;i++) g[a][b]=c;
  warshall();
  //for(int i=0;i<v;i++) for(int j=0;j<v;j++) if(INF/2<g[i][j]&&g[i][j]<INF) r++;                                              
  for(int i=0;i<v;i++) if(g[i][i]) r++;
  if(r){
    cout<<"NEGATIVE CYCLE"<<endl;
    return 0;
  }
  for(int i=0;i<v;i++){
    for(int j=0;j<v;j++){
      if(j) cout<<" ";
      if(g[i][j]>=INF/2) cout<<"INF";
      else cout<<g[i][j];
    }
    cout<<endl;
  }
  return 0;
}