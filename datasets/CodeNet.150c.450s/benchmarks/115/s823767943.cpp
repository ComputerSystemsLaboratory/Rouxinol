#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>
#define MAX 1000


int lcs(std::string X, std::string Y) {
    int c[MAX+1][MAX+1];
    int maxl = 0;
    int m = X.size();
    int n = Y.size();
    for (int i = 1; i <= m; i++) {
        c[i][0] = 0;
    }
    for (int i = 1; i <= n; i++) {
        c[0][i] = 0;
    }
    X = ' ' + X;
    Y = ' ' + Y;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (X[i] == Y[j]) {
                c[i][j] = c[i-1][j-1] + 1;
            } else {
                c[i][j] = std::max(c[i-1][j], c[i][j-1]);
            }
            maxl = std::max(maxl, c[i][j]);
        }
    }
    return maxl;
}

int main() {
    std::string s1, s2;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        std::cin >> s1 >> s2;
        int a = lcs(s1, s2);
        printf("%d\n", lcs(s1, s2));
    }
    
    return 0;
}

