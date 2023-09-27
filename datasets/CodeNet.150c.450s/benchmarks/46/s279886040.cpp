#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;

    while ((cin >> n >> x), !(n == 0 && x == 0)) {
        int ans = 0;

        for (int i = 1; i <= n; ++i) {
            for (int j = i + 1; j <= n; ++j) {
                if (x - i - j > j && x - i - j <= n) {
                    ++ans;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}