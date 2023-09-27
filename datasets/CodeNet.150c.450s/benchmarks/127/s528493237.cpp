#include <bits/stdc++.h>

using namespace std;

#define all(c) (c).begin(), (c).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void add(set<string> &ans, string s1, string s2) {
    ans.insert(s1 + s2);

    reverse(all(s1));
    ans.insert(s1 + s2);

    reverse(all(s2));
    ans.insert(s1 + s2);

    reverse(all(s1));
    ans.insert(s1 + s2);

    reverse(all(s2));
    ans.insert(s1 + s2);
}

void solve() {
    string s;
    cin >> s;
    set<string> ans;
    rep(i, s.size()) {
        int a = i;
        int b = s.size() - i;
        if (a == 0 || b == 0) continue;
        auto s1 = s.substr(0, a);
        auto s2 = s.substr(a, b);
        add(ans, s1, s2);
        add(ans, s2, s1);
    }
    cout << ans.size() << endl;
}
int main() {
    int m;
    cin >> m;
    rep(i, m) { solve(); }

    return 0;
}