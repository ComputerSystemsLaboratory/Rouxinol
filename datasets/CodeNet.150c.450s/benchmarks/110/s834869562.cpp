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
typedef pair<pi, int> pii;
typedef pair<pi, pi> pipi;
typedef vector<int> vi;
typedef queue<int> qi;
typedef long long ll;

int H, W, N;
char g[1024][1024];
int dy[] = {0,-1,0,1}, dx[] = {-1,0,1,0};

int main(){
  scanf("%d%d%d", &H, &W, &N);
  rep(i, H) scanf("%s", g[i]);

  int y, x;
  rep(i, H) rep(j, W) if(g[i][j] == 'S') y = i, x = j;

  queue<pipi>q;
  q.push(MP(MP(y, x), MP(1, 0))); // y, x, hp, time
  map<pi, int>m;
  m[MP(y, x)] = 1;

  while(!q.empty()){
    pipi p = q.front(); q.pop();

    int hp = p.S.F;
    if(g[p.F.F][p.F.S] - '0' == hp){
      while(!q.empty()) q.pop();
      m.clear();
      hp++;
    }

    if(hp > N){
      printf("%d\n", p.S.S);
      break;
    }

    rep(d, 4){
      int ny = p.F.F+dy[d], nx = p.F.S+dx[d];
      if(ny < 0 || ny >= H || nx < 0 || nx >= W || g[ny][nx] == 'X' || m.find(MP(ny, nx)) != m.end()) continue;
      q.push(MP(MP(ny, nx), MP(hp, p.S.S+1)));
      m[MP(ny, nx)] = 1;
    }
  }
  return 0;
}