#include<iostream>

using namespace std;

int idirs[] = {0, 0, 1, 1, 1, -1, -1, -1};
int jdirs[] = {1, -1, 0, 1, -1, 0, 1, -1};

int map[52][52];

void dfs(int i, int j) {
    if (!map[i][j]) return;
    map[i][j] = 0;
    for (int k = 0; k < 8; ++k) {
        dfs(i + idirs[k], j + jdirs[k]);
    }
}

int main() {
    while (1) {
        int w, h;

        cin >> w >> h;

        if (w == 0) break;

        for (int i = 0; i < 52; ++i)
            for (int j = 1; j < 52; ++j)
                map[i][j] = 0;

        for (int i = 1; i <= h; ++i) {
            for (int j = 1; j <= w; ++j) {
                cin >> map[i][j];
            }
        }

        int ans = 0;
        for (int i = 1; i <= h; ++i) {
            for (int j = 1; j <= w; ++j) {
                if (map[i][j] == 1) {
                    dfs(i, j);
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }
}