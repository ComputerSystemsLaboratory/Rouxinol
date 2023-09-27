#include <bits/stdc++.h>

using namespace std;
int main()
{
    while (true) {
        int N;
        cin >> N;
        if (N == 0) {
            break;
        }
        vector<int> x;
        vector<int> y;
        x.push_back(0);
        y.push_back(0);

        for (int i = 0; i < N - 1; i++) {
            int n, d;
            cin >> n >> d;
            const int sx = x[n];
            const int sy = y[n];
            if (d == 0) {
                x.push_back(sx - 1);
                y.push_back(sy);
            } else if (d == 1) {
                x.push_back(sx);
                y.push_back(sy - 1);
            } else if (d == 2) {
                x.push_back(sx + 1);
                y.push_back(sy);
            } else {
                x.push_back(sx);
                y.push_back(sy + 1);
            }
        }
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        cout << x[N - 1] - x[0] + 1 << " " << y[N - 1] - y[0] + 1 << endl;
    }

    return 0;
}