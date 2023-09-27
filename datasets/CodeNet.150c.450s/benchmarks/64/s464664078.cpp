#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int32_t n, q;

    cin >> n;
    vector<int32_t> A(n);
    for (int32_t i = 0; i < n; i++) {
        cin >> A[i];
    }

    cin >> q;
    vector<int32_t> m(q);
    int32_t m_max = 0;
    for (int32_t i = 0; i < q; i++) {
        cin >> m[i];
        m_max = max(m_max, m[i]);
    }

    vector<bool> dp(m_max+1);
    fill(dp.begin(), dp.end(), false);
    dp[0] = true;

    for (int32_t i = 0; i < n; i++) {
        for (int32_t j = m_max; j >= 0; j--) {
            if (j - A[i] >= 0) {
                dp[j] = dp[j] || dp[j-A[i]];
            }
        }
    }

    for (int32_t i = 0; i < q; i++) {
        cout << (dp[m[i]] ? "yes" : "no") << endl;
    }

    return 0;
}