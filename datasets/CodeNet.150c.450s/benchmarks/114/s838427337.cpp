#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
typedef pair<int, int> P;
int n, ans, n_left, dis[101];
vector< vector<P> > G(101);
priority_queue< P, vector<P>, greater<P> > heap;
bool visited[101];

int main(){
   

    int u, v, w;
    scanf("%d", &n);
    n_left = n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &w);
            if(w==-1) continue;
            G[i].push_back(P(w, j));
        }
    }
    ans = 0;
    memset(visited, 0, sizeof(visited));
    memset(dis, 127, sizeof(dis));
    heap.push(P(0, 0));
    dis[0] = 0;
    
    while(!heap.empty() && n_left>0){
        P top = heap.top();
        heap.pop();
        u = top.second;

        if(visited[u]) continue;
        visited[u] = true;
        --n_left;
        ans += top.first;
        for(int i=0; i<G[u].size(); i++){
            v = G[u][i].second;
            if(visited[v]) continue;
            w = G[u][i].first;
            if(w<dis[v]){
                dis[v] = w;
                heap.push(P(w, v));
            }
        }
    }

    printf("%d\n", ans);
    return 0;
}
