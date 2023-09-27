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

    bool flag = true;
    for (int i = 0; flag; ++i) {
        flag = false;
        for (int j = n - 1; j > i; --j)
            if (a[j] < a[j - 1]) {
                ++swap_time;
                flag = true;
                swap(a[j], a[j - 1]);
            }
    }

    for (int i = 0; i < n; ++i)
        cout << a[i] << (i == n - 1 ? '\n' : ' ');
    cout << swap_time << "\n";

    return 0;
}