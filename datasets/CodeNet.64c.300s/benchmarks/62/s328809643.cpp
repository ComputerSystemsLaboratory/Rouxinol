#include <iostream>

using namespace std;

int main() {
    int n = 100;
    int m = 0;
    cin >> n;
    cin >> m;
    int matA[n][m];
    int matB[m];
    int matC[n];
    for (int i = 0; i < n; i++) {
        matC[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matA[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        cin >> matB[i];
    }
    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matC[i] += matA[i][j] * matB[j];
        }
    }

    for (int i = 0; i < n; i++) {
        cout << matC[i] << endl;
    }


}