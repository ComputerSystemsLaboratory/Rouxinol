/*
** prim for MST
*/

# include <iostream>
using namespace std;

static const int MAX = 100;
static const int INFTY = (1 << 21);
static const int WHITE = 0;
static const int GREY = 1;
static const int BLACK = 2;

int n, M[MAX][MAX];

void init() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int e;
            cin >> e;
            M[i][j] = (e == -1) ? INFTY : e;
        }
    }
}

int prim() {
    int u, minv;
    int d[MAX], p[MAX], color[MAX];

    for (int i = 0; i < n; i++) {
        d[i] = INFTY;
        p[i] = -1;
        color[i] = WHITE;
    }

    d[0] = 0;

    while(true) {
        minv = INFTY;
        for (int i = 0; i < n; i++) {
            if (d[i] < minv && color[i] != BLACK) {
                minv = d[i];
                u = i;
            }
        }

        if (minv == INFTY)
            break;

        color[u] = BLACK;

        for (int v = 0; v < n; v++) {
            if (color[v] != BLACK && M[u][v] != INFTY) {
                if (M[u][v] < d[v]) {
                    d[v] = M[u][v];
                    p[v] = u;
                    color[v] = GREY;
                }
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (p[i] != -1) {
            sum += M[i][p[i]];
        }
    }

    return sum;
}

void solve() {
    init();
    cout << prim() << endl;
}

int main() {
    // freopen("infile", "r", stdin);
    // freopen("outfile", "w", stdout);
    solve();
    return 0;
}

