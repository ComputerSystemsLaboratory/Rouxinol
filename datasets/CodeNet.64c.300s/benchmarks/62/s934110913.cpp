#include <iostream>
using namespace std;

int main(void) {
    int n, m, t;
    cin >> n >> m;
    int a[n][m];
    int b[m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        t = 0;
        for (int j = 0; j < m; j++) {
            t += a[i][j] * b[j];
        }
        cout << t << endl;
    }
    return 0;
}