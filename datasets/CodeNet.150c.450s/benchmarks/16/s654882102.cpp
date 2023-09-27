#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

int main() {
    stack<int> s1;
    stack<pair<int, int>> s2;
    char ch;
    int sum = 0;

    for (int i = 0; cin >> ch; i++) {
        if (ch == '\\')
            s1.push(i);
        else if (ch == '/' && s1.size() > 0) {
            int j = s1.top();
            s1.pop();
            int a = i - j;
            sum += a;
            while (s2.size() > 0 && s2.top().first > j) {
                a += s2.top().second;
                s2.pop();
            }
            s2.push(make_pair(j, a));
        }
    }

    vector<int> ans;
    while (s2.size() > 0) {
        ans.push_back(s2.top().second);
        s2.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << sum << endl;
    cout << ans.size();
    rep(i, ans.size()) { cout << ' ' << ans[i]; }
    cout << endl;

    return 0;
}

