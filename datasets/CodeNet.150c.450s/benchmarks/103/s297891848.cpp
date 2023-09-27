#include <bits/stdc++.h>

using namespace std;

int dfs(int x, int n, int s)
{
    if (n == 0) {
        return (s == 0);
    }
    if (x == 10) return 0;
            
    int res = 0;
    for (int i = x; i <= 9; i++) {
        res += dfs(i + 1, n - 1, s - i);
    }
    return res;
}

int main()
{
    int n, s;
    while (cin >> n >> s, n) {
        cout << dfs(0, n, s) << endl;
    }
    return 0;
}