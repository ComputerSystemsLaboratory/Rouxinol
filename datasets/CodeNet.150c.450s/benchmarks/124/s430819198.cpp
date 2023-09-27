//Dijkstra
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
typedef pair<int, int> P;
int n, dis[101], n_left;
vector< vector<P> > G(101);
priority_queue< P, vector<P>, greater<P> > heap;
bool visited[101];

int main(){
    int u, v, k, w;

    scanf("%d", &n);
    n_left = n;
    for(int i=0; i<n; i++){
        scanf("%d %d", &u, &k);
        for(int j=0; j<k; j++){
            scanf("%d %d", &v, &w);
            G[u].push_back(P(w, v));
        }
    }
    memset(visited, 0, sizeof(visited));
    memset(dis, 127, sizeof(dis));

    dis[0] = 0;
    heap.push(P(0, 0));
    while(!heap.empty() && n_left>0){
        P top = heap.top();
        heap.pop();
        if(!visited[top.second]){
            u = top.second;
            visited[u] = true;
            --n_left;
            for(int i=0; i<G[u].size(); i++){
                v = G[u][i].second;
                w = dis[u] + G[u][i].first;
                if(!visited[v] && w < dis[v]){
                    heap.push(P(w, v));
                    dis[v] = w;
                }
            }
        }
    } 
    for(int i=0; i<n; i++){
        printf("%d %d\n", i, dis[i]);
    }
    return 0;
}
