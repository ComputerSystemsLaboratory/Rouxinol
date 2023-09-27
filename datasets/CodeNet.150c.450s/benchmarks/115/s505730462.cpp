#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <queue>
#include <string>
#include <climits>
using namespace std;

int lcs(string& x, string& y)
{
    int i, j, m = x.length(), n = y.length();
    vector<vector<int> > c(m + 1, vector<int>(n + 1));
    x.insert(x.begin(), ' ');
    y.insert(y.begin(), ' ');
    for (i = 1; i <= m; i++) c[i][0] = 0;
    for (j = 1; j <= n; j++) c[0][j] = 0;
    for (i = 1; i <= m; i++) {
        for (j = 1; j <= n; j++) {
            if (x[i] == y[j])
                c[i][j] = c[i - 1][j - 1] + 1;
            else
                c[i][j] = max(c[i - 1][j], c[i][j - 1]);
        }
    }
    return c[m][n];
}

int main()
{
    int i, n;
    cin >> n;
    string x, y;
    for (i = 0; i < n; i++) {
        cin >> x >> y;
        cout << lcs(x, y) << endl;
    }
    return 0;
}