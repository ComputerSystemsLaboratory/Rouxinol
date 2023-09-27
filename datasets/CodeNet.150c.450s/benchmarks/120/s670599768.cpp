#include <cstdio>
#include <cstdlib>
#include <cstring>
#define REP(i, a, b) for (int i = (a); i < (b); ++i)
#define rep(i, n) REP(i, 0, (n))
bool osenbei[10][10000];
int main()
{
    int r, c;
    while (scanf("%d%d",&r,&c),r|c) {
        int t;
        rep(i, r) rep(j, c) { scanf("%d", &t); osenbei[i][j] = t; }

        int res = 0;
        rep(i, (1<<r)) {
            rep(j, r) if ((i >> j) & 1)
                rep(k, c) osenbei[j][k] = !osenbei[j][k];

            int tmp = 0;
            rep(l, r) rep(j, c) tmp += !osenbei[l][j];

            rep(j, c) {
                int cnt = 0;
                rep(l, r) cnt += osenbei[l][j];
                if (r - cnt < cnt) tmp += 2 * cnt - r;
            }
            if (res < tmp) res = tmp;

            rep(j, r) if ((i >> j) & 1)
                rep(k, c) osenbei[j][k] = !osenbei[j][k];
        }
        printf("%d\n", res);
    }
    return 0;
}