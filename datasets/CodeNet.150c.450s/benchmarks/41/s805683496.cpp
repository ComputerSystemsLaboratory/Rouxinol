#include <iostream>
#include <vector>
long long INF = 1e18;
long long V, E;
std::vector<std::vector<long long>> G;
struct edge{
    int to;
    long long cost;
};
void waflo(){
    long long d[V][V];
    for(int i = 0; i < V; i++){
        for(int j = 0; j < V; j++) d[i][j] = INF;
        d[i][i] = 0;
    }
    for(int i = 0; i < E; i++){
        long long s, t, g;
        std::cin >> s >> t >> g;
        d[s][t] = g;
    }
    for(int k = 0; k < V; k++){
        for(int i = 0; i < V; i++){
            for(int j = 0; j < V; j++){
                if(d[i][j] > d[i][k] + d[k][j] && d[k][j] != INF && d[i][k] != INF){
                    d[i][j] = d[i][k] + d[k][j];
                }
            }
        }
    }
    for(int i = 0; i < V; i++){
        if(d[i][i] < 0) {
            std::cout << "NEGATIVE CYCLE" << std::endl;
            return;
        }
    }
    for(int i = 0; i < V; i++){
        for(int j = 0; j < V; j++){
            if(d[i][j] == INF) std::cout << "INF";
            else std::cout << d[i][j];
            if(j == V -1) std::cout << std::endl;
            else std::cout << ' ';
        }
    }
}
int main(){
    std::cin >> V >> E;
    waflo();
}
