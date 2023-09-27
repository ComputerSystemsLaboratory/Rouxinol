#include<iostream>
#include<queue>
#include<algorithm>
#define INF 999999999
using namespace std;

int res[101];
int G[101][101] = {0};

int main() {
    int n, u, v, k;
    std::queue<int> Q;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> u >> k;
        for (int j = 0; j < k; j++) {
            std::cin >> v;
            G[u - 1][v - 1] = 1;
        }
    }

    for (int i = 0; i < n; i++) res[i] = INF;

    Q.push(0);
    res[0] = 0;

    while (! Q.empty()) {
        u = Q.front();
        for (int i = 0; i < n; i++) {
            if (G[u][i]) {
                Q.push(i);
                res[i] = std::min(res[i], res[u] + 1);
                G[u][i] = 0;
            }
        }
        Q.pop();
    }

    for (int i = 0; i < n; i++) {
        if (res[i] != INF) std::cout << i + 1 << " " << res[i] << "\n";
        else std::cout << i + 1 << " -1\n";
    }

    return 0;
}
