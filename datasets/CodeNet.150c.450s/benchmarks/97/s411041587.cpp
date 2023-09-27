#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

int main() {
    int n;
    vector< pair<int, int> > dir = {
        make_pair(-1, 0),
        make_pair(0, 1),
        make_pair(1, 0),
        make_pair(0, -1)
    };

    while (cin >> n, n) {
        vector< pair<int, int> > c(n);
        c[0] = make_pair(0, 0);

        int maxh = 0, maxw = 0;
        int minh = 0, minw = 0;
        for (int i = 0; i < n - 1; i++) {
            int a, d;
            cin >> a >> d;
            int x = c[a].first + dir[d].first;
            int y = c[a].second + dir[d].second;
            c[i + 1] = make_pair(x, y);
            maxw = max(x, maxw);
            minw = min(x, minw);
            maxh = max(y, maxh);
            minh = min(y, minh);
        }

        cout << maxw - minw + 1 << " " << maxh - minh + 1 << endl;
    }

    return 0;
}