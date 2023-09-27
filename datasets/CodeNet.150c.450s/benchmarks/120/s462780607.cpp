#include <cstdio>
const int MAXR = 10;
const int MAXC = 10000;
int R, C;
int a[MAXR][MAXC];
#include <algorithm>
void reverse(int x) {
    for (int i = 0; i < C; ++i)
        a[x][i] = !a[x][i];
}
int dfs(int cur) {
    int ans = 0;
    if (cur == R) {
        for (int j = 0; j < C; ++j) {
            int cnt = 0;
            for (int i = 0; i < R; ++i)
                cnt += a[i][j];
            ans += std::max(cnt, R - cnt);
        }
    }
    else {
        ans = dfs(cur + 1);
        reverse(cur);
        ans = std::max(ans, dfs(cur + 1));
        //reverse(cur);
    }
    return ans;
}
int solve() {
    return dfs(0);
}
int main() {
    while (scanf("%d%d", &R, &C), R) {
        for (int i = 0; i < R; ++i)
            for (int j = 0; j < C; ++j)
                scanf("%d", &a[i][j]);
        printf("%d\n", solve());
    }
    return 0;
}
