#include<iostream>
using namespace std;
static const int N = 100;
static const int INF = 10000000;
static const int WHITE =0;
static const int GRAY =1;
static const int BLACK =2;

int n,A[N][N]; //隣接行列

void dijkstra(){
    int min ;
    int d[N],color[N];

    for(int i =0;i<n;i++){
        d[i] = INF;
        color[i] =WHITE;
    }
    d[0] =0;
    color[0] = GRAY;
    while(1){
        min = INF;
        int u = -1;
        for(int i =0;i <n;i++){
            if(min > d[i] && color[i] != BLACK){
                u = i;
                min  = d[i];
            }
        }
        if(u ==-1) break;
        color[u] = BLACK;
        for(int v =0;v<n;v++){
            if(color[v] != BLACK && A[u][v] != INF){
                if(d[v] > d[u] + A[u][v]){
                    d[v] = d[u] + A[u][v];
                    color[v] =GRAY; 
                }
            }
        }
    }

    for(int i = 0;i<n;i++){
        cout<< i << " "<< (d[i] == INF ? -1 :d[i]) << endl; 
    }
}

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            A[i][j] = INF;
        }
    }
    
    int k,c,u,v;
    for(int i =0;i<n;i++){
        cin >> u >> k;
        for(int j =0;j<k;j++){
            cin >> v >> c;
            A[u][v] = c;
        }
    }

    dijkstra();

    return 0;
}
