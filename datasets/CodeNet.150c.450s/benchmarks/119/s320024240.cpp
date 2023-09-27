#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define loop(i,x,n) for(int i=(x);i<(n);i++)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define ub upper_bound
#define lb lower_bound
#define int long long
using namespace std;
const int MOD=1000000007;
const int INF=1000000009;

int dx[8]={1,0,-1,0,1,-1,-1,1};
int dy[8]={0,1,0,-1,1,1,-1,-1};
int h,w;
int MAP[100][100];

int bfs(int y,int x){
  rep(i,8){
    int ny=y+dy[i];
    int nx=x+dx[i];
    if(nx>=0&&ny>=0&&nx<w&&ny<h&&MAP[ny][nx]==1){
      MAP[ny][nx]=0;
      bfs(ny,nx);
    }
  }
  return 1;
}

signed main(){
  while(cin>>w>>h,w){
    rep(i,h)rep(j,w)cin>>MAP[i][j];
    int ans=0;
    rep(i,h)rep(j,w){
      if(MAP[i][j]==1)ans+=bfs(i,j);
    }
    cout<<ans<<endl;
  }
  return 0;
}