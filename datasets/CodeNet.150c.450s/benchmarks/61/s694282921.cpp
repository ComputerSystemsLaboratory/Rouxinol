#include <bits/stdc++.h>
#define range(i, a, b) for(int i = (a); i < (b); i++)
#define rep(i, a) range(i, 0, a)
using namespace std;

int main() {
    int n, a, b, c, x;
    while (cin >> n >> a >> b >> c >> x, n) {
        vector <int> y(n);
        rep (i, n) cin >> y[i];

        int nowFrame = 0, cnt = 0, ans = -1;
        while (nowFrame <= 10001) {
            if (cnt == n) {
                ans = nowFrame - 1;
                break;
            }
            if (y[cnt] == x) {
                cnt++;
                x = (a * x + b) % c;
                nowFrame++;
                continue;
            }

            x = (a * x + b) % c;
            nowFrame++;
        }

        cout << ans << endl;
    }
    return 0;
}
