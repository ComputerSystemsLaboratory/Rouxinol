#include <bits/stdc++.h>

#define NIL -2
#define INF 1000000001

using namespace std;
static const int BLK = 2;
static const int GRY = 1;
static const int WHT = 0;

void dijkstra(  const   vector<vector<int> > &weight_matrix, 
                        vector<int> &color,
                        vector<int> &minpath,
                        vector<int> &parent)
{
    int n = (int)weight_matrix.size();
    int u,v;
    int mincost;
    while(true){
        mincost = INF;
        for(int i = 0;i < n;i++){
            if(color[i] != BLK && minpath[i] < mincost){
                mincost = minpath[i];
                u = i;
            }
        }
        if(mincost == INF) break;
        color[u] = BLK;

        for(int v = 0; v < n;v++){
            if(color[v] != BLK && weight_matrix[u][v] < INF){
                if( minpath[v] > minpath[u] + weight_matrix[u][v]){
                    minpath[v] = minpath[u] + weight_matrix[u][v];
                    parent[v] = u;
                    color[v] = GRY;
                }
            }
            
        }
    }
    

}

int main(){
    int mat_size;
    int node, deg;
    int to,weight;
    int temp;
    int cost = 0;

    scanf("%d",&mat_size);
    vector<vector<int> > weight_matrix(mat_size,vector<int>(mat_size,INF));
    vector<int> color(mat_size,WHT);
    vector<int> minpath(mat_size,INF);
    vector<int> parent(mat_size,-1);

    for(int i = 0;i < mat_size;i++){
        scanf("%d %d",&node,&deg);
        for(int j = 0;j < deg;j++){
            scanf("%d %d", &to, &weight);
            weight_matrix[node][to] = weight;
        }
    }
    minpath[0] = 0;
    dijkstra(weight_matrix,color,minpath,parent);
    for(int i = 0; i < mat_size;i++){
        printf("%d %d\n",i,minpath[i]);
    }

    return 0;   
}

