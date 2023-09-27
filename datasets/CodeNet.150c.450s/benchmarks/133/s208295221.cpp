#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int d;
    cin >> d;
    vector<int> c(26);
    rep(i, 26) cin >> c[i];
    vector<vector<int>> s(d, vector<int>(26));
    rep(i, d) rep(j, 26) cin >> s[i][j];
    int t;
    vector<int> last(26, -1);
    int satisfy = 0;
    rep(i, d) {
        cin >> t;
        t--;
        satisfy += s[i][t];
        last[t] = i;
        int decrease = 0;
        rep(j, 26) decrease += c[j] * (i - last[j]);
        satisfy -= decrease;
        cout << satisfy << endl;
    }
}