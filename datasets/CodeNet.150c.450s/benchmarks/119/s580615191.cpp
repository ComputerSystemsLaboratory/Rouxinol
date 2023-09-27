#include <iostream>
#include <vector>

using namespace std;

int w, h;
int cnt;
vector<vector<int>> vvi;

void dfs(int x, int y) {
    vvi[y][x] = 0;
    for (int j = -1; j <= 1; j++) {
        for (int i = -1; i <= 1; i++) {
            if (x+i < 0 || w <= x+i || y+j < 0 || h <= y+j)
                continue;
            if (vvi[y+j][x+i]) {
                dfs(x+i, y+j);
            }
        }
    }
}

int main()
{
    while (cin >> w >> h, w|h) {
        // input
        vvi.clear();
        cnt = 0;
        for (int j = 0; j < h; j++) {
            vector<int> vi;
            for (int i = 0; i < w; i++) {
                int c;
                cin >> c;
                vi.push_back(c);
            }
            vvi.push_back(vi);
        }

        // dfs
        for (int y = 0; y < h; y++) {
            for (int x = 0; x < w; x++) {
                if (vvi[y][x]) {
                    dfs(x, y);
                    cnt++;
                }
            }
        }

        // output
        cout << cnt << endl;
    }
    return 0;
}