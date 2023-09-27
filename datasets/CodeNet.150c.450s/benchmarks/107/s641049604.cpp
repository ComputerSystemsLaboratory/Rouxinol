#include <bits/stdc++.h>

using namespace std;

int main() {

    string s1, s2;

    cin >> s1 >> s2;

    int size1 = s1.size();
    int size2 = s2.size();
    int d[size1 + 1][size2 + 1];

    for(int i = 0; i <= size1; ++i) {
        d[i][0] = i;
    }

    for(int i = 0; i <= size2; ++i) {
        d[0][i] = i;
    }

    for(int i = 1; i <= size1; ++i) {
        for(int j = 1; j <= size2; ++j) {
            int cost = s1[i - 1] == s2[j - 1] ? 0 : 1;
            d[i][j] = min(min(d[i - 1][j] + 1, d[i][j - 1] + 1), d[i - 1][j - 1] + cost);
        }
    }

    cout << d[size1][size2] << endl;

}