#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <cmath>
#include <random>
#include <climits>
#include <set>
#include <deque>
#include <queue>
#include <bitset>
#include <stack>

#define mod 1000000007
#define INF 1000000000
#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOREACH(i, v) for(auto i = v.begin(); i != v.end(); i++)
#define P pair<int, int>

using namespace std;
using ll = long long;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int dx2[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy2[] = {0, -1, -1, -1, 0, 1, 1, 1};

struct edge {int from, to, cost; };

int bfs(int sx, int sy, int gx, int gy, int N, int M){
    int distance[N][M];
    queue<P> que;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            distance[i][j] = -1;
        }
    }
    que.push(P(sx, sy));
    distance[sx][sy] = 0;

    while(que.size()){
        P p = que.front(); que.pop();
        if(p.first == gx && p.second == gy) break;  //ゴールなら探索終了
        for(int i = 0; i < 4; i++){
            int nx = p.first + dx[i], ny = p.second + dy[i];    //nx, nyは移動後の点
            if(0 <= nx && nx < N && 0 <= ny && ny < M && /*s[nx][ny] != '#' &&*/ distance[nx][ny] == -1){
                que.push(P(nx, ny));
                distance[nx][ny] = distance[p.first][p.second] + 1;
            }
        }
    }
    return distance[gx][gy];
}

void solve(){
    int V, E, r;
    cin >> V >> E >> r;
    edge es[E];
    REP(i, E) cin >> es[i].from >> es[i].to >> es[i].cost;

    int d[V];
    REP(i, V) d[i] = INF;
    d[r] = 0;
    while(true){
        bool update = false;
        for(int i = 0; i < E; i++){
            edge e = es[i];
            if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost){
                d[e.to] = d[e.from] + e.cost;
                update = true;
            }
        }
        if(!update) break;
    }

    for(int i = 0; i < V; i++){
        if(d[i] != INF) cout << d[i] << endl;
        else cout << "INF" << endl;
    }
}

int main(){
    solve();
    return 0;
}

