#include <bits/stdc++.h>

using namespace std;

int a[10];

bool dfs(int i, int l, int r)
{
    if (i == 10) return true;

    if (l < a[i] && dfs(i + 1, a[i], r)) return true;
    if (r < a[i] && dfs(i + 1, l, a[i])) return true;

    return false;
}

int main()
{
    int n; cin >> n;

    while (n--) {
        for (int i = 0; i < 10; ++i) cin >> a[i];
        cout << (dfs(0, 0, 0) ? "YES" : "NO") << endl;
    }
}