#include <iostream>
#include <queue>
#define MAX 100
#define INF 2000000
#define WHITE 0
#define GRAY 1
#define BLACK 2

using namespace std;

int n;
int color[MAX+1];
int m[MAX+1][MAX+1];
int d[MAX+1];

void bfs(int s){
    queue<int> q;
    int u, v;
    for(u = 1; u <= n; u++){
        color[u] = WHITE;
        d[u] = INF;
    }
    color[s] = GRAY;
    d[s] = 0;
    q.push(s);
    while(!q.empty()){
        u = q.front();
        q.pop();
        for(v = 1; v <= n; v++){
            if(m[u][v] == 0 || d[v] != INF) continue;
            if(color[v] == WHITE){
                color[v] = GRAY;
                d[v] = d[u] + 1;
                q.push(v);
            }
        }
        color[u] = BLACK;
    }
}

int main(){
    int k, u, v, i, j;
    
    cin >> n;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++) m[i][j] = 0;
    }

    for(i = 1; i <= n; i++){
        cin >> u >> k;
        for(j = 1; j <= k; j++){
            cin >> v;
            m[u][v] = 1;
        }
    }

    bfs(1);
    
    for(i = 1; i <= n; i++){
        cout << i << " ";
        if(d[i] == INF) cout << -1 << endl;
        else cout << d[i] << endl;
    }
    
    return 0;
}
