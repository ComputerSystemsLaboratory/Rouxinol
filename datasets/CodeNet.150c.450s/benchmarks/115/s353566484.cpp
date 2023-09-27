#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

static const int N = 1000;

static int lcs(string& s1, string& s2) {
    int table[N + 1][N + 1];

    int m = s1.size();
    int n = s2.size();

    int max_len = 0;

    s1 = ' ' + s1;
    s2 = ' ' + s2;

    for (int i = 0; i <= m; i++) table[i][0] = 0;
    for (int j = 0; j <= m; j++) table[0][j] = 0;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s1[i] == s2[j]) {
                table[i][j] = table[i - 1][j - 1] + 1;
            } else {
                table[i][j] = max(table[i - 1][j], table[i][j - 1]);
            }

            max_len = max(table[i][j], max_len);
        }
    }

    return max_len;
}

int main() {
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        string s1, s2;

        cin >> s1 >> s2;

        cout << lcs(s1, s2) << endl;
    }

    return 0;
}