#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, l;
    long long t;
    cin >> n >> m >> l;
    long long a[n][m], b[m][l], c[n][l];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> t;
            a[i][j] = t;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < l; j++) {
            cin >> t;
            b[i][j] = t;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            long long sum = 0;
            for (int k = 0; k < m; k++) {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            cout << c[i][j];
            if (j == l - 1) cout << endl;
            else cout << ' ';
        }
    }
}

