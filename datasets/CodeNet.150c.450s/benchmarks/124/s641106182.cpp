#include <iostream>
#include <limits>

#define FOR(i,a,b) for (int i = (a); i < (b); ++i)

constexpr int MAXN = 100;
constexpr int MAXINT = std::numeric_limits<int>::max();


int G[MAXN][MAXN];
int D[MAXN];
int C[MAXN];
int P[MAXN];
int n;

int main() {
    std::cin >> n;
    FOR(i, 0, n)
    FOR(j, 0, n)
    {
        G[i][j] = MAXINT;
    }

    FOR(i, 0, n){
        int id, e;
        std::cin >> id >> e;
        FOR(i, 0, e) {
            int v, c;
            std::cin >> v >> c;
            G[id][v] = c;
        }
    }

    FOR(i, 0, n) D[i] = MAXINT;

    int r = -1;
    D[0] = 0;
    while (true) {
        int mincost = MAXINT;
        int t;
        for (int i = 0; i < n; i++) {
            if ((C[i] == 0)  && (D[i] < mincost)) {
                mincost = D[i];
                t = i;
            }
        }

        if (mincost == MAXINT) {
            break;
        }

        C[t] = 1;
        P[t] = r;

        for (int i = 0; i < n; i++) {
            if ((C[i] == 0) && (G[t][i] != MAXINT) && ((D[t] + G[t][i]) < D[i])) {
                D[i] = D[t] + G[t][i];
            }
        }
        r = t;
    }
    FOR(i, 0, n) {
        std::cout << i << " " << D[i] << std::endl;
    }
}
