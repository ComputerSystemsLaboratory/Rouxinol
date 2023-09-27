#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;

#define N_MAX 1000

char X[N_MAX];
char Y[N_MAX];
int LCS[N_MAX+1][N_MAX+1];


int longest(int x, int y)
{
    for (int i = 0; i < x+1; i++) {
        for (int j = 0; j < y+1; j++) {
            if (i == 0 || j == 0) {
                LCS[i][j] = 0;
//                printf("0 LCS[%d][%d] = %d\n", i, j, LCS[i][j]);
            }
            else if (X[i-1] == Y[j-1]) {
                LCS[i][j] = LCS[i-1][j-1] + 1;
//                printf("1 LCS[%d][%d] = %d\n", i, j, LCS[i][j]);
            }
            else {
                LCS[i][j] = (LCS[i-1][j] > LCS[i][j-1]) ? LCS[i-1][j] : LCS[i][j-1]; 
//                printf("LCS[%d][%d] = %d\n", i, j, LCS[i][j]);
            }
        }
    }

    return LCS[x][y]; 
}

int main() {
    int q;
    int x;
    int y;

    cin >> q;

    for (int i = 0; i < q; i++) {
        scanf("%s", X);
        x = strlen(X);
        scanf("%s", Y);
        y = strlen(Y);
        cout << longest(x, y) << endl;
    }
        
    return 0;
}

