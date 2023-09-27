#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

typedef pair<int, int> P;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int main() {
    while (true) {
        int N;

        cin >> N;
        if (!N) { break; }

        vector<P> ps;
        ps.push_back(make_pair(0, 0));
        for (int i = 1; i < N; i++) {
            int n, d;
            cin >> n >> d;
            int x = ps[n].first + dx[d];
            int y = ps[n].second + dy[d];
            ps.push_back(make_pair(x, y));
        }

        int x_max, x_min, y_max, y_min;
        x_max = y_max = -10000000;
        x_min = y_min = 10000000;
        for (int i = 0; i < N; i++) {
            x_max = max(x_max, ps[i].first);
            x_min = min(x_min, ps[i].first);
            y_max = max(y_max, ps[i].second);
            y_min = min(y_min, ps[i].second);
        }

        cout << (x_max - x_min + 1) << " " << (y_max - y_min + 1) << endl;
    }
    return 0;
}