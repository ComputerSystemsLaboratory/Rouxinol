#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n, m, l, row, col, tmp;
    cin >> n >> m >> l;
    row = n;
    col = m;
    int A[n][m], B[m][l];
    for (int i=0; i<2; i++){
        if (i == 1){
            row = m;
            col = l;
        }
        for (int j=0; j<row; j++){
            for (int k=0; k<col; k++){
                scanf("%d", &tmp);
                if (i == 0) A[j][k] = tmp;
                else B[j][k] = tmp;
            }
        }
    }
    long long int sum;
    for (int i=0; i<n; i++){
        for (int j=0; j<l; j++){
            sum = 0;
            for (int k=0; k<m; k++){
                sum += A[i][k] * B[k][j];
            }
            printf("%lld", sum);
            if (j < l-1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}

