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
#define Y first
#define X second
#define INF 1 << 30
#define EPS 1e-10

typedef pair<int, int> pi;
typedef pair<int, pi> pii;
typedef pair<pi, pi> pipi;
typedef vector<int> vi;
typedef queue<int> qi;
typedef long long ll;

int H, W, N;
char field[1024][1024];
int dy[] = {0,1,0,-1}, dx[] = {1,0,-1,0};

int main(){
  scanf("%d%d%d", &H, &W, &N);
  rep(i, H) scanf("%s", field[i]);

  int x, y;
  rep(i, H) rep(j, W) if(field[i][j] == 'S'){ y = i; x = j; break;}

  map<pi, int>m;
  m[MP(y, x)] = 1;
  queue<pipi>q;
  q.push(MP(MP(1, 0), MP(y, x)));
  while(!q.empty()){
    pipi p = q.front(); q.pop();
    if(field[p.S.Y][p.S.X] == p.F.F + '0'){
      if(p.F.F == N){
	printf("%d\n", p.F.S);
	break;
      }
      m.clear();
      while(!q.empty()) q.pop();
      m[MP(p.S.Y, p.S.X)] = 1;
      p.F.F++;
    }
    rep(d, 4){
      int ny = p.S.Y + dy[d], nx = p.S.X + dx[d];
      int hp = p.F.F, c = p.F.S;
      if(ny < 0 || ny >= H || nx < 0 || nx >= W || field[ny][nx] == 'X' || m.count(MP(ny, nx))) continue;
      m[MP(ny, nx)] = 1;
      q.push(MP(MP(hp, c+1), MP(ny, nx)));
    }
  }
  return 0;
}