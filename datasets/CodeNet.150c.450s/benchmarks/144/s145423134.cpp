#include <iostream>

using namespace std;

int main() {
    int n,m,l;
    cin >> n >> m >> l;
    long long  A[n][m],B[m][l],C[n][l];
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> A[i][j];
        }
    }
    for (int i=0; i<m; i++) {
        for (int j=0; j<l; j++) {
            cin >> B[i][j];
        }
    }
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<l; j++) {
             long long  a=0;
            for (int k=0; k<m; k++) {
                a += (A[i][k])*(B[k][j]);
            }
            C[i][j] = a;
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<l; j++) {
            if (j == 0) {
                cout << C[i][j];
            }else{
                cout << " " << C[i][j] ;
            }
        }
        cout << endl;
    }
}

