#include <iostream>
#include <vector>

using namespace std;

int h, w;
vector<string> vs;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

void dfs(int y, int x, char c) {
    for (int i = 0; i < 4; i++) {
        if (x+dx[i] >= 0 && x+dx[i] < w && y+dy[i] >= 0 && y+dy[i] < h && vs[y+dy[i]][x+dx[i]] == c) {
            vs[y+dy[i]][x+dx[i]] = '-';
            dfs(y+dy[i], x+dx[i], c);
        }
    }
}

int main() {
    while (cin >> h >> w, h|w) {
        vs.clear();
        string input;
        int count = 0;
        for (int i = 0; i < h; i++) {
            cin >> input;
            vs.push_back(input);
        }
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (vs[i][j] != '-') {
                    dfs(i, j, vs[i][j]);
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}