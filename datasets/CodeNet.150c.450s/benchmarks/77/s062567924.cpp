#include <stdio.h>
#include <string>
#include <map>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define mp make_pair

const int dx[4] = {0, 1, 0, -1};
const int dy[4] = {1, 0, -1, 0};
const string ds = "NESW";

int main() {
    for (;;) {
        int n;
        scanf("%d", &n);
        if (n == 0) return 0;
        map<pair<int, int>, int> hs;
        rep (i, n) {
            int x, y;
            scanf("%d%d", &x, &y);
            hs[mp(x, y)] = 1;
        }
        int m;
        scanf("%d", &m);
        int cnt = 0;
        int cx = 10, cy = 10;
        if (hs[mp(cx, cy)] == 1) {
            hs[mp(cx, cy)] = 0;
            cnt++;
        }
        rep (i, m) {
            char c;
            int a;
            scanf(" %c%d", &c, &a);
            int dir = ds.find(c);
            rep (_, a) {
                cx += dx[dir];
                cy += dy[dir];
                if (hs[mp(cx, cy)] == 1) {
                    hs[mp(cx, cy)] = 0;
                    cnt++;
                }
            }
        }
        puts(cnt == n ? "Yes" : "No");
    }
}