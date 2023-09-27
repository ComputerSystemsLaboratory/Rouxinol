//https://onlinejudge.u-aizu.ac.jp/challenges/sources/ICPC/Prelim/1192?year=2014

#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y, s;

    while (cin >> x >> y >> s, x | y | s) {
        int ans = 0;
        for (int p1 = 1; p1 < s; ++p1) {
            for (int p2 = 1; p1 + p2 <= s; ++p2) {

                int sx = p1 * (100 + x) / 100 + p2 * (100 + x) / 100;
                if (sx == s) {
                    int sy = p1 * (100 + y) / 100 + p2 * (100 + y) / 100;
                    ans = max(ans, sy);
                }
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}

/*
 * 2商品の原価をp,q(p<q)とする。
 * 税率x%のときの値段は
 * [p (100+x) / 100]+[q (100+x) / 100]=s
 *
 */
