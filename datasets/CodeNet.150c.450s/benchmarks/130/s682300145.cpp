#include <iostream>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    int a[n][m];
    int b[m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int in;
            cin >> in;
            a[i][j] = in;
        }
    }

    for (int i = 0; i < m; i++) {
        int in;
        cin >> in;
        b[i] = in;
    }

    for (int i = 0; i < n; i++) {
        int res = 0;
        for (int j = 0; j < m; j++) {
            res += a[i][j] * b[j];
        }
        cout << res << endl;
    }
    return 0;
}