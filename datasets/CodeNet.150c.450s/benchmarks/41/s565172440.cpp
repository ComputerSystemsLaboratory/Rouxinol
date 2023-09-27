#include <bits/stdc++.h>


static const int MAX = 100;
static const long long INFTY = (1LL << 32);

int n;
long long d[MAX][MAX];


void floyd() {
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            if (d[i][k] == INFTY) continue;
            for (int j = 0; j < n; j++) {
                if (d[k][j] == INFTY) continue;
                d[i][j] = std::min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
}

int main()
{
    //E: number of edges, U, V: start vertex, target vertex
    int E, U, V, cost;
    std::cin >> n >> E;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            d[i][j] = ((i == j) ? 0 : INFTY);
        }
    }


    for (int i = 0; i < E; i++) {
        std::cin >> U >> V >> cost;
        d[U][V] = cost;
    }

    floyd();
    bool isNegativeCycle = false;
    for (int i = 0; i < n; i++)
        if (d[i][i] < 0) isNegativeCycle = true;
    if (isNegativeCycle) {
        std::cout << "NEGATIVE CYCLE" << std::endl;
    } else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j) std::cout << " ";
                if (d[i][j] == INFTY) std::cout << "INF";
                else std::cout << d[i][j];
            }
            std::cout << std::endl;
        }
    }

    return 0;
}

