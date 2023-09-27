#include <iostream>
#include <vector>

using ll = long long;
using namespace std;

/* initialize */
int lcs(string A, string B){
    int m = A.length(), n = B.length();
    int c[m+1][n+1];
    int maxl = 0;
    A = ' ' + A;
    B = ' ' + B;
    for (int i = 0; i <= m; ++i) c[i][0]=0;
    for (int i = 1; i <= n; ++i) c[0][i]=0;
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (A[i]==B[j]) c[i][j] = c[i-1][j-1]+1;
            else c[i][j] = max(c[i-1][j], c[i][j-1]);
            maxl = max(maxl, c[i][j]);
        }
    }
    return maxl;
};
/* main */
int main() {
    int n;
    cin >> n;
    string s1, s2;
    for (int i = 0; i < n; ++i) {
        cin >> s1 >> s2;
        int s = lcs(s1, s2);
        cout << s << "\n";
    }
    return 0;
}
