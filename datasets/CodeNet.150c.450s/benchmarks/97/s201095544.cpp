#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
#include<queue>
#include<map>
#include<string>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;

#define REP(i,a,n) for(int i = a ; i < n ; i++)
#define rep(i,n) REP(i,0,n)

typedef long long ll;

int N;
int n[202],d[202];
int dx[] = {-1,0,1,0};
int dy[] = {0,-1,0,1};

void solve(){
  int maxx=0,maxy=0,minx=0,miny=0;
  int x[202],y[202];
  x[0] = y[0] = 0;

  rep(i,N-1){
    x[i+1] = x[n[i]] + dx[d[i]];
    y[i+1] = y[n[i]] + dy[d[i]];

    if(x[i+1] > maxx) maxx = x[i+1];
    if(x[i+1] < minx) minx = x[i+1];
    if(y[i+1] > maxy) maxy = y[i+1];
    if(y[i+1] < miny) miny = y[i+1];
  }

  cout<<maxx-minx+1<<" "<<maxy-miny+1<<endl;
}

int main(){
  while(cin>>N,N){
    rep(i,N-1){
      cin>>n[i]>>d[i];
    }
    solve();
  }
}