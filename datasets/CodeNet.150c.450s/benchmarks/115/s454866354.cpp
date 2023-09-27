#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
static const int MAX=1000;

int LCS(string X, string Y) {
    int i, j, maxl=0;
    int C[MAX+1][MAX+1];

    int X_len = X.size();
    int Y_len = Y.size();
    X = ' ' + X;
    Y = ' ' + Y;
    for (i=0; i<=X_len; i++) C[i][0]=0;
    for (j=1; j<=Y_len; j++) C[0][j]=0;

    for (i=1; i<=X_len; i++) {
        for (j=1; j<=Y_len; j++) {
            if (X[i]==Y[j]) {
                C[i][j]=C[i-1][j-1]+1;
                maxl = max(C[i][j], maxl);
            } else C[i][j]=max(C[i-1][j], C[i][j-1]);
        }
    }

    return maxl;
}

int main() {
    int n, i;
    string X, Y;
    
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> X >> Y;
        cout << LCS(X, Y) << endl;
    }

    return 0;
}
