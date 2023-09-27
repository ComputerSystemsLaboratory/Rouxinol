#include <bits/stdc++.h>

using namespace std;

int a[10];
int l, r;

bool dfs(int i)
{
    if (i == 10) return true;

    bool res = false;

    int tmp;

    if (l <= a[i]) {
        tmp = l;
        l = a[i];
        res = res || dfs(i + 1);
        l = tmp;
    }

    if (r <= a[i]) {
        tmp = r;
        r = a[i];
        res = res || dfs(i + 1);
        r = tmp;
    }

    return res;
}

int main()
{
    int n; cin >> n;

    while (n--) {
        l = r = 0;
        for (int i = 0; i < 10; ++i) cin >> a[i];
        cout << (dfs(0) ? "YES" : "NO") << endl;
    }
}