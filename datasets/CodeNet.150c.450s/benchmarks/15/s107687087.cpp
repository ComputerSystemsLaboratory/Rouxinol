#include <cstdio>
#include <algorithm>
#include <vector>

#define rep(i, N) for (int i = 0; i < N; ++i)

using namespace std;

int main() {
    int n, q;
    scanf("%d", &n);
    vector<int> S(n);
    rep(i, n) scanf("%d", &S[i]);
    scanf("%d", &q);
    vector<int> T(q);
    rep(i, q) scanf("%d", &T[i]);

    int ans = 0;
    for (int i = 0; i < T.size(); ++i) {
        for (int j = 0; j < S.size(); ++j) {
            if (S[j] == T[i]) {
                ++ans;
                break;
            }
        }
    }

    printf("%d\n", ans);
    return 0;
}

