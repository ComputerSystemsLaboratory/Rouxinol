#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

const size_t INF=1uLL<<57;

size_t binary_knapsack(vector<size_t> w, vector<size_t> v, size_t c) {
    size_t n=w.size();
    size_t V=*max_element(v.begin(), v.end());
    vector<size_t> dp(n*V+1, INF); dp[0]=0;

    for (size_t i=0; i<n; ++i)
        for (size_t j=n*V; j>=v[i]; --j)
            if (dp[j] > dp[j-v[i]] + w[i])
                dp[j] = dp[j-v[i]] + w[i];

    size_t res=0;
    for (size_t k=0; k<=n*V; ++k)
        if (dp[k] <= c) res = k;

    return res;
}

int main() {
    size_t N, W;
    scanf("%zu %zu", &N, &W);

    vector<size_t> v(N), w(N);
    for (size_t i=0; i<N; ++i)
        scanf("%zu %zu", &v[i], &w[i]);

    printf("%zu\n", binary_knapsack(w, v, W));
    return 0;
}