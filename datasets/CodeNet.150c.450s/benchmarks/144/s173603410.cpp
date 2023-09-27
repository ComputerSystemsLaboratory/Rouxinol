#include <iostream>
#include <vector>

using namespace std;

int main() {
    int32_t n, m, l;

    cin >> n >> m >> l;

    vector<vector<int64_t>> A(n, vector<int64_t>(m)), B(m, vector<int64_t>(l));

    for (int32_t i = 0; i < n; i++) {
        for (int32_t j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    for (int32_t i = 0; i < m; i++) {
        for (int32_t j = 0; j < l; j++) {
            cin >> B[i][j];
        }
    }

    for (int32_t i = 0; i < n; i++) {
        for (int32_t j = 0; j < l; j++) {
            int64_t c_ij = 0;

            for (int32_t k = 0; k < m; k++) {
                c_ij += A[i][k] * B[k][j];
            }

            cout << c_ij;

            if (j != l - 1) {
                cout << " ";
            } else {
                cout << endl;
            }
        }
    }

    return 0;
}