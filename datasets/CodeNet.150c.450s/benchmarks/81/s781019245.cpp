#include <queue>
#include <cmath>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
int n, m;
const int max_n = 15;
const int INF = 0x3f3f3f3f;

/*********************************************************

int dis[max_n][max_n];
void floyd(int m){
    for(int k = 0; k <= m; ++k)
        for(int i = 0; i <= m; ++i)
            for(int j = 0; j <= m; ++j)
                dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
}

*********************************************************/
/*********************************************************
//bool vis[max_n];
//int d[max_n];
void dijkstra(int s){
    memset(vis, false, sizeof(vis));
    memset(d,INF, sizeof(d));
    d[s] = 0;
    while(1){
        int index = -1;
        for(int j = 0; j <= m; ++j)
            if(!vis[j] && (index == -1 || d[j] < d[index])) index = j;
        if(index == -1) break;
        vis[index] = true;
        for(int j = 0; j <= m; ++j)
            d[j] = min(d[j], d[index] + dis[index][j]);
    }
}

*********************************************************/

int d[max_n];
bool vis[max_n];
int dis[max_n][max_n];
void spfa(int s){
    memset(d, INF, sizeof(d));
    memset(vis, false, sizeof(vis));
    vis[s] = true;
    d[s] = 0;
    queue<int> que;
    que.push(s);
    while(!que.empty()){
        int index = que.front();
        que.pop();
        vis[index] = false;
        for(int i = 0; i <= m; ++i)
            if(d[i] > d[index] + dis[index][i]){
                d[i] = d[index] + dis[index][i];
                if(!vis[i]) que.push(i), vis[i] = true;
            }
    }
}

/*********************************************************

//int d[max_n];
struct e{int from, to, cost;}p[max_n];
void bellman(int s){
    memset(d, INF, sizeof(d));
    d[s] = 0;
    while(true){
        bool update = false;
        for(int i = 0; i < n; ++i){
            if(d[p[i].from] != INF && d[p[i].to] < d[p[i].from] + p[i].cost)
                d[p[i].to] = d[p[i].from] + p[i].cost, update = true;
        }
        if(!update) break;
    }
}

*********************************************************/

int main(){
    ios::sync_with_stdio(false);
    while(cin >> n && n){
        for(int i = 0; i < max_n; ++i) fill(dis[i], dis[i] + max_n, INF), dis[i][i] = 0;
        m = 0;
        while(n--){
            int x, y, d;
            cin >> x >> y >> d;
            //cin >> p[i].from >> p[i].to >> p[i].cost;
            m = max(m, max(x, y));
            dis[x][y] = dis[y][x] = d;
        }
        //floyd(m);
        int ans = INF, index = 0;
        for(int i = 0; i <= m; ++i){
            //dijkstra(i);
            spfa(i);
            int temp = 0;
            for(int j = 0; j <= m; ++j) temp += d[j];
            if(temp < ans) ans = temp, index = i;
        }
        cout << index << " " << ans << endl;
    }
    return 0;
}