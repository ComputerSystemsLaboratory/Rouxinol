#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>

using namespace std;

int DP[1001][1001];

int main(){
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        char X[1002],Y[1002];
        scanf("%s%s",X,Y);
        
        int y = strlen(Y);
        int x = strlen(X);
        
        for (int i = 0; i <= y; i++) DP[i][0] = 0;
        for (int i = 0; i <= x; i++) DP[0][i] = 0;
        
        for (int r = 1; r <= y; r++) {
            for (int c = 1; c <= x; c++) {
                if (Y[r-1] == X[c-1]) DP[r][c] = DP[r-1][c-1]+1;
                else DP[r][c] = max(DP[r-1][c],DP[r][c-1]);
            }
        }
        cout << DP[y][x] << endl;
        
    }
    
    
    return 0;
}