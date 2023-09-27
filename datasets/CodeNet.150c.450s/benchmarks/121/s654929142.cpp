#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;

#define rep(i,j) REP((i), 0, (j))
#define REP(i,j,k) for(int i=(j);(i)<(k);++i)
#define BW(a,x,b) ((a)<=(x)&&(x)<=(b))
#define ALL(v) (v).begin(), (v).end()
#define LENGTHOF(x) (sizeof(x) / sizeof(*(x)))
#define AFILL(a, b) fill((int*)a, (int*)(a + LENGTHOF(a)), b)
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define INF 1 << 30
#define EPS 1e-10

typedef pair<int, int> pi;
typedef pair<int, pi> pii;
typedef vector<int> vi;
typedef queue<int> qi;
typedef long long ll;

int H, W;
char g[128][128];
int dy[] = {-1,0,1,0}, dx[] = {0,-1,0,1};

void dfs(int y, int x, char f){
  g[y][x] = '.';
  rep(d, 4){
    int ny = y+dy[d], nx = x+dx[d];
    if(ny < 0 || ny >= H || nx < 0 || nx >= W || g[ny][nx] != f) continue;
    dfs(ny, nx, f);
  }
  return;
}

int main(){
  while(scanf("%d%d", &H, &W) && H+W){
    rep(i, H) scanf("%s", g[i]);
    
    int res = 0;
    rep(i, H) rep(j, W){
      if(g[i][j] == '.') continue;
      dfs(i, j, g[i][j]);
      res++;
    }
    
    printf("%d\n", res);
  }
  return 0;
}