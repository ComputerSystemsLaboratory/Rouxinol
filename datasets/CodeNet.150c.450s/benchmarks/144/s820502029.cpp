#include<iostream>
using namespace std;

int main() {
    int n, m, l;
    cin >> n >> m >> l;
    int A[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }
    int B[m][l];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < l; j++) {
            cin >> B[i][j];
        }
    }

    int C[n][l];
    for (int i = 0; i < n; i++) {
        long long xs[l];
        for (int j = 0; j < l; j++) {
            long long sum = 0;
            for (int k = 0; k < m; k++) {
                sum += A[i][k] * B[k][j];
            }
            xs[j] = sum;
        }
        for (int i = 0; i < l - 1; i++) cout << xs[i] << ' ';
        cout << xs[l - 1] << endl;
    }
}