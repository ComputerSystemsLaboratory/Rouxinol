#include<bits/stdc++.h>

std::vector<int> color;
std::vector<std::vector<int>> M;
std::vector<int> d;
std::vector<int> p;
int INF = 1001001001;
int sum = 0;

int prim(int n){
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
                if(M[u][i] < d[i]){
                    d[i] = M[u][i];
                }
            }
        }

    }
    
    for(int i = 0; i < d.size(); i++){
        sum += d[i];
    }

    return sum;
}

int main(void){
    int n;
    std::cin >> n;

    color.resize(n);
    M.resize(n, std::vector<int>(n));
    d.resize(n);
    p.resize(n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            std:: cin >> M[i][j];
        }
    }
    
    
    

    std::cout << prim(n) << std::endl;

    return 0;
}
