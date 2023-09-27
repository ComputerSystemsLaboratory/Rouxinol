#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vec;
typedef vector<vec> mat;
typedef pair<int,int> P;

int main() {
    int H, W, N;
    cin >> H >> W >> N;
    vector<string> fd(H);
    for (auto& i : fd) cin >> i;

    vec objx(N+1), objy(N+1);
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (fd[i][j] == 'S') objx[0] = i, objy[0] = j;
            else if ('0' <= fd[i][j] && fd[i][j] <= '9') {
                int num = fd[i][j] - '0';
                objx[num] = i;
                objy[num] = j;
            }
        }
    }

    int ans = 0;

    for (int i = 0; i < N; i++) {
        queue<P> que;
        que.push(P(objx[i], objy[i]));

        int INF = 1<<28;
        int dx[] = {0,1,-1,0};
        int dy[] = {1,0,0,-1};
        mat dp(H, vec(W, INF));
        dp[objx[i]][objy[i]] = 0;
        while (que.size()) {
            P p = que.front(); que.pop();
            int x = p.first;
            int y = p.second;

            for (int j = 0; j < 4; j++) {
                int nx = x + dx[j];
                int ny = y + dy[j];

                if (0 <= nx && nx < H && 0 <= ny && ny < W && fd[nx][ny] != 'X') {
                    if (dp[nx][ny] > dp[x][y] + 1) {
                        dp[nx][ny] = dp[x][y] + 1;
                        que.push(P(nx,ny));
                    }
                }
            }
        }

        ans += dp[objx[i+1]][objy[i+1]];
    }

    cout << ans << endl;

    return 0;
}