//
// Created by yijiezhu on 12/20/16.
//

#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

const int MAX_N = 1001;
char matrix[MAX_N][MAX_N];
bool visited[MAX_N][MAX_N];
int H, W, N, si, sj;
int delta[] = {0, 1, 0, -1, 0};

void solve() {
    int cnt{0};
    for (int ni = 1; ni <= N; ni++) {
        queue<pair<pair<int, int>, int> > que;
        que.push(make_pair(make_pair(si, sj), 0));
        memset(visited, false, sizeof(visited));
        visited[si][sj] = true;
        while(!que.empty()) {
            auto p = que.front();
            que.pop();
            int x = p.first.first, y = p.first.second;
            if (matrix[x][y] == '0' + ni) {
                si = x; sj = y;
                cnt += p.second;
                break;
            }
            for (int q = 0; q < 4; q++) {
                int n_i = x + delta[q], n_j = y + delta[q+1];
                if (n_i < 0 || n_i >= H || n_j < 0 || n_j >= W) continue;
                if (matrix[n_i][n_j] == 'X' || visited[n_i][n_j]) continue;
                que.push(make_pair(make_pair(n_i, n_j), p.second + 1));
                visited[n_i][n_j] = true;
            }
        }
    }
    cout << cnt << endl;
}

int main() {
    cin >> H >> W >> N;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 'S') {
                si = i; sj = j;
            }
        }
    }
    solve();
}