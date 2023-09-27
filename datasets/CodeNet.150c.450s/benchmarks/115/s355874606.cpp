#include<iostream>
#include<string.h>
#include<algorithm>

#define MAX 1000

using namespace std;

int lcs(string s1, string s2) {
    int C[MAX+1][MAX+1];
    int m = s1.size();
    int n = s2.size();
    for (int i = 0; i <= m; ++i) {
        C[i][0] = 0;
    }
    for (int j = 0; j <= n; ++j) {
        C[0][j] = 0;
    }

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (s1[i-1] == s2[j-1]) {
                C[i][j] = C[i-1][j-1] + 1;
            }
            else {
                C[i][j] = max(C[i][j-1], C[i-1][j]);
            }
        }
    }

    return C[m][n];
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s1, s2;
        cin >> s1 >> s2;
        cout << lcs(s1, s2) << endl;
    }
    return 0;
}