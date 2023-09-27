#include<bits/stdc++.h>
using namespace std;
vector<int> color;//0:白1:灰2:黒
vector<vector<int>> M;
vector<int> d;
vector<int> p;
typedef long long int Int;

const int INF = 10000000;
int n;
void dijkstra(int s){
    
    for(int i=0;i<n;i++){
        d[i] = INF;
    }
    d[s] = 0;
    p[s] = -1;

    while(1){
        int u=-1;
        int mincost = INF;
        for(int i=0;i<n;i++){
            if(color[i]!=2&&d[i]<mincost){
                mincost = d[i];
                u = i;
            }
        }
        if(mincost == INF) break;
        color[u] = 2;
        for(int v=0;v<n;v++){
            if(color[v]!=2&&M[u][v]!=INF){
                if(d[u]+M[u][v]<d[v]){
                    d[v] = d[u]+M[u][v];
                    p[v] = u;
                    color[v] = 1;
                }
            }
        }
    }
}

int main(){
    cin >> n;
    color.assign(n,0);//0:白1:灰2:黒
    M.assign(n,vector<int>(n,INF));
    d.resize(n);
    p.resize(n);
    for(int i=0;i<n;i++){
        int id,k;cin >> id >> k;
        for(int j=0;j<k;j++){
            int v,cost;cin >> v >> cost;
            M[id][v] = cost;
        }
    }
    dijkstra(0);
    for(int i=0;i<n;i++){
        cout << i << " ";
        cout << d[i] << endl;
    }
}
