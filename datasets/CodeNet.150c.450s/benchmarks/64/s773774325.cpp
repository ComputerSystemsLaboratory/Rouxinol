#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;

int n, q;
vector<int> a;

int Solve(int pos, int sum, const int m)
{
    if (m == sum)
        return true;
    else if (m < sum)
        return false;

    if (pos == n)
        return false;

    if (Solve(pos + 1, sum + a[pos], m))
        return true;
    if (Solve(pos + 1, sum, m))
        return true;

    return false;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int m;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> m;
        if (Solve(0, 0, m))
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}