#include <iostream>

using namespace std;

int main() {
    // input
    int n, m, l;
    cin >> n >> m >> l;

    int arrA[n*m];
    for(int i=0; i<n; i++) {
        for(int ii=0; ii<m; ii++) {
            cin >> arrA[m*i + ii];
        }
    }

    int arrB[m*l];
    for(int j=0; j<m; j++) {
        for(int jj=0; jj<l; jj++) {
            cin >> arrB[l*j + jj];
        }
    }
    
    // calc
    long arrC[n*l];
    for(int r=0; r<n; r++) {
        for(int c=0; c<l; c++) {
            long sum = 0;
            for(int idxm=0; idxm<m; idxm++) {
                sum += arrA[m*r + idxm] * arrB[l*idxm + c];
            }
            arrC[l*r + c] = sum;
        }
    }
    
    // output
    for(int k=0; k<n; k++) {
        for(int kk=0; kk<l; kk++) {
            cout << arrC[l*k + kk];
            if(kk != l-1) cout << " ";
        }
        cout << endl;
    }
}
