#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int x, y, s;
    while (cin >> x >> y >> s, x || y || s) {
        int res = 0;
        for (int i = 1; i < s; i++) {
            for (int j = 1; j < s; j++) {
                int sum = j * (100 + x) / 100  + i * (100 + x) / 100;
                if (sum > s) break;
                else if (s == sum) res = max(res, i * (100 + y) / 100 + j * (100 + y) / 100);
            }
        }

        cout << res << endl;
    }

    return 0;
}