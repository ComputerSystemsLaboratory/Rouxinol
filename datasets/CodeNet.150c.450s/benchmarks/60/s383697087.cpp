#include<iostream>
using namespace std;

int main() {
    int n, u, k, tmp;
    cin >> n;
    int M[n][n];
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            M[i][j] = 0;
        }
    }

    for (int i=0; i<n; i++) {
        cin >> u >> k;
        for (int j=0; j<k; j++) {
            cin >> tmp;
            M[u-1][tmp-1] = 1;
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << M[i][j];
            if (j<n-1) {
                cout << ' ';
            } else {
                cout << endl;
            }
        }
    }
    return 0;
}
