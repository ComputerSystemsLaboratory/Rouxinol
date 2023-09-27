#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int w, h;
    while (cin >> w >> h, w | h) {
        vector<vector<int> > map(h, vector<int>(w));
        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < w; ++j) {
                cin >> map[i][j];
            }
        }

        // bfs
        int islandCount = 0;
        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < w; ++j) {
                queue<pair<int, int> > que;
                if (map[i][j] != 1) {
                    continue;
                }
                ++islandCount;
                que.push({i, j});
                while (!que.empty()) {
                    pair<int, int> p = que.front(); que.pop();
                    if (map[p.first][p.second] == -1) {
                        continue;
                    }
                    map[p.first][p.second] = -1;
                    for (int k = -1; k < 2; ++k) {
                        for (int l = -1; l < 2; ++l) {
                            if ((k | l) == 0) {
                                continue;
                            }
                            int ny = p.first + k;
                            int nx = p.second + l;
                            if (0 <= nx && nx < w &&
                                    0 <= ny && ny < h) {
                                if (map[ny][nx] == 1) {
                                    que.push({ny, nx});
                                }
                            }
                        }
                    }
                }
            }
        }
        cout << islandCount << endl;
    }

    return 0;
}