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


int d[20][20];
int cost[20][20];
int n;
int numTown;
int t;
void show(){
  for(int i=0;i<t;i++){
    for(int j=0;j<t;j++){
      printf("%10d ",cost[i][j]);
    }
    cout<<endl;
  }
  cout<<endl;
}

void solve(){
  for(int i=0;i<t;i++)for(int j=0;j<t;j++)cost[i][j]=d[i][j];
  for(int k=0;k<t;k++){
    for(int i=0;i<t;i++){
      for(int j=0;j<t;j++){
	if(i==j||i==k||j==k)continue;
	cost[i][j]=cost[j][i]=min(cost[i][j],cost[i][k]+cost[k][j]);
	//	show();
      }
    }
  }
  int ans=INT_MAX;
  int p=0;
  for(int i=0;i<t;i++){
    int sum=0;
    for(int j=0;j<t;j++){
      sum+=cost[i][j];
    }
    if(ans>sum){
      ans=sum;
      p=i;
    }
  }
  cout<<p<<" "<<ans<<endl;

}

int main(void){
  
  while(cin>>n,n){
    t=0;
    for(int i=0;i<22;i++){
      for(int j=0;j<22;j++){
	if(i==j)d[i][j]=0;
	else d[i][j]=10000000;
      }
    }
    for(int i=0;i<n;i++){
      int a,b,c;
      cin>>a>>b>>c;
      d[a][b]=d[b][a]=c;
      t=max(t,max(a+1,b+1));
    }
    solve();
  }
}