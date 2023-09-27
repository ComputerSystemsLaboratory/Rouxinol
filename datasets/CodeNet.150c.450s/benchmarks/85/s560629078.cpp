#include <iostream>
#include <algorithm>
using namespace std;
int p[105];
int m[110][110];
int n;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> p[i-1];
        cin >> p[i];
        m[i][i] = 0;
    }
    for (int l = 2; l <= n; l++) {
        for (int i = 1; i <= n - l + 1; i++) {
            int j = i + l - 1;
            m[i][j] = (i << 21);
            for (int k = i; k <= j - 1; k++) {
                m[i][j] = min(m[i][j], m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]);
            }
        }
    }
    cout<<m[1][n]<<endl;
    return 0;
}