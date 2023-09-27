#include <algorithm>
#include <iostream>
using namespace std;

const int INF = 1 << 29;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main() {
    int N, x[200], y[200], w, h;
    while (true) {
        cin >> N;
        if (N == 0) break;
        x[0] = y[0] = 0;
        for (int i = 1; i < N; ++i) {
            int n, d;
            cin >> n >> d;
            x[i] = x[n] + dx[d];
            y[i] = y[n] + dy[d];
        }
        int min_x = INF, max_x = -INF,
            min_y = INF, max_y = -INF;
        for (int i = 0; i < N; ++i) {
            min_x = min(min_x, x[i]);
            max_x = max(max_x, x[i]);
            min_y = min(min_y, y[i]);
            max_y = max(max_y, y[i]);
        }
        cout << (max_x - min_x + 1) << " " << (max_y - min_y + 1) << endl;
    }
    return 0;
}