#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int m, min_n, max_n;

    while (cin >> m >> min_n >> max_n, m) {
        vector<int> p(m);
        for (int i = 0; i < m; ++i)
            cin >> p[i];
        sort(p.begin(), p.end(), greater<int>());

        int n = 0, gap = 0;
        for (int i = min_n; i <= max_n; ++i) {
            int tmp_gap = p[i - 1] - p[i];
            if (gap <= tmp_gap) {
                gap = tmp_gap;
                n = i;
            }
        }

        cout << n << endl;
    }

    return 0;
}