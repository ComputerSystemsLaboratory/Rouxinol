#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int dx[4] = {-1, 0, 1, 0};
const int dy[4] = {0,  1, 0, -1};

bool fie[401][401];

int main() {
    int N, n, d;
    while (cin >> N, N) {
        memset(fie, false, sizeof fie);
        vector<pair<int,int>> pos(201);
        fie[200][200] = true;
        pos[0] = make_pair(200, 200);
        int x, y, mx_x = 200, mx_y = 200, mn_x = 200, mn_y = 200;
        for (int i=1; i<N; ++i) {
            cin >> n >> d;
            x = pos[n].first + dx[d];
            y = pos[n].second + dy[d];
            fie[x][y] = true;
            pos[i] = make_pair(x, y);
            mx_x = max(mx_x, x);
            mx_y = max(mx_y, y);
            mn_x = min(mn_x, x);
            mn_y = min(mn_y, y);
        }
        cout << mx_x - mn_x + 1 << " " << mx_y - mn_y + 1 << endl;
    }
    return 0;
}