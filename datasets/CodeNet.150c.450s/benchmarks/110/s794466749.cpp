#include <algorithm>
#include <cstdio>
#include <iostream>
#include <queue>
#include <string>
#include <utility>
#include <vector>
#include <map>
#define rep(i, n) for (int i=0; i<n; ++i)
#define FOR(i, a, b) for (int i=a; i<b; ++i)
#define pb(x) push_back(x)
#define ll long long
#define ul unsigned long long
#define dbg(x) cout  << #x << " : " << (x) << endl
#define out(x) cout << (x)
#define outl(x) cout << (x) << endl
#define int(n); int n; cin >> n;
#define long(n); long long n; cin >> n;
#define dbl(f); double f; cin >> f;
#define s(s); string s; cin >> s;
#define into(a, n) for (int i = 0; i < n; ++i) cin >> a[i]
using namespace std;

const int inf =1000000000;

int h,w,n;
char f[1000][1000];
int d[1000][1000];
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
int gx[10],gy[10];
typedef pair<int, int> P;

int bfs(int sx, int sy, int l) {
  queue<P> q; 
  rep(i, h) rep(j, w) d[j][i]=inf;
  q.push(P(sx, sy));
  d[sx][sy]=0;
  while(q.size()) {
    P p=q.front(); q.pop();
    if (p.first==gx[l]&&p.second==gy[l]) break;
    rep(i, 4) {
      int nx=p.first+dx[i], ny=p.second+dy[i];
      if (nx>=0&&n<w&&ny>=0&&ny<h&&f[nx][ny]!='X'&&d[nx][ny]==inf) {
        q.push(P(nx,ny));
        d[nx][ny]=d[p.first][p.second]+1;
      }
     }
  }
  return d[gx[l]][gy[l]];
} 

int main () {
  cin>>h>>w>>n;
  ll cnt=0;
  rep(i,h) {
    rep(j,w) {
      cin>>f[j][i];
      if (f[j][i]=='S') {gx[0]=j;gy[0]=i;f[j][i]='.';}
      if (f[j][i]!='.'&&f[j][i]!='X') {
        gx[(int)(f[j][i]-'0')]=j;
        gy[(int)(f[j][i]-'0')]=i;
        f[j][i]='.';
      }
    }
  }
  rep(i, n) {
    cnt+=bfs(gx[i], gy[i], i+1);
  }
  outl(cnt);
  return 0;
}