#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, l;
    cin >> n >> m >> l;
    
    vector<long> v(m, 0), w(l, 0);
    vector<vector<long> > a(n, v), b(l, v), c(n, w);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    
    for (int j = 0; j < m; j++) {
        for (int k = 0; k < l; k++) {
            cin >> b[k][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < l; k++) {
            for (int j = 0; j < m; j++) {
                c[i][k] += a[i][j] * b[k][j];
            }
            // cout << c[i][k] << " ";
        }
        // cout << endl;
    }
    
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < l - 1; k++) {
            // for (int j = 0; j < m; j++) {
            //     c[i][k] += a[i][j] * b[k][j];
            // }
            cout << c[i][k] << " ";
        }
        cout << c[i][l-1] << endl;
    }
    
    return 0;
}
