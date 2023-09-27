#include<iostream>

using namespace std;

void scan_list (int X[][100], int a, int b) {
    
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> X[i][j];
        }
    }

}

int main () {

    int n, m ,l;

    int A[100][100];
    int B[100][100];

    long long int C[100][100] = {0};

    int cnt = 0;

    cin >> n >> m >> l;

    scan_list(A, n, m);
    scan_list(B, m, l);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < l; k++) {
                C[i][k] += A[i][j] * B[j][k];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            if (j > 0) {
                cout << " ";
            }
            cout << C[i][j];
        }
        cout << endl;
    }

    return 0;
}
