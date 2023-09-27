#include <iostream>
#include <queue>

int n;

int V[100][100];
int D[100];
int d = 0;

std::queue<int> Q;

void bfs(int r) {
    Q.push(r);
    D[r] = 0;
    while (Q.size()) {
        r = Q.front();
        Q.pop();
        for (int i = 0; i < n; i++) {
            if ((D[i] == -1) && (V[r][i] == 1)) {
                Q.push(i);
                D[i] = D[r] + 1;
            }
        }
    }
}


int main() {
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int id, e_num;
        std::cin >> id >> e_num;
        for (int j = 0; j < e_num; j++) {
            int t;
            std::cin >> t;
            V[id - 1][t - 1] = 1;
        }
    }

    for (int i = 0; i < n; i++) {
        D[i] = -1;
    }

    bfs(0);
    for (int i = 0; i < n; i++) {
        std::cout << i + 1 << " " << D[i] << std::endl;
    }
}
