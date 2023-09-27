#include <iostream>

using namespace std;

int main() {
    int n, m, l;
    cin >> n;
    cin >> m;
    cin >> l;
    long matA[n][m];
    long matB[m][l];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matA[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < l; j++) {
            cin >> matB[i][j];
        }
    }


    long matC[n][l];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            matC[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            for (int k = 0; k < m; k++) {
                matC[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            cout << matC[i][j];
            if (j == l - 1) {
                break;
            }
            cout << " ";
        }
        cout << endl;
    }


}