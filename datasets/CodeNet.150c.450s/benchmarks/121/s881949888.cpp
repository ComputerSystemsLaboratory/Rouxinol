#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
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

const int inf =1500000000;

char f[100][100];
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
int w,h;
int cnt=0;

void dfs(int x,int y,char tmp) {
  if (x<0||x>=w||y<0||y>=h||f[x][y]!=tmp) return;
   f[x][y]='-';
   rep(i, 4) {
     int nx=x+dx[i],ny=y+dy[i];
     if (f[nx][ny]==tmp) dfs(nx, ny, tmp); 
   }
}

int main () {
  while (true) {
    cin>>h>>w;
    if (w==0&&h==0) break;
    rep(i, h) rep(j, w)  cin>>f[j][i];
    cnt=0;
    rep(i, h){
      rep(j, w) {
        if (f[j][i]!='-') {
          ++cnt;
          dfs(j, i,f[j][i]);
        }
      }
   }
    outl(cnt);
  }
  return 0;
}