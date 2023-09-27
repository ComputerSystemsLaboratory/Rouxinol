#include<iostream>

using namespace std;
using P = pair<int, int>;

int map[22][22];

P dirs[] = {P(1, 0), P(-1, 0), P(0, 1), P(0, -1)};

int dfs(int h, int w) {
    if (!map[h][w]) return 0;
    map[h][w] = 0;
    int ans = 0;
    for (P dir : dirs) {
        ans += dfs(h + dir.first, w + dir.second);
    }
    return ans + 1;
}

int main() {
    while (1) {
        int w, h;
        cin >> w >> h;
        if (w == 0) break;

        for (int i = 0; i < 22; ++i)
            for (int j = 0; j < 22; ++j)
                map[i][j] = 0;
        
        int pw, ph;
        for (int i = 1; i <= h; ++i) {
            for (int j = 1; j <= w; ++j) {
                char c;
                cin >> c;
                if (c == '.') map[i][j] = 1;
                if (c == '@') { 
                    map[i][j] = 1;
                    ph = i;
                    pw = j;
                }
            }
        }
        cout << dfs(ph, pw) << endl;
    }
}