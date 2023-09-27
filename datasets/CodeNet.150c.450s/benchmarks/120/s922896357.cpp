#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int r, c;
int g[11][10001];
int get() {
    int ans = 0;
    for (int i = 0; i < c; ++i) {
        int t = 0;
        for (int j = 0; j < r; ++j) t += g[j][i];
        ans += t > r - t ? t : r - t;
    }
    return ans;
}
int helper(int rr) {
    if (rr == r) return get();
    int ans = helper(rr + 1);
    for (int i = 0; i < c; ++i) g[rr][i] = 1 - g[rr][i];
    ans = max(ans, helper(rr + 1));
    return ans;
}
int main() {
    while(~scanf("%d %d", &r, &c) && r && c) {
        for (int i = 0; i < r; ++i)for (int j = 0; j < c; ++j)
                scanf("%d", &g[i][j]);
        printf("%d\n", helper(0));
    }
    return 0;
}

