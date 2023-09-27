#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<stack>
#include<climits>
#include<cstring>
#include<queue>
#include<complex>
using namespace std;

typedef unsigned long long ull;

int main(){
    int n, m, l;
    ull S;
    cin >> n >> m >> l;
    int A[n][m];
    int B[m][l];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin >> A[i][j];
        }
    }
    for (int i=0;i<m;i++){
        for (int j=0;j<l;j++){
            cin >> B[i][j];
        }
    }

    for (int i=0;i<n;i++){
        for (int j=0;j<l;j++){
            S = 0ull;
            for (int k=0;k<m;k++){
                S += (A[i][k] * B[k][j]);
            }
            if(j == l-1){
                cout << S <<endl;
            }else{
                cout << S << " ";
            }
        }
    }
    return 0;
}