#include <bits/stdc++.h>
using namespace std;

string table[10] = {
    "",
    ".,!? ",
    "abc",
    "def",
    "ghi",
    "jkl",
    "mno",
    "pqrs",
    "tuv",
    "wxyz"
};

string convert(string s) {
    if (s == "") return "";
    int i = s[0] - '0';
    int j = s.size() - 1;
    return string(1, table[i][j % (int)table[i].size()]);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        string ans = "", t = "";
        for (int i=0; i<(int)s.size(); ++i) {
            if (s[i] == '0') {
                ans += convert(t);
                t = "";
            } else {
                t += s[i];
            }
        }
        cout << ans << endl;
    }
}
