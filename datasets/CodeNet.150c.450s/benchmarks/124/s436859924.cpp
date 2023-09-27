#include <iostream>
#include <vector>
#define INF 1e9
using namespace std;

int main(){
    //declaration and input
    int n;
    cin >> n;
    int u, k;
    vector<vector<int>> graph(n, vector<int>(n, INF));
    for (int i = 0; i < n; i++){
        cin >> u >> k;
        int v, c;
        for (int j = 0; j < k; j++){
            cin >> v >> c;
            graph[u][v] = c;
        }
    }
    vector<int> cost(n, INF);
    vector<int> parent_of(n, -1);
    vector<bool> is_visit(n, false);

    //Dijkstra
    //init
    cost[0] = 0;
    
    //loop
    while(true){
        int mincost = INF;
        int next = -1;
        for (int i = 0; i < n; i++){
            if (!is_visit[i] && cost[i] < mincost){
                mincost = cost[i];
                next = i;
            }
        }
        if (next == -1)
            break;
        is_visit[next] = true;
        for (int i = 0; i < n; i++){
            if (!is_visit[i] && graph[next][i] < INF){
                if (cost[next] + graph[next][i] < cost[i]){
                    cost[i] = cost[next] + graph[next][i];
                    parent_of[i] = next;
                }
            }
        }
    }

    //output
    for (int i = 0; i < n; i++)
        cout << i << ' ' << cost[i] << endl;
    return 0;
}
