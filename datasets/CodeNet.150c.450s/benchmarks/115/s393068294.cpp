#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int lcs(string s1, string s2) {
    int i, j, ret = 0;
    int n = s1.size();
    int m = s2.size();
    int c[n+1][m+1];
    s1 = ' ' + s1;
    s2 = ' ' + s2;

    for (i = 0; i <= n; i++) c[i][0] = 0;
    for (j = 1; j <= m; j++) c[0][j] = 0;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            if (s1[i] == s2[j]) {
                c[i][j] = c[i - 1][j - 1] + 1;
            }
            else {
                c[i][j] = max(c[i - 1][j], c[i][j - 1]);
            }
            ret = max(ret, c[i][j]);
        }
    }
    
    return ret;
}

int main(void) {
    int q, i;
    string s1, s2;
    
    scanf("%d", &q);
    for (i = 0; i < q; i++) {
        cin >> s1 >> s2;
        printf("%d\n", lcs(s1, s2));
    }

    return 0;
}