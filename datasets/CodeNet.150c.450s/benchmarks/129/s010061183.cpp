#include <iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cin >> r >> c;
    int A[r+1][c+1];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin >> A[i][j];
        }
        A[i][c]=0;
    }
    for(j=0;j<c+1;j++) A[r][j]=0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++) A[i][c] += A[i][j];
    }
    for(j=0;j<c+1;j++){
        for(i=0;i<r;i++) A[r][j] += A[i][j];
    }
    for(i=0;i<r+1;i++){
        for(j=0;j<c+1;j++){
            if(j) cout << " ";
            cout << A[i][j];
        }
        cout << endl;
    }
}
