#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int d;
    cin >> d;
    vector<int> c(26), t(d);
    vector<vector<int>> s(d, vector<int>(26));
    for(int i = 0; i < 26; ++i) cin >> c[i];
    for(int j = 0; j < d; ++j)
        for(int i = 0; i < 26; ++i) cin >> s[j][i];
    for(int j = 0; j < d; ++j) {
        cin >> t[j];
        t[j]--;
    }

    int score = 0;
    vector<int> blank(26);

    for(int j = 0; j < d; ++j) {
        score += s[j][t[j]];
        for(int i = 0; i < 26; ++i) {
            if(i == t[j]) {
                blank[i] = 0;
            } else {
                blank[i]++;
                score -= c[i] * blank[i];
            }
        }
        printf("%d\n", score);
    }


    return 0;
}