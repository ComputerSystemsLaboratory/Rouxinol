#include <cstdio>
#include <algorithm>
#include <vector>

#define rep(i, N) for (int i = 0; i < N; ++i)

using namespace std;

bool linerSearch(vector<int> vec, int key) {
    auto itr = std::find(vec.begin(), vec.end(), key);
    size_t index = std::distance(vec.begin(), itr);
    return index != vec.size();
}

int main() {
    int n, q, key;
    scanf("%d", &n);
    vector<int> S(n);
    rep(i, n) scanf("%d", &S[i]);

    int ans = 0;
    scanf("%d", &q);
    for (int i = 0; i < q; ++i) {
        scanf("%d", &key);
        if (linerSearch(S, key)) ++ans;
    }

    printf("%d\n", ans);
    return 0;
}

