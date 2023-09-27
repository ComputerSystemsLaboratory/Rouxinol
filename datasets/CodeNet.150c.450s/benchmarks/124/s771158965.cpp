#include <iostream>
#include <limits>

constexpr int MAXN = 100;
int G[MAXN][MAXN];
int P[MAXN];
int D[MAXN];
int C[MAXN];

constexpr int MAXINT = std::numeric_limits<int>::max();

int main() {
    int n;
    std::cin >> n;

    for (int i = 0 ; i < n; i++) {
        for (int j = 0 ; j < n; j++) {
            G[i][j] = MAXINT;
        }
    }

    for (int i = 0; i < n; i++) {
        D[i] = MAXINT;
    }

    for (int i = 0; i < n; i++) {
        int id, e_num;
        std::cin >> id >> e_num;
        for (int j = 0; j < e_num; j++) {
            int t;
            std::cin >> t;
            std::cin >> G[id][t];
        }
    }

    int r = 0;
    D[r] = 0;
    while (true) {
        int mincost = MAXINT;
        int m;
        for (int i = 0; i < n; i++) {
            if ((C[i] == 0) && (D[i] < mincost)) {
                mincost = D[i];
                m = i;
            }
        }

        if (mincost == MAXINT) {
            break;
        }

        C[m] = 1;
        for (int i = 0; i < n; i++) {
            if ((C[i] != 1) && (G[m][i] != MAXINT)&& ((D[m] + G[m][i]) < D[i])) {
                P[i] = m;
                D[i] = D[m] + G[m][i];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        std::cout << i << " " << D[i] << std::endl;
    }

}
