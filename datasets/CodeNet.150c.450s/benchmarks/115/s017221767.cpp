#include <iostream>
using namespace std;

int max(int a, int b) { return a < b ? b : a; }

int lcs(string x, string y) {
    int c[1001][1001] = {0};
    int m = x.size();
    int n = y.size();
    int maxl = 0;
    x = ' ' + x;
    y = ' ' + y;
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (x[i] == y[j]) {
                c[i][j] = c[i - 1][j - 1] + 1;
            } else {
                c[i][j] = max(c[i - 1][j], c[i][j - 1]);
            }
            maxl = max(maxl, c[i][j]);
        }
    }

    return maxl;
}

int main() {

    int n;
    cin >> n;
    string s1, s2;
    for (int i = 0; i < n; ++i) {
        cin >> s1 >> s2;
        cout << lcs(s1, s2) << endl;
    }

    return 0;
}