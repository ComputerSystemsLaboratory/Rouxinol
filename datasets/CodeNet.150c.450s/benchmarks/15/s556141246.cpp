#include <cstdio>
#include <algorithm>
#include <vector>

#define rep(i, N) for (int i = 0; i < N; ++i)

using namespace std;

int main() {
    int n, q, key;
    scanf("%d", &n);
    vector<int> S(n);
    rep(i, n) scanf("%d", &S[i]);

    int ans = 0;
    scanf("%d", &q);
    for (int i = 0; i < q; ++i) {
        scanf("%d", &key);
        for (int j = 0; j < S.size(); ++j) {
            if (S[j] == key) {
                ++ans;
                break;
            }
        }
    }

    printf("%d\n", ans);
    return 0;
}

