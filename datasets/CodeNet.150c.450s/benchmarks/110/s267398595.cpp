#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef pair<int, int> P;
typedef pair<ll, ll> Pll;
typedef vector<int> Vi;
typedef tuple<int, int, int> T;
#define FOR(i,s,x) for(int i=s;i<(int)(x);i++)
#define REP(i,x) FOR(i,0,x)
#define ALL(c) c.begin(), c.end()
#define DUMP( x ) cerr << #x << " = " << ( x ) << endl

const int INF = 1<<29;
const int dr[4] = {-1, 0, 1, 0};
const int dc[4] = {0, 1, 0, -1};

int H, W, N;
int D[16];
string town[1024];
int dist[1024][1024];
P factory[16];

inline bool in(int r, int c) {
  return 0 <= r && r < H && 0 <= c && c < W;
}

int main() {
  // use scanf in CodeForces!
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  cin >> H >> W >> N;
  REP(i, H) cin >> town[i];
  int sr = 0, sc = 0;
  REP(i, H) REP(j, W) {
    if (town[i][j] == 'S') {
      sr = i, sc = j;
      break;
    }
  }

  int ans = 0;
  REP(i, N) {
    REP(r, H) REP(c, W) dist[r][c] = -1;
    queue<T> que;
    que.push(T(sr, sc, 0));
    while (!que.empty()) {
      int r, c, d;
      tie(r, c, d) = que.front(); que.pop();
      if (dist[r][c] != -1) continue;
      dist[r][c] = d;
      if (town[r][c] != 'S' && town[r][c] != '.' && town[r][c] != 'X' && town[r][c] - '0' == i+1) {
	ans += d;
	sr = r, sc = c;
	break;
      }
      REP(j, 4) {
	int nr = r + dr[j], nc = c + dc[j];
	if (in(nr, nc) && town[nr][nc] != 'X' && dist[nr][nc] == -1) {
	  que.push(T(nr, nc, d+1));
	}
      }
    }
  }

  cout << ans << endl;      
  return 0;
}