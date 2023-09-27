#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

bool can_make(vector<int> &A, int m, vector<vector<int>> &dp, size_t i=0) {
    if (i == A.size()) return !m;
    if (!m) return (dp[m][i] = 1);
    if (m < 0) return false;
    if (~dp[m][i]) return dp[m][i];

    if (m >= A[i])
        if (can_make(A, m-A[i], dp, i+1))
            return (dp[m][i] = 1);

    return (dp[m][i] = can_make(A, m, dp, i+1));
}

int main() {
    size_t n;
    scanf("%zu", &n);

    vector<int> A(n);
    for (size_t i=0; i<n; ++i)
        scanf("%d", &A[i]);

    size_t q;
    scanf("%zu", &q);

    for (size_t i=0; i<q; ++i) {
        int m;
        scanf("%d", &m);

        vector<vector<int>> dp(m+1, vector<int>(A.size(), -1));
        printf("%s\n", can_make(A, m, dp)? "yes":"no");
    }

    return 0;
}