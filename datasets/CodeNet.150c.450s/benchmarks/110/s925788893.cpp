#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int INF = 1000000000;
#define REP(i,s,n) for(int i=(int)(s);i<(int)(n);i++)
#define rep(i,n) REP(i, 0, n)
typedef pair <int, int> P;
const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
char f[1001][1001];
int vd[1001][1001];
int esax[10], esay[10];
int h, w, n;
int bfs(int sx, int sy, int gx, int gy){
    rep(i, h + 1) rep(j, w + 1) vd[i][j] = INF;
    queue <P> opt;
    opt.push(P(sx, sy));
    vd[sy][sx] = 0;
    while(opt.size()){
        P p = opt.front(); opt.pop();
        if(p.first == gx && p.second == gy)
          return vd[gy][gx];
        rep(i, 4){
            int nx = p.first + dx[i], ny = p.second + dy[i];
            if(0 <= nx && 0 <= ny && vd[ny][nx] == INF && f[ny][nx] != 'X'){
                opt.push(P(nx, ny));
                vd[ny][nx] = vd[p.second][p.first] + 1;
            }
        }
    }
}
int main(){
    cin >> h >> w >> n;
    rep(i, h) rep(j, w){
        cin >> f[i][j];
        if(f[i][j] == 'S')
          esax[0] = j, esay[0] = i;
        if('1' <= f[i][j] && f[i][j] <= '9'){
            int num = f[i][j] - '0';
            esax[num] = j, esay[num] = i;
        }
    }
    rep(j, w) f[h][j] = 'X';
    rep(i, h) f[i][w] = 'X';
    int ans = 0;
    rep(i, n)
      ans += bfs(esax[i], esay[i], esax[i + 1], esay[i + 1]);
    cout << ans << endl;
    return 0;
}