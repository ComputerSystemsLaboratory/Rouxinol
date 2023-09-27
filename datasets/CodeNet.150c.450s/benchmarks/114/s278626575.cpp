#include <iostream>
#include <limits>

constexpr int MAXN = 100;
int G[MAXN][MAXN];
int D[MAXN];
int P[MAXN];
int C[MAXN];
int n;
constexpr int MAXINT = 2001;

#define FOR(i,a,b) for(int i = (a); i<(b); ++i)

int main() {

    std::cin >> n;
    FOR(i, 0, n)
    FOR(j, 0, n)
    {
        int v;
        std::cin >> v;
        if(v < 0) G[i][j] = MAXINT;
        else G[i][j] = v;
    }

    FOR(i, 0, n) D[i] = MAXINT;

    int r = 0;
    D[r] = 0;
    P[r] = -1;
    while (true) {
        int mincost = MAXINT;
        int t;
        for (int i = 0; i < n; i++) {
            if ((C[i] == 0) && (D[i] < mincost)) {
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
            if ((C[i] == 0) && (G[t][i] < D[i])) {
                D[i] = G[t][i];
            }
        }
        r = t;
    }

    int sum = 0;
    FOR(i, 0, n) {
        sum += D[i];
    }
    std::cout << sum << std::endl;

}
