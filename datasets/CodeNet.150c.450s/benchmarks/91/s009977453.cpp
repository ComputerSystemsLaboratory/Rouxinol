#include <bits/stdc++.h>

using namespace std;

bool a[1000000];

int main()
{
    memset(a, true, sizeof(a));

    for (int i = 2; i < 1000000; i += 1 + (i & 1)) {
        if (!a[i]) continue;
        for (int j = i*2; j < 1000000; j += i) a[j] = false;
    }

    int n;
    while (cin >> n) {
        int cnt = 0;
        for (int i = 2; i <= n; ++i) cnt += a[i];
        cout << cnt << endl;
    }
}