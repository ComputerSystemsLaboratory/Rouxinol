#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    int vector[m];
    for (int i = 0; i < m; i++) {
        cin >> vector[i];
    }

    int result[n];
    for (int i = 0; i < n; i++) {
        result[i] = 0;
        for (int j = 0; j < m; j++) {
            result[i] += matrix[i][j] * vector[j];
        }
    }
    for (int i = 0; i < n; i++) {
        cout << result[i] << endl;
    }
}