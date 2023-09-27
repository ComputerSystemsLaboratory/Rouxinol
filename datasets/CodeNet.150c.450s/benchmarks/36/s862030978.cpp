#include <bits/stdc++.h>

using namespace std;

int main()
{
    int d;

    while (cin >> d) {
        int ans = 0;
        for (int a = d; a <= 600 - d; a += d) ans += a * a * d;
        cout << ans << endl;
    }
}