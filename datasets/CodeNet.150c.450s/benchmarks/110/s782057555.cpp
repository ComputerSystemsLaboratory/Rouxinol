#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <iomanip>
#include <cassert>
using namespace std;

#define GET_ARG(a,b,c,F,...) F
#define REP3(i,s,e) for (i = s; i <= e; i++)
#define REP2(i,n) REP3 (i,0,(int)(n)-1)
#define REP(...) GET_ARG (__VA_ARGS__,REP3,REP2) (__VA_ARGS__)
#define RREP3(i,s,e) for (i = s; i >= e; i--)
#define RREP2(i,n) RREP3 (i,(int)(n)-1,0)
#define RREP(...) GET_ARG (__VA_ARGS__,RREP3,RREP2) (__VA_ARGS__)
#define DEBUG(x) cerr << #x ": " << x << endl

typedef long long ll;

constexpr int INF = 1e8;
constexpr int MOD = 1e9+7;

string field[1000];
int dist[1000][1000];
int dxy[] = {0,1,0,-1};
int ex[9], ey[9];

int main(void) {
    int i, j, k, h, w, n;
    cin >> h >> w >> n;
    REP (i,h) cin >> field[i];
    queue<pair<int,int>> q;
    REP (i,h) REP (j,w) {
        dist[i][j] = INF;
        if (field[i][j] == 'S') {
            q.push(make_pair(i,j));
            dist[i][j] = 0;
        }
        else if ('1' <= field[i][j] && field[i][j] <= '9') {
            int x = field[i][j] - '1';
            ey[x] = i; ex[x] = j;
        }
    }
    int ans = 0;
    REP (k,n) {
        while (!q.empty()) {
            int y = q.front().first;
            int x = q.front().second;
            q.pop();
            REP (i,4) {
                int ny = y + dxy[i];
                int nx = x + dxy[(i+1)%4];
                if (ny < 0 || ny >= h || nx < 0 || nx >= w) continue;
                if (field[ny][nx] != 'X' && dist[ny][nx] > dist[y][x] + 1) {
                    dist[ny][nx] = dist[y][x] + 1;
                    q.push(make_pair(ny,nx));
                }
            }
        }
        ans += dist[ey[k]][ex[k]];
        q.push(make_pair(ey[k],ex[k]));
        REP (i,h) REP (j,w) dist[i][j] = INF;
        dist[ey[k]][ex[k]] = 0;
    }
    cout << ans << endl;
    return 0;
}