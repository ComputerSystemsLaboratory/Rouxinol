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
char a[20][20];
int cnt; 
int w,h; 
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1}; 
void dfs(int x, int y) {
  a[y][x] = '#';
  cnt++;
  rep(i, 4) {
    int nx=x+dx[i];
    int ny=y+dy[i];
    if(nx<w&&ny<h&&nx>=0&&ny>=0&&a[ny][nx]=='.') dfs(nx, ny);
  }
}

int main () {
  while(true){
    cnt = 0;
    cin>>w>>h;
    if (w==0&& h==0) break;
    int x0,y0;
    rep(i, h) {
      rep(j, w) {
        cin>>a[i][j];
        if(a[i][j]=='@' ) {
          x0=j; y0=i;
          a[i][j]='.';
        }
      } 
    } 
    dfs(x0, y0);
    outl(cnt);
  }
  return 0;
}