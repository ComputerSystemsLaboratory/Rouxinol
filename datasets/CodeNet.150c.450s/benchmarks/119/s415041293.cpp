#include <iostream>
#include <vector>
using namespace std;
typedef vector<vector<int> > VVI;
typedef vector<vector<bool> > VVB;

int w, h, cnt;

void labeling(VVI& map, VVB& visited, int x, int y) {
    visited[x][y] = true;
    for (int i = -1; i <= 1; ++i) {
        for (int j = -1; j <= 1; ++j) {
            if (x+i < 0 || h <= x+i || y+j < 0 || w <= y+j)
                continue;
            if (!visited[x+i][y+j] && map[x+i][y+j])
                labeling(map, visited, x+i, y+j);
        }
    }
}

int main(int argc, char *argv[])
{
    while (cin >> w >> h, w | h) {
        VVI map(h, vector<int>(w));
        VVB visited(h, vector<bool>(w, false));
        cnt = 0;
        for (int i = 0; i < h; ++i)
            for (int j = 0; j < w; ++j)
                cin >> map[i][j];
        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < w; ++j) {
                if (!visited[i][j] && map[i][j]) {
                    cnt++;
                    labeling(map, visited, i, j);
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}