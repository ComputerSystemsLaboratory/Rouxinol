#include <iostream>
using namespace std;
#define MAX 100
#define INFTY 1<<22
#define WHITE 0
#define GRAY 1
#define BLACK 2

int gMatrix[MAX][MAX];

void dijkstra(int n){
    // 最小の重みを記録する
    int minV;
    int weight[MAX];
    int color[MAX];
    
    for(int i = 0;i < n;++i){
        weight[i] = INFTY;
        color[i] = WHITE;
    }
    // 始点
    weight[0] = 0;
    color[0] = GRAY;
    
    while(1){
        minV = INFTY;
        // 頂点
        int u = -1;
        for(int i = 0;i < n;++i){
            if(minV > weight[i] && color[i] != BLACK){
                u = i;
                minV = weight[i];
            }
        }
        if(u == -1)break;
        color[u] = BLACK;
        
        for(int v = 0;v < n;++v){
            if(color[v] != BLACK && gMatrix[u][v] != INFTY){
                if(weight[v] > weight[u] + gMatrix[u][v]){
                    weight[v] = weight[u] + gMatrix[u][v];
                    color[v] = GRAY;
                }
            }
        }
    }
    // 出力
    for(int i = 0;i < n;++i){
        cout << i << " " << ( weight[i] == INFTY ? -1 : weight[i] ) << endl;
    }
}

int main(){
    int n;
    cin >> n;
    
    for(int i = 0;i < n;++i){
        for(int j = 0;j < n;++j){
            gMatrix[i][j] = INFTY;
        }
    }
    
    int k,c,u,v;
    for(int i = 0;i < n;++i){
        cin >> u >> k;
        for(int j = 0;j < k;++j){
            cin >> v >> c;
            gMatrix[u][v] = c;
        }
    }
    dijkstra(n);
    return 0;
}
