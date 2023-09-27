#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, swap_time = 0;

    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    for (int i = 0; i < n; ++i) {
        int min_idx = i;
        for (int j = i; j < n; ++j)
            if (a[j] < a[min_idx])
                min_idx = j;
        if (min_idx != i) {
            ++swap_time;
            swap(a[min_idx], a[i]);
        }
    }

    for (int i = 0; i < n; ++i)
        cout << a[i] << (i == n - 1 ? '\n' : ' ');
    cout << swap_time << "\n";

    return 0;
}