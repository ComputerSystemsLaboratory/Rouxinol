#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int R[101];
    int C[101];
    int A[101][101];
    for (int i = 1; i <= n; i++) {
        cin >> R[i] >> C[i];
        A[i][i] = 0;
    }

    for (int k = 2; k <= n; k++) {
        for (int i = 1; i <= (n - k + 1); i++) {
            int j = i + k - 1;
            A[i][j] = 10000001;
            for (int l = i; l < j; l++) {
                A[i][j] = min(A[i][j], A[i][l] + A[l+1][j] + (R[i] * C[l] * C[j]));
            }
        }
    }

    cout << A[1][n] << endl;

    return 0;
}
