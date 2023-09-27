#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n,m,l;
    cin >> n >> m >> l;

    int a[n][m];
    int b[m][l];
    memset(a, 0, sizeof(int) * n * m);
    memset(b, 0, sizeof(int) * m * l);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int in;
            cin >> in;
            a[i][j] = in;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < l; j++) {
            int in;
            cin >> in;
            b[i][j] = in;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            long int sum = 0;
            for (int k = 0; k < m; k ++) {
                sum += a[i][k] * b[k][j];
            }
            cout << sum;
            if (j < l-1)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}