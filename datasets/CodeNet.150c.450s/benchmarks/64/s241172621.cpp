#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    size_t n;
    scanf("%zu", &n);

    vector<int> A(n);
    for (size_t i=0; i<n; ++i)
        scanf("%d", &A[i]);

    size_t q;
    scanf("%zu", &q);

    vector<int> m(q);
    int max_=0;
    for (size_t i=0; i<q; ++i) {
        scanf("%d", &m[i]);
        if (max_ < m[i])
            max_ = m[i];
    }

    vector<int> dp(max_+1, -1); dp[0]=0;
    for (size_t i=0; i<n; ++i)
        for (int j=0; j<=max_; ++j) {
            if (dp[j] >= 0) {
                dp[j] = 1;
            } else if (j<A[i] || dp[j-A[i]]<=0) {
                dp[j] = -1;
            } else {
                dp[j] = dp[j-A[i]]-1;
            }
        }

    for (size_t i=0; i<q; ++i)
        printf("%s\n", dp[m[i]]>=0? "yes":"no");

    return 0;
}