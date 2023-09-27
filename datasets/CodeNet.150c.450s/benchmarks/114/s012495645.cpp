#include <cstdio>
#include <limits>

static const int MAX_N   = 100;
static const int MAX_INT = std::numeric_limits<int>::max();
static const int UNKNOWN = 0;
static const int IN_MST  = 1;

int M[MAX_N][MAX_N];

// 任意の頂点uを起点としてMSTを構成する頂点集合Tを定義し、
// MSTに全ての頂点が含まれるまで、Tの周囲の辺のうち重みが
// 最小の辺を都度選択してTに加えていく。
int prim(int n) {
    int *costs   = new int[n];
    int *parents = new int[n];
    int *states  = new int[n];

    // 各変数を初期化する。
    for (int i = 0; i < n; i++) {
        costs[i]   = MAX_INT;
        parents[i] = -1;
        states[i]  = UNKNOWN;
    }

    costs[0] = 0;

    while (true) {
        int mincost = MAX_INT;
        int u = -1;

        // Tの周囲の辺のうち重みが最小の辺およびそれにつながる頂点を探す。
        for (int i = 0; i < n; i++) {
            if ( states[i] != IN_MST && costs[i] < mincost ) {
                u = i;
                mincost = costs[i];
            }
        }
        if ( u == -1 ) break;

        states[u] = IN_MST;
        for (int v = 0; v < n; v++) {
            if ( states[v] != IN_MST && M[u][v] < costs[v] ) {
                costs[v]   = M[u][v];
                parents[v] = u;
            }
        }
    }

    int total_cost = 0;
    for (int i = 0; i < n; i++) {
        if (parents[i] != -1)
            total_cost += M[i][ parents[i] ];
    }
    return total_cost;
}

int main() {
    int n;
    scanf("%d", &n);

    int cost;
    for (int u = 0; u < n; u++) {
        for (int v = 0; v < n; v++) {
            scanf("%d", &cost);
            M[u][v] = 0 <= cost ? cost : MAX_INT;
        }
    }

    printf("%d\n", prim(n));

    return 0;
}