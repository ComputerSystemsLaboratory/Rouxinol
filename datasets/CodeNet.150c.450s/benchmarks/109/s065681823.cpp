#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int (i)=(0);(i)<(int)(n);++(i))
using ll = long long;

int main() {

    int n;
    while (cin >> n, n) {

        int hws[24][60][60];
        rep(i, 24) rep(j, 60) rep(k, 60) hws[i][j][k] = 0;

        rep(i, n) {
            string s, e;
            cin >> s >> e;

            int h1 = stoi(s.substr(0, 2));
            int m1 = stoi(s.substr(3, 2));
            int s1 = stoi(s.substr(6, 2));

            int h2 = stoi(e.substr(0, 2));
            int m2 = stoi(e.substr(3, 2));
            int s2 = stoi(e.substr(6, 2));

            hws[h1][m1][s1] += 1;
            hws[h2][m2][s2] -= 1;
        }

        int t = 0, ans = 0;
        rep(i, 24) rep(j, 60) rep(k, 60) {
            t += hws[i][j][k];
            ans = max(t, ans);
        }

        cout << ans << endl;

    }

}