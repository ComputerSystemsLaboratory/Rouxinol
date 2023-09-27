#include<iostream>
using namespace std;

int main() {
        long int n, m, l, a[100][100], b[100][100], r[100][100], i, j, k;
        for (i = 0; i < 100; i++) {
                for (j = 0; j < 100; j++) {
                        a[i][j] = 0;
                        b[i][j] = 0;
                        r[i][j] = 0;
                }
        }
        cin >> n >> m >> l;
        for (i = 0; i < n; i++) {
                for (j = 0; j < m; j++) {
                        cin >> a[i][j];
                        if (a[i][j] >  10000) {
                                cout << " Too Large" << endl;
                                return 1;
                        }
                }
        }
        for (i = 0; i < m; i++) {
                for (j = 0; j < l; j++) {
                        cin >> b[i][j];
                        if (b[i][j] > 10000) {
                                cout << "Too Large" << endl;
                                return 1;
                        }
                }
        }
        for (i = 0; i < n; i++) {
                for (j = 0; j < l; j++) {
                        for (k = 0; k < m; k++) {
                                r[i][j] += (a[i][k] * b[k][j]);
                        }
                }
        }
        for (i = 0; i < n; i++) {
                for (j = 0; j < l; j++) {
                        cout << r[i][j];
                        if (j != l - 1) cout << " ";
                        else cout << endl;
                }
        }
        return 0;
}