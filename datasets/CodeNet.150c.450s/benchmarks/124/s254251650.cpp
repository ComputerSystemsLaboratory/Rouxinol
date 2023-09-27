#include <iostream>
#include <vector>
using namespace std;
#define WHITE 0
#define GRAY 1
#define BLACK 2
static const int INF = 1<<21;
int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int G[n][n];
    int d[n];
    int p[n];
    int color[n];
    for(int i=0;i<n;i++){
        for (int j=0; j<n; j++) {
            G[i][j] = -1;
        }
    }
    for(int i=0;i<n;i++){
        int u,k;
        cin >> u >> k;
        for(int j=0;j<k;j++){
            int v,c;
            cin >> v >> c;
            G[u][v] = c;
        }
    }
    
    for (int i=0; i<n; i++) {
        color[i] = WHITE;
        p[i] = -1;
        d[i] = INF;
    }
    
    while(true){
        d[0] = 0;
        p[0] = 0;//?
        int u;
        int mincost = INF;
        //???????????????????±????
        for(int i=0;i<n;i++){
            if(d[i]<mincost && color[i]!=BLACK){
                mincost = d[i];
                u = i;
            }
        }
        color[u] = BLACK;
        if(mincost==INF) break;//?¶????????????????????????°??±?????£????????¨???
        
        for(int v=0;v<n;v++){
            if(G[u][v] != -1 && d[v]>d[u]+G[u][v]){
               d[v] = d[u] + G[u][v];
               color[v] = GRAY;//??????????????????
               p[v] = u;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout <<  i << " " << d[i] << endl;
    }
    return 0;
}