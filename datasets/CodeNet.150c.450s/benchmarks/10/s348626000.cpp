#include "bits/stdc++.h"
using namespace std;
int main(){
    int n,i,j,k,l,m;
    cin >> n;
    int A[4][3][10];
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            for(k=0;k<10;k++){
                A[i][j][k]=0;
            }
        }
    }
    for(i=0;i<n;i++){
        cin >> j>>k>>l>>m;
        A[j-1][k-1][l-1] += m;
    }
    for(i=0;i<4;i++){
        if(i){
            for(j=0;j<20;j++) cout << "#";
            cout << endl;
        }
        for(j=0;j<3;j++){
            for(k=0;k<10;k++){
                cout << " " << A[i][j][k];
            }
            cout << endl;
        }
    }
    return 0;
}
