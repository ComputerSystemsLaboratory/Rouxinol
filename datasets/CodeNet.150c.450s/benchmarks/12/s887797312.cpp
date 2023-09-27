/*
** 二叉堆
*/

# include <cstdio>

const int MAX = 250 + 5;

int n, a[MAX];

void solve() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    int p, l, r;
    for (int i = 1; i <= n; i++) {
        printf("node %d: ", i);
        printf("key = %d, ", a[i]);
        p = i / 2;
        if (p != 0) {
            printf("parent key = %d, ", a[p]);
        }
        l = 2 * i;
        r = 2 * i + 1;
        if (l <= n) {
            printf("left key = %d, ", a[l]);
        }
        if (r <= n) {
            printf("right key = %d, ", a[r]);
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
