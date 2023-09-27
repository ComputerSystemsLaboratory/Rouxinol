#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <string.h>
#include <vector>
using namespace std;

int main(void){
    int n, m, l;
    int i, j, k;
    cin >> n >> m >> l;
    double A[100][100]={0}, B[100][100]={0}, C[100][100]={0};
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> A[i][j];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<l;j++){
            cin >> B[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            for(k=0;k<m;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
            if(j==0) printf("%.0lf", C[i][j]);
            else printf(" %.0lf", C[i][j]);
        }
        cout << endl;
    }
    return 0;
}