#include <iostream>
#include <string>
using namespace std;

static const int N = 1000;

int lcs(string X, string Y) {
    int c[N + 1][N + 1] = {};
    int m = X.length();
    int n = Y.length();

    X = ' ' + X;
    Y = ' ' + Y;
    
    int maxl = 0;
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            if(X[i] == Y[j]) {
                c[i][j] = c[i - 1][j - 1] + 1;
            }
            else {
                c[i][j] = max(c[i - 1][j], c[i][j - 1]);
            }
            maxl = max(maxl, c[i][j]);
        }
    }

    return maxl;
}

int main() {
    int n;
    string X, Y;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> X >> Y;
        cout << lcs(X, Y) << endl;
    }
        
    return 0;
}

