#include <algorithm>
#include <cstring>
#include <iostream>
#include <queue>
using namespace std;

int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};
char field[1000][1000];

class Data {
   public:
    int x, y, count;
    Data() {}
    Data(int x, int y, int count) : x(x), y(y), count(count) {}
};
int main() {
    int h, w, n;
    cin >> h >> w >> n;
    Data start;
    int ans = 0;
    for (int i = 0; i < h; i++) {
        cin >> field[i];
        for (int j = 0; j < w; j++) {
            if (field[i][j] == 'S') {
                start = Data(j, i, 0);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        queue<Data> Q;
        Q.push(start);
        bool flg[1000][1000] = {{0}};
        while (!Q.empty()) {
            Data d = Q.front(); Q.pop();
            if (field[d.y][d.x] == i + '0') {
                start = Data(d.x, d.y, d.count);
                break;
            }
            if (flg[d.y][d.x]) continue;
            flg[d.y][d.x] = true;
            for (int j = 0; j < 4; j++) {
                int px = d.x + dx[j], py = d.y + dy[j];
                if (px < 0 || py < 0 || px >= w || py >= h) continue;
                if (field[py][px] == 'X') continue;
                Q.push(Data(px, py, d.count + 1));
            }
        }
        ans = start.count;
    }

    cout << ans << endl;
    return 0;
}