#include <iostream>


int D[100];
int F[100];
int V[100][100];

int cnt = 0;
int n;

void dfs(int r) {
    D[r] = ++cnt;
    for (int i = 0; i < n; i++) {
        if ((V[r][i] == 1) && (D[i] == 0)) {
            dfs(i);
        }
    }
    F[r] = ++cnt;
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
        if (!D[i]) dfs(i);
    }

    for (int i = 0; i < n; i++) {
        std::cout << i + 1 << " " << D[i] << " " << F[i] << std::endl;
    }
}
