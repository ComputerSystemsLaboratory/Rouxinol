#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

size_t binary_knapsack(vector<size_t> w, vector<size_t> v, size_t c) {
    vector<size_t> dp(c+1);
    size_t n=w.size();
    for (size_t i=0; i<n; i++)
        for (size_t j=c; j>=w[i]; --j)
            if (dp[j] < dp[j-w[i]] + v[i])
                dp[j] = dp[j-w[i]] + v[i];

    return dp[c];
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