#include <iostream>
using ll = long long;
using namespace std;

/* initialize */

/* main */
int main() {
    int n, p[101], m[101][101];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> p[i] >> p[i+1];
    }
    for (int i = 1; i <= n; ++i) m[i][i] = 0;
    for (int l = 2; l <= n; ++l) {
        for (int i = 1; i <= n-l+1; ++i) {
            int j = i+l-1;
            m[i][j] = 1 << 21;
            for (int k = i; k <=j-1; ++k) {
                m[i][j] = min(m[i][j] , m[i][k]+m[k+1][j] +p[i-1]*p[k]*p[j]);
            }
        }
    }
    cout << m[1][n] << "\n";
    return 0;
}
