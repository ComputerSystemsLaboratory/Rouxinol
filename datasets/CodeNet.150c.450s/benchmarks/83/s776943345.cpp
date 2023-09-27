#include <iostream>

using namespace std;
int v[105];
int w[105];
int c[105][10005];

int main() {
    int n;
    int wei;
    cin >> n >> wei;
    for (int i = 1; i <= n; i++) {
        cin >> v[i] >> w[i];
    }
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= wei; j++) {
            if (i == 0) {
                c[i][j] = 0;
            } else {
                c[i][j] = c[i - 1][j];
            }
            if (i > 0 && j >= w[i]) {
                c[i][j] = max(c[i][j], c[i - 1][j - w[i]] + v[i]);
            }
        }
    }
    cout << c[n][wei] << endl;
    return 0;
}