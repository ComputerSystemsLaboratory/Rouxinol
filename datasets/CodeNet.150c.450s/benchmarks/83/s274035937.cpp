#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 101;
const int MAXW = 10001;

int main() {
    int N, W;
    vector<int> v(MAXN);
    vector<int> w(MAXN);
    vector<int> dp(MAXW, 0);
    scanf("%d %d", &N, &W);
    for (int i = 0; i < N; ++i) {
        scanf("%d %d", &v[i], &w[i]);
    }
    for (int i = 0; i < N; i++) {
        for (int j = W; j >= w[i]; j--) {
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }
    }
    printf("%d\n", dp[W]);
}