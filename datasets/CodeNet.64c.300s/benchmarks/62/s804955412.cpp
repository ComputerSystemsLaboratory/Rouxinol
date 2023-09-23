#include "bits/stdc++.h"
using namespace std;
int main(){
    int n,m,i,j,sum;
    cin >> n>>m;
    int A[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> A[i][j];
        }
    }
    int B[m];
    for(i=0;i<m;i++) cin >> B[i];
    for(i=0;i<n;i++){
        sum = 0;
        for(j=0;j<m;j++) sum += A[i][j]*B[j];
        cout << sum << endl;
    }
    return 0;
}
