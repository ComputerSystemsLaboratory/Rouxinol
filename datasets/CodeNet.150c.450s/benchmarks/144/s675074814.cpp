#include <iostream>

using namespace std;

int main(void){
    int n, m, l;
    cin >> n >> m >> l;
    int matrix1[n][m], matrix2[m][l];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix1[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < l; j++) {
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            long sum = 0;
            for (int k = 0; k < m; k++) {
                sum += matrix1[i][k] * matrix2[k][j];
            }
            cout << sum;
            if (j < l-1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}