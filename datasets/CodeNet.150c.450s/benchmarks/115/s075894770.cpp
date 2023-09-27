/*
** Longest Common Subsequence
*/

# include <cstdio>
# include <cstring>
# include <algorithm>
using namespace std;

const int MAX = 1000 + 5;

char s1[MAX], s2[MAX];
int c[MAX][MAX];

int lcs() {
    int m = strlen(s1+1);
    int n = strlen(s2+1);
    c[0][0] = 0;
    int maxl = 0;
    for (int i = 1; i <= m; i++) {
        c[i][0] = 0;
    }
    for (int i = 1; i <= n; i++) {
        c[0][i] = 0;
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s1[i] == s2[j]) {
                c[i][j] = c[i - 1][j - 1] + 1;
            }
            else {
                c[i][j] = max(c[i][j - 1], c[i - 1][j]);
            }
            maxl = max(maxl, c[i][j]);
        }
    }

    return maxl;
}

void solve() {
    int n;
    scanf("%d", &n);
    while (n--) {
        scanf("%s %s", s1+1, s2+1);
        printf("%d\n", lcs());
    }
}

int main() {
    // freopen("infile", "r", stdin);
    // freopen("outfile", "w", stdout);
    solve();
    return 0;
}
