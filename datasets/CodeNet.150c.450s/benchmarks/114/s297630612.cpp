#include<iostream>
#include<unordered_set>
#define N 105
#define UNDEFINED -1
static const int INF = (1<<21);

int n,a;
int d[N], p[N];
int G[N][N];

int prim() {
    int u, min;
    std::unordered_set<int> hasVisited;
    for(int i = 0; i < N; i++) {
        d[i] = INF;
        p[i] = UNDEFINED;
    }
    d[0] = 0;
    while(true) {
        min = INF;
        u = UNDEFINED;
        for(int i = 0; i < n; i++) {
            if(d[i] < min && hasVisited.find(i) == hasVisited.end()) {
                u = i;
                min = d[i];
            }
        }
        if (u == UNDEFINED) break;
        hasVisited.insert(u);
        for(int i = 0; i < n; i++) {
            if(hasVisited.find(i) == hasVisited.end() && G[u][i] != UNDEFINED) {
                if(d[i] > G[u][i]) {
                    d[i] = G[u][i];
                    p[i] = u;
                }
            }
        }
    }
    int sum = 0;
    for(int i = 0; i < n; i++) {
        if(p[i] != UNDEFINED) {
            sum += G[i][p[i]];
        }
    }
    return sum;
}

int main() {
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {

            std::cin >> a;
            G[i][j] = a;
        }
    }
    std::cout << prim() << std::endl;
    return 0;
}

