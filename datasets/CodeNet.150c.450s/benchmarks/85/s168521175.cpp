#include <iostream>
#include <vector>
#include <limits>

using namespace std;

// M1, M2, M3, ... , Mn-1, Mn
// M[i,j] = 0 if i = j
// M[i,j] = min { M[i,j] = M[i,k] + M[k+1,j] + p_{i-1} * p_k * p_j } where i <= k < j

int main() {
    int n;
    cin >> n;

    vector<int> P(n+1);
    for (int i = 1; i < n+1; ++i) {
        cin >> P[i-1] >> P[i];
    }

    int M[n+1][n+1];
    for (int i = 1; i <= n; ++i) M[i][i] = 0;
    for (int l = 2; l <= n; ++l) {
        for (int i = 1; i <= n - l + 1; ++i) {
            int j = i + l - 1;
            M[i][j] = std::numeric_limits<int>::max();
            for (int k = i; k <= j - 1; ++k) {
                int q = M[i][k] + M[k+1][j] + P[i-1] * P[k] * P[j];
                M[i][j] = min(M[i][j], q);
            }
        }
    }
    cout << M[1][n] << endl;

    return 0;
}