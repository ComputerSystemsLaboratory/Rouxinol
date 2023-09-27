#include <bits/stdc++.h>
#define r(i,n) for(int i=0;i<n;i++)
#define INF 2000000000
using namespace std;
int main(){
  int v,n;
  cin>>v>>n;
  long long a[v][v];
  r(i,v)r(j,v)a[i][j]=i==j?0:INF;
  r(i,n){int x,y,w;
    cin>>x>>y>>w;
    a[x][y]=w;
  }
  r(k,v)r(i,v)r(j,v)if(a[i][k]!=INF&&a[k][j]!=INF)a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
  r(i,v)if(a[i][i]<0){cout<<"NEGATIVE CYCLE"<<endl;return 0;}
  r(i,v){r(j,v){
      if(j)cout<<' ';
      if(a[i][j]>=INF) cout<<"INF";
      else cout<<a[i][j];
    }
    cout<<endl;
  }
}