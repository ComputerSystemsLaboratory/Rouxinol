#include <iostream>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <queue>
#include <stack>

using namespace std;

struct pos {
    pos() {x = 0;y = 0;}
    pos(int x, int y) {
        this->x = x;
        this->y = y;
    }
    int x, y;
};

const int INF = 1000000000;
const int mvx[] = {-1, 0, 1, 0};
const int mvy[] = {0, 1, 0, -1};

int map[1002][1002];
int mem[1002][1002];
pos cpos[10];

signed main() {
    int h,w,n;
    cin >> h >> w >> n;

    {
        int ccount = 0;
        for (int y = 1; y <= h; ++y) {
            string s;
            cin >> s;
            for (int x = 1; x <= w; ++x) {
                switch (s[x - 1]) {
                    case 'X':
                        map[x][y] = -1;
                        break;
                    case 'S':
                        cpos[0] = pos(x, y);
                        break;
                    case '.':
                        break;
                    default :
                        int hard = s[x - 1] - '0';
                        map[x][y] = INF + hard;
                        cpos[hard] = pos(x, y);
                }
            }
        }
    }

    for (int x = 0; x <= w + 1; ++x) {
        map[x][0] = -1;
        map[x][h + 1] = -1;
    }
    for (int y = 1; y <= h; ++y) {
        map[0][y] = -1;
        map[w + 1][y] = -1;
    }

    int cstep[9] = {0};
    for (int i = 0; i < n; ++i) {
        queue<pos> q;
        q.push(cpos[i]);
        int target = map[cpos[i + 1].x][cpos[i + 1].y];
        while (q.size()) {
            pos head = q.front();
            q.pop();
            int nextstep = mem[head.x][head.y] + 1;

            for (int k = 0; k < 4; ++k) {
                int tx = head.x + mvx[k], ty = head.y + mvy[k];

                if (map[tx][ty] == target) {
                    cstep[i] = nextstep;
                    goto end;
                }

                if (((map[tx][ty] != 0) && (map[tx][ty] < INF)) || (mem[tx][ty] != 0)) continue;

                q.push(pos(tx, ty));
                mem[tx][ty] = nextstep;
            }
        }
        end:;
        for (int x = 1; x <= w; ++x) {
            for (int y = 1; y <= h; ++y) {
                mem[x][y] = 0;
            }
        }
    }

    int result = 0;
    for (int i = 0; i < n; ++i) {
        result += cstep[i];
    }
    cout << result << endl;

    return 0;
}