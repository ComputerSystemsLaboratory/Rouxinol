#include <cstdio>
#include <queue>
#include <cctype>
#include <vector>

using namespace std;

struct Position {
    int h, w, time, strength;
    Position (int h, int w, int t, int s): h(h), w(w), time(t), strength(s) {}
};

const int max_h = 1005;
const int max_w = 1005;
int g_h, g_w, g_strength, g_max_strength, si, sj;
char mat[max_h][max_w];
pair<int, int> factories[20];
int dh[] = {0, 1, 0, -1};
int dw[] = {1, 0, -1, 0};

int main() {
    scanf("%d%d%d", &g_h, &g_w, &g_max_strength);
    for (int i = 0; i < g_h; i++) {
        getchar();
        for (int j = 0; j < g_w; j++) {
            mat[i][j] = getchar();
            if (mat[i][j] == 'S') {
                si = i;
                sj = j;
                mat[i][j] = '.';
            } else if (isdigit(mat[i][j])) {
                factories[mat[i][j]-'0'].first = i;
                factories[mat[i][j]-'0'].second = j;
                mat[i][j] = '.';
            }
        }
    }
    queue<Position> q;
    g_strength = 1;
    q.push(Position(si, sj, 0, 1));
    int result = -1;
    while (!q.empty()) {
        Position p = q.front();
        q.pop();
        if (p.strength < g_strength) continue;
        pair<int, int> f = factories[p.strength];
        if (p.h == f.first && p.w == f.second) {
            if (p.strength == g_max_strength) {
                result = p.time;
                break;
            }
            p.strength++;
            g_strength++;
        }
        for (int i = 0; i < 4; i++) {
            int w = p.w + dw[i];
            int h = p.h + dh[i];
            if (w >= 0 && w < g_w && h >= 0 && h < g_h &&
                    (mat[h][w] == '.' || (isdigit(mat[h][w]) && p.strength+'0' > mat[h][w]))) {
                mat[h][w] = p.strength+'0';
                q.push(Position(h, w, p.time+1, p.strength));
            }
        }
    }
    printf("%d\n", result);
    return 0;
}