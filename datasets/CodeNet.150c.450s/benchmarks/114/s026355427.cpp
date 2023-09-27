#include <iostream>
#include <limits>

constexpr int MAXN = 100;
int G[MAXN][MAXN];
int P[MAXN];
int D[MAXN];
int C[MAXN];

int main(){
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            std::cin >> G[i][j];
            if (G[i][j] == -1) {
                G[i][j] = std::numeric_limits<int>::max();
            }
        }
    }

    for (int i = 0; i < n; i++) {
        D[i] = std::numeric_limits<int>::max();
    }

    D[0] = 0;
    P[0] = -1;
    while (true) {
        int m;
        int mincost = std::numeric_limits<int>::max();
        for (int i = 0; i < n; i++) {
            if ((C[i] == 0) && (D[i] < mincost)) {
                mincost = D[i];
                m = i;
            }
        }

        if (mincost == std::numeric_limits<int>::max()) {
            break;
        }

        C[m] = 1;
        D[m] = mincost;

        for (int i = 0; i < n; i++) {
            if ((G[m][i] < std::numeric_limits<int>::max()) && (C[i] == 0) && (G[m][i] < D[i])) {
                D[i] = G[m][i];
            }
        }
    }


    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (D[i] != std::numeric_limits<int>::max()) {
            sum += D[i];
        }
    }
//    for (int i = 0; i < n; i++) {
//        std::cout << i << ": " << D[i] << std::endl;
//    }
    std::cout << sum << std::endl;

}
