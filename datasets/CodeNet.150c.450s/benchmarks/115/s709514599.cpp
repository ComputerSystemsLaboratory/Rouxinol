#include <iostream>
#include <algorithm>
#define LENGTH 1000

using namespace std;

int LCSLength(string X, string Y){
    int m = X.size();
    int n = Y.size();
    int c[LENGTH+1][LENGTH+1];
    int maxLength = 0;
    X = ' ' + X;
    Y = ' ' + Y;
    for(int i = 1; i <= m; i++) c[i][0] = 0;
    for(int j = 0; j <= n; j++) c[0][j] = 0;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(X[i] == Y[j]) c[i][j] = c[i-1][j-1] + 1;
            else if(c[i-1][j] >= c[i][j-1]) c[i][j] = c[i-1][j];
            else c[i][j] = c[i][j-1];
            maxLength = max(maxLength, c[i][j]);
        }
    }
    return maxLength;
}

int main(){
    int n;
    string X, Y;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> X >> Y;
        cout << LCSLength(X, Y) << endl;
    }
    return 0;
}
