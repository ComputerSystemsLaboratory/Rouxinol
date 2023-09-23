#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <algorithm>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <utility>
using namespace std;

typedef long long ll;

#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n) REP(i,0,n)

int m;
int d[22][22];
void init(){
  for(int i=0;i<22;i++){
    for(int j=0;j<22;j++){
      if(i==j)d[i][j]=0;
      else d[i][j]=100000000;
    }
  }
}
void solve(){
  for(int k=0;k<m;k++){
    for(int i=0;i<m;i++){
      for(int j=0;j<m;j++){
	d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
      }
    }
  }
  int ans=INT_MAX,p=0;
  for(int i=0;i<m;i++){
    int sum=0;
    for(int j=0;j<m;j++)sum+=d[i][j];
    if(ans>sum){
      ans=sum;p=i;
    }
  }
  cout<<p<<" "<<ans<<endl;
}

int main(void){
  int n;
  while(cin>>n,n){
    m=0;
    init();
    for(int i=0;i<n;i++){
      int a,b,c;
      cin>>a>>b>>c;
      d[a][b]=d[b][a]=c;
      m=max(m,max(a+1,b+1));      
    }
    solve();
  }
}