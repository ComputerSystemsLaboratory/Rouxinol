#include <iostream>
using namespace std;

int main()
{
    int n, m, l;
    int a[100][100], b[100][100];
    long c[100][100];

    cin >> n >> m >> l;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < l; j++) {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < l; k++) {
                c[i][k] += a[i][j] * b[j][k];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            if (j == l - 1) {
                cout << c[i][j];
            } else {
                cout << c[i][j] << ' ';
            }
        }

        cout << endl;
    }

    return 0;
}