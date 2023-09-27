#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < n; ++i)
typedef long long ll;
using namespace std;
const int INF = 1e9;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;

        string t[10] = {"", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string ans = "";

        int cnt = 0;
        int now = 0;
        rep(i, s.size()) {
            if (s[i] == '0') {
                if (cnt != 0) {
                    cout << t[now][(cnt - 1) % t[now].size()];
                    cnt = 0;
                }
            } else {
                cnt++;
                now = s[i] - '0';
            }
        }
        cout << "\n";
    }

    return 0;
}
