#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int dx[] = {0, 1, 0, -1};
    int dy[] = {-1, 0, 1, 0};
    while (cin >> n, n) {
        vector<int> x(n), y(n);

        for (int i = 1; i < n; i++) {
            int m, d;
            cin >> m >> d;
            x[i] = x[m] + dx[d];
            y[i] = y[m] + dy[d];
        }

        int max_x = 0, min_x = n + 1;
        for (auto i : x) max_x = max(max_x, i + 1);
        for (auto i : x) min_x = min(min_x, i);

        int max_y = 0, min_y = n + 1;
        for (auto i : y) max_y = max(max_y, i + 1);
        for (auto i : y) min_y = min(min_y, i);

        cout << (max_y - min_y) << " " << (max_x - min_x) << endl;
    }

    return 0;
}

