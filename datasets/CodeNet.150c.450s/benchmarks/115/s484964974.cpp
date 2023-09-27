#include <iostream>
#include <string>
#include <array>

using namespace std;


int solve(const string& s1, const string& s2) {
    const size_t N = 1000 + 1;
    int A[N][N] = {0};

    auto m = s1.size();
    auto n = s2.size();
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (s1[i-1] == s2[j-1]) {
                A[i][j] = A[i-1][j-1] + 1;
            } else {
                A[i][j] = max(A[i][j-1], A[i-1][j]);
            }
        }
    }
    return A[m][n];
}

int main() {
    int q;
    cin >> q;

    string s1, s2;
    for (int i = 0; i < q; ++i) {
        cin >> s1 >> s2;
        cout << solve(s1, s2) << endl;
    }

    return 0;
}