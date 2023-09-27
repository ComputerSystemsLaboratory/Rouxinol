#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main() {
    // int n, m;
    // scanf("%d%d", &n, &m);
    // vector<vector<int>> a(n, vector<int>(m));
    // rep(i, n) {
    //     rep(j, m) {
    //         scanf("%d", &a[i][j]);
    //     }
    // }
    // vector<int> b(m);
    // rep(i, m) {
    //     scanf("%d", &b[i]);
    // }

    // vector<int> c(n);
    // rep(i, n) {
    //     int sum = 0;
    //     rep(j, m) {
    //         sum += a[i][j] * b[j];
    //     }
    //     c[i] = sum;
    //     printf("%d\n", c[i]);
    // }
    int n, m, l;
    scanf("%d%d%d", &n, &m, &l);
    vector<vector<int>> a(n, vector<int>(m));
    rep(i, n) {
        rep(j, m) {
            scanf("%d", &a[i][j]);
        }
    }
    vector<vector<int>> b(m, vector<int>(l));
    rep(i, m) {
        rep(j, l) {
            scanf("%d", &b[i][j]);
        }
    }

    vector<vector<long>> c(n, vector<long>(l));
    rep(i, n) {
        rep(j, l) {
            long sum = 0;
            rep(k, m) {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            printf("%ld", c[i][j]);
            if (j != l-1) printf(" ");
        }
        printf("\n");
    }
}
