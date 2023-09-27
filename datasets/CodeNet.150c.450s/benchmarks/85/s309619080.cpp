#include <iostream>
#include <limits>

constexpr int MAXN = 100;
int C[MAXN + 1][MAXN + 1];
int M[MAXN][2];

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> M[i][0] >> M[i][1];
    }

    for (int i = 0; i < n; i++) {
        C[i][i] = 0;
    }

    for (int j = 1; j < n; j++) {
        for (int i = j - 1; i >= 0; i--) {
            C[i][j] = std::numeric_limits<int>::max();
            for (int k = i; k < j; k++) {
                C[i][j] = std::min(C[i][j], C[i][k] + C[k+1][j] + M[i][0] * M[j][1] * M[k][1]);
            }
        }
    }
    std::cout << C[0][n-1] << std::endl;
}
