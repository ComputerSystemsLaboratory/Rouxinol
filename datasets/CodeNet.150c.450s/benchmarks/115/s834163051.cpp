#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define MAX 1000

int c[MAX+1][MAX+1];

int lcs(string A, string B)  {
    int a = A.length();
    int b = B.length();
    int maxl = 0;

    A = ' ' + A;
    B = ' ' + B;
    //配列を作る
    for(int i=0; i<a; i++) {
        c[i][0] = 0;
    }
    for(int j=0; j<b; j++) {
        c[0][j] = 0;
    }
    for(int i=1; i<=a; i++) {
        for(int j=1; j<=b; j++) {
            if(A[i]==B[j]) {
                c[i][j] = c[i-1][j-1] + 1;
            }
            else {
                c[i][j] = max(c[i-1][j], c[i][j-1]);
            }
            maxl = max(maxl, c[i][j]);
        }
    }

    return maxl;
}

int main() {
    string s1, s2;
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> s1 >> s2;
        cout << lcs(s1, s2) << endl;
    }
    return 0;
}
