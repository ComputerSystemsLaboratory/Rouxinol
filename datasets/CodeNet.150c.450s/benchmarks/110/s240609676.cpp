#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vvi vector<vector<int>>
#define vec vector
#define pq priority_queue
#define all(v) (v).begin(), (v).end()
#define uniqueV(x) sort(x.begin(), x.end()); x.erase(unique(x.begin(), x.end()), x.end());
#define rep(i, n) for (int (i) = (0); (i) < (n); ++(i))
#define repp(i, m, n) for (int (i) = (m); (i) < (n); ++(i))
#define debug(x) cerr << #x << ": " << x << endl;
#define debug2(x, y) cerr<<"("<<#x<<", "<<#y<<") = "<<"("<<x<<", "<<y<<")"<<endl;
#define debug3(x, y, z) cerr<<"("<<#x<<", "<<#y<<", "<<#z<<") = "<<"("<<x<<", "<<y<<", "<<z<<")"<<endl;
#define debugB(x, y) cerr<<#x<<": "<<bitset<y>(x) << endl;
#define line() cerr << "---------------" << endl;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, -1, 1};

template<typename T>
void printA(vector<T> &printArray, char between = ' ') {
   int paSize = printArray.size();
   for (int i = 0; i < paSize; i++) { cerr << printArray[i] << between;}
   if (between != '\n') {cerr << endl;}
}

// ------------------------------------------------------------------------------------------

struct P {
   int y, x;
};

int H, W, N;
int sy, sx;
char B[1111][1111];
int dist[1111][1111];
P c[11];
const int INF = 1e8;

void print() {
   rep (i, H) {
      rep (j, W) {
         if (dist[i][j] == INF) {
            printf("%3c", 'I');
         } else {
            printf("%3d", dist[i][j]);
         }
      }
      puts("");
   }
}

int bfs(int y, int x, int ty, int tx) {
   rep (i, H) { rep (j, W) { dist[i][j] = INF; } }
   queue<P> que;
   que.push(P{y, x});
   dist[y][x] = 0;
   while (que.size()) {
      P p = que.front(); que.pop();
      if (p.y == ty && p.x == tx) break;
      rep (i, 4) {
         int ny = p.y + dy[i], nx = p.x + dx[i];
         if (ny < 0 || ny >= H || nx < 0 || nx >= W || B[ny][nx] == 'X' || dist[ny][nx] != INF) continue;
         que.push(P{ny, nx});
         dist[ny][nx] = dist[p.y][p.x] + 1;
      }
   }
   return dist[ty][tx];
}

int main() {
   cin >> H >> W >> N;
   rep (i, H) {
      rep (j, W) {
         cin >> B[i][j];
         if (isdigit(B[i][j])) {
            c[B[i][j]-'0'] = P{i, j};
         }
         if (B[i][j] == 'S') {
            sy = i, sx = j;
         }
      }
   }
   c[0] = P{sy, sx};

   ll sum = 0;
   for (int i = 1; i <= N; i++) {
      // printf("(%d, %d) - (%d, %d)\n", c[i].y, c[i].x, c[i-1].y, c[i-1].x);
      // sum += abs(dist[c[i].y][c[i].x] - dist[c[i-1].y][c[i-1].x]);
      int y = c[i-1].y, x = c[i-1].x;
      int ny = c[i].y, nx = c[i].x;
      sum += bfs(y, x, ny, nx);
   }
   cout << sum << endl;

   return 0;
}

