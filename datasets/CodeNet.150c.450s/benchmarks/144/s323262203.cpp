#include <iostream>
using namespace std;
int main(void){
    // Here your code !
    int n,m,l;
    cin >> n >> m >> l;
    long long arrayA[n][m];
    long long arrayB[m][l];
    long long arrayC[n][l];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> arrayA[i][j];
        }
    }
    
    for(int i=0;i<m;i++) {
        for(int j=0;j<l;j++) {
            cin >> arrayB[i][j];
        }
    }
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<l;j++) {
            arrayC[i][j] = 0;
        }
    }
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<l;j++) {
            for(int k=0;k<m;k++) {
                arrayC[i][j] = arrayC[i][j] + arrayA[i][k] * arrayB[k][j];
            }
        }
    }
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<l;j++) {
            cout << arrayC[i][j];
            if(j != l-1)
                cout << " ";
        }
        cout << endl;
    }
}