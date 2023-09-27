#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); i++)
#define NIL -1
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INF 1 << 21

//ダイクストラ法
void dijkstra(vector<vector<int> > &graph, int n){

    vector<int> cost(n, INF);
    vector<int> color(n, WHITE);

    cost[0] = 0;
    color[0] = GRAY;
    while(1){
        int minv = INF;
        int u = NIL;    //現在地
        rep(i, n){
            if(cost[i] < minv && color[i] != BLACK){
                minv = cost[i];
                u = i;
            }
        }
        if(u == NIL) break;

        color[u] = BLACK;
        rep(j, n){
            if(color[j] != BLACK && graph[u][j] != NIL){
                if(cost[j] > cost[u] + graph[u][j]){
                    cost[j] = cost[u] + graph[u][j];
                    color[j] = GRAY;
                }
            }
        }
    }

    rep(i, n){
        cout << i << " " << cost[i] << endl;
    }
}

int main() {

    int n;
    cin >> n;
    vector<vector<int> > graph(n, vector<int>(n, INF));
    int k, c, u , v;
    rep(i, n){
        cin >> u >> k; //u 頂点  k 隣接リストの個数
        rep(j, k){
            cin >> v;      //隣接リストの番号
            cin >> graph[u][v]; //隣接リストの重み
        }
    }

    dijkstra(graph, n);

    return 0;
} 
