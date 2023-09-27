#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdio>
#include <istream>
#include <sstream>
#include <iomanip>
#include <iterator>
#include <climits>
using namespace std;

typedef ostringstream OSS;
typedef istringstream ISS;

typedef vector<int> VI;
typedef vector< VI > VVI;

typedef long long LL;

typedef pair<int, int> PII;
typedef vector<PII> VPII;

#define X first
#define Y second

int H, W;
vector<string> ts;
vector< vector<bool> > done;

void dfs(int y, int x) {
        if (done[y][x]) return;
        done[y][x] = true;

        for (int dx = -1; dx <= 1; dx++) {
                for (int dy = -1; dy <= 1; dy++) {
                        if (!(!dy ^ !dx)) continue;

                        int nx = x + dx;
                        int ny = y + dy;

                        if (ny < 0 || nx < 0 || ny >= H || nx >= W) continue;
                        if (ts[y][x] != ts[ny][nx]) continue;

                        dfs(ny, nx);
                }
        }
}

int main(void) {
        while (cin >> H >> W, H) {
                ts = vector<string>(H);
                done = vector< vector<bool> >(H, vector<bool>(W));

                for (int y = 0; y < H; y++) cin >> ts[y];

                int cnt = 0;

                for (int y = 0; y < H; y++) {
                        for (int x = 0; x < W; x++) {
                                if (!done[y][x]) {
                                        dfs(y, x);
                                        cnt++;
                                }
                        }
                }

                cout << cnt << endl;
        }

        return 0;
}