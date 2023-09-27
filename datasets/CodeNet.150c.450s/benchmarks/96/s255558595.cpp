#include <iostream>
#include <string>

#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace std;
string keys[10];
string input;

void solve() {
    string ans;
    string now;
    int cnt = 0;
    for (auto c : input) {
        if (c == '0') {
            ans += now;
            now = "";
            cnt = 0;
        } else {
            now = keys[c - '0'][cnt];
            cnt++;
            cnt %= keys[c - '0'].size();
        }
    }
    cout << ans << endl;
}

int main() {
    keys[1] = ".,!? ";
    keys[2] = "abc";
    keys[3] = "def";
    keys[4] = "ghi";
    keys[5] = "jkl";
    keys[6] = "mno";
    keys[7] = "pqrs";
    keys[8] = "tuv";
    keys[9] = "wxyz";
    int n;
    cin >> n;
    rep(i, n) {
        cin >> input;
        solve();
    }
}