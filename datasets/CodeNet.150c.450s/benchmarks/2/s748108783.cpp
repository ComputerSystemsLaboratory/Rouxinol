#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;

int Partition(vector<int> &a, int p, int r)
{
    int x = a[r], i = p - 1;

    for (int j = p; j < r; ++j)
        if (a[j] <= x)
            swap(a[++i], a[j]);

    swap(a[i + 1], a[r]);

    return i + 1;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;

    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int idx = Partition(a, 0, n - 1);

    for (int i = 0; i < n; ++i) {
        if (i == idx)
            cout << "[" << a[i] << "]";
        else
            cout << a[i];

        cout << (i == n - 1 ? '\n' : ' ');
    }

    return 0;
}