#include <iostream>
#include <stack>
using namespace std;
static const int MAX_V = 100;
static const int INF = 10000000;
int cost[MAX_V][MAX_V];
bool wasUsed[MAX_V];
int mincost[MAX_V];
//n???????????°
int n;

int prim(){
    for(int i=0;i<n;i++){
        wasUsed[i] = false;
        mincost[i] = INF;
    }
    mincost[0] = 0;
    int res = 0;
    while(true){
        int v = -1;
        for(int u =0;u<n;u++){
            if(!wasUsed[u] && (v==-1||mincost[u] < mincost[v]))
               v = u;
        }
        if(v==-1) break;
        wasUsed[v] = true;
        res += mincost[v];
        
        for(int u=0;u<n;u++)
            mincost[u] = min(mincost[u],cost[v][u]);
    }
    return res;
}

int main(int argc, const char * argv[]) {
    cin >> n;
    
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            int a;
            cin >> a;
            if(a == -1) a = INF;
            cost[i][j] = a;
        }
    
    cout << prim() << endl;
    return 0;
}