#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;
int h, w, n, s;
char g[1001][1001];
bool v[1001][1001];
int id[8] = {0, -1, 0, 1, -1, 0, 1, 0};
int main() {
    scanf("%d %d %d", &h, &w, &n);
    for (int i = 0; i < h; ++i) {
        getchar();
        for (int j = 0; j < w; ++j) {
            while (~scanf("%c", &g[i][j]) && g[i][j] == ' ');
            //printf("%c",g[i][j]);
            if (g[i][j] == 'S') s = i * w + j;
        }
    }
    int ans = 0;
    char c = '0';
    while (c != n + '0') {
        c += 1;
        queue<pair<int, int> > q;
        memset(v, 0, sizeof v);
        v[s / w][s % w] = true;
        q.push({s, 0});
        while (!q.empty()) {
            int i = q.front().first / w, j = q.front().first % w, step = q.front().second;
            //printf("123%d\n%c\n", step, g[i][j]);
            if (g[i][j] == c) {
                s = i * w + j;
                ans += step;
                //printf("%d %d %d\n", i, j, ans);
                break;
            }
            q.pop();
            for (int k = 0; k < 8; k += 2) {
                int ni = i + id[k], nj = j + id[k + 1];
                if (ni >= 0 && ni < h && nj >= 0 && nj < w && !v[ni][nj] && g[ni][nj] != 'X') {
                    v[ni][nj] = true;
                    q.push({ni * w + nj, step + 1});
                }
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}

