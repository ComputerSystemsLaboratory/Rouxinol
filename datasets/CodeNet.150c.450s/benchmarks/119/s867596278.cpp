#include<bits/stdc++.h>
using namespace std;
#define inf 1e9
#define ll long long
#define ull unsigned long long
#define M 1000000007
#define P pair<int,int>
#define PLL pair<ll,ll>
#define FOR(i,m,n) for(int i=m;i<n;i++)
#define RFOR(i,m,n) for(int i=m;i>=n;i--)
#define rep(i,n) FOR(i,0,n)
#define rrep(i,n) RFOR(i,n,0)
#define all(a) a.begin(),a.end()
const int vx[4] = {0,1,0,-1};
const int vy[4] = {1,0,-1,0};
#define PI 3.14159265


void f(int w,int h){
  int map[100][100]={};
  bool c[100][100]={};

  rep(i,h){
    rep(j,w){
      cin>>map[i][j];
    }
  }

  int ans=0;
  rep(i,h){
    rep(j,w){
      if(map[i][j]&&!c[i][j]){
        
        queue<P> q;
        q.push(P(i,j));
        while(q.size()){
          P p=q.front(); q.pop();
          int a=p.first,b=p.second;
          for(int k=-1;k<2;k++){
            for(int l=-1;l<2;l++){
              int y=a+k;
              int x=b+l;
              if(0<=x&&x<w&&0<=y&&y<h)
              if(map[y][x]&&!c[y][x]){
                c[y][x]=true;
                q.push(P(y,x));
              }
            }
          }
        }
        ans++;
      }
    }
  }

  cout<<ans<<endl;
}

int main(){
  int w,h;
  while(1){
    cin>>w>>h;
    if(w==0) break;
    f(w,h);
  }

  return 0;
}
