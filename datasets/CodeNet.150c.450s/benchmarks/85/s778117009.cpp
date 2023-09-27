/*
** Matrix Chain Multiplication
*/

# include <cstdio>
# include <algorithm>
using namespace std;

const int MAX = 100 + 5;

int n, m[MAX][MAX], p[MAX];

void matrixCM() {
    for (int i = 1; i <= n; i++) {
        m[i][i] = 0;
    }

    for (int l = 2; l <= n; l++) {
        for (int i = 1; i <= n - l + 1; i++) {
            int j = i + l - 1;
            m[i][j] = (1 << 21);
            for (int k = i; k < j; k++) {
                m[i][j] = min(m[i][j], m[i][k] + m[k+1][j] + p[i - 1] * p[k] * p[j]);
            }
        }
    }
}

void solve() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &p[i], &p[i + 1]);
    }
    matrixCM();
    printf("%d\n", m[1][n]);
}

int main() {
    // freopen("infile", "r", stdin);
    // freopen("outfile", "w", stdout);
    solve();
    return 0;
}
