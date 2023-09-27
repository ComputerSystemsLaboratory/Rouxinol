#include <cstdio>

using namespace std;

int W, H;
char M[22][22];

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int ans;

void dfs(int y, int x) {
    if (M[y][x] == '#' || M[y][x] == '@') { return; }

    ans++;
    M[y][x] = '@';
    for (int i = 0; i < 4; i++) {
        dfs(y + dy[i], x + dx[i]);
    }
}

int solve() {
    int sx, sy;
    for (sy = 1;; sy++) {
        for (sx = 1; sx <= W; sx++) {
            if (M[sy][sx] == '@') { goto found; }
        }
    }
found:

    ans = 0;
    M[sy][sx] = '.';
    dfs(sy, sx);
    return ans;
}

int main() {
    for (;;) {
        scanf("%d%d ", &W, &H);

        if (!W && !H) { break; }

        for (int i = 0; i < 22; i++) {
            for (int j = 0; j < 22; j++) {
                M[i][j] = '#';
            }
        }
        for (int i = 1; i <= H; i++) {
            for (int j = 1; j <= W; j++) {
                scanf("%c", &M[i][j]);
            }
            char d;
            scanf("%c", &d);
        }
        printf("%d\n", solve());
    }
}