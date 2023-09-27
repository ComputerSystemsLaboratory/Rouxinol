#include<bits/stdc++.h>

std::vector<int> color;
std::vector<std::vector<int>> M;
std::vector<int> d;
std::vector<int> p;
int INF = 1001001001;
int sum = 0;

void dijkstra(int n){
    for(int i = 0; i < n; i++){
        color[i] = 0;
        d[i] = INF;
    }

    d[0] = 0;
    p[0] = -1;

    while(true){
        int u;
        int mincost = INF;
        for(int i = 0; i < n; i++){
            if(color[i] != 1 && d[i] < mincost){
                mincost = d[i];
                u = i;
            }
        }

        if(mincost == INF){
            break;
        }

        color[u] = 1;

        for(int i = 0; i < n; i++){
            if(color[i] != 1 && M[u][i] != -1){
                if(d[u] + M[u][i] < d[i]){
                    d[i] = d[u] + M[u][i];
                }
            }
        }

    }
    
    for(int i = 0; i < d.size(); i++){
        sum += d[i];
    }

}

int main(void){
    int n;
    std::cin >> n;

    color.resize(n);

    M.resize(n, std::vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            M[i][j] = INF;
        }
    }

    d.resize(n);
    p.resize(n);

    int u, k, v;

    for(int i = 0; i < n; i++){
        std::cin >> u >> k;
        for(int i = 0; i < k; i++){
            std::cin >> v;
            std::cin >> M[u][v];
        }
    }
    
    
    dijkstra(n);
    
    for(int i = 0; i < n; i++){
        std::cout << i << " " << d[i] << std::endl;
    }

    return 0;
}
