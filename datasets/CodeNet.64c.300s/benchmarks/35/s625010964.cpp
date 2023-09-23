/*
** 邻接表和邻接矩阵来保存图
*/

# include <cstdio>
# include <cstring>

const int MAX = 100 + 2;

int m[MAX][MAX];

int n;

void solve() {
    scanf("%d", &n);
    memset(m, 0, sizeof(m));
    int u, k, v;
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &u, &k);
        while (k-- > 0) {
            scanf("%d", &v);
            m[u-1][v-1] = 1;
        }
    }
        

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j) {
                printf(" ");
            }
            printf("%d", m[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // freopen("infile", "r", stdin);
    // freopen("outfile", "w", stdout);
    solve();
    return 0;
}
