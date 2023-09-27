#include <iostream>
using namespace std;
static const int SIZE = 100;
static const int INF = 1e9+7;
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;
static const int NIL = -1;

int n;
int G[SIZE][SIZE],d[SIZE];

void dijkstra(){
    int u,mincost;
    int color[SIZE];

    for(int i=0; i<n; i++){
        d[i] = INF;
        color[i] = WHITE;
    }

    d[0] = 0;
    color[0] = GRAY;

    while(1){
        mincost = INF;
        u = NIL;

        for(int i=0; i<n; i++){
            if(color[i] != BLACK && d[i] < mincost){
                mincost = d[i];
                u = i;
            }
        }

        if(u == NIL) break;

        color[u] = BLACK;

        for(int v=0; v<n; v++){
            if(color[v] != BLACK && G[u][v] != INF){
                if(G[u][v] + d[u] < d[v]){
                    d[v] = G[u][v] + d[u];
                    color[v] = GRAY;
                }
            }
        }
    }
}

int main(){
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            G[i][j] = INF;
        }
    }

    for(int i=0; i<n; i++){
        int u,k;
        cin>>u>>k;
        for(int j=0; j<k; j++){
            int v,c;
            cin>>v>>c;
            G[u][v] = c;
        }
    }

    dijkstra();

    for(int i=0; i<n; i++){
        cout<<i<<" ";
        if(d[i] != INF) cout<<d[i]<<endl;
        else cout<<-1<<endl;
    }

    return 0;
}
