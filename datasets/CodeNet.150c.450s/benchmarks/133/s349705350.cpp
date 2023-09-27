#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int d;
    cin >> d;
    vector<int> c(26);
    for (int i = 0; i < 26; i++)
        cin >> c[i];
    vector<vector<int>> s(d, vector<int>(26));
    for (int i = 0; i < d; i++)
        for (int j = 0; j < 26; j++)
            cin >> s[i][j];
    vector<int> t(d);
    for (int i = 0; i < d; i++)
        cin >> t[i];
    
    int score = 0;
    vector<int> last(26, 0);
    for (int i = 1; i <= d; i++) {
        score += s[i-1][t[i-1]-1];
        last[t[i-1]-1] = i;
        for (int j = 0; j < 26; j++)
            score -= c[j] * (i - last[j]);
        cout << score << endl;
    }
    
    return 0;
}
