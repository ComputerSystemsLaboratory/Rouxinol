#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string S;
    cin >> S;
    stack<int> st1;
    stack<pair<int, int> > st2;
    int ans = 0;

    for (int i = 0; i < S.size(); ++i) {
        if (S.at(i) == '\\') {
            st1.push(i);
        } else if (S.at(i) == '/' && !st1.empty()) {
            int j = st1.top();
            st1.pop();
            int num = i - j;
            ans += num;
            while (!st2.empty() && st2.top().first > j) {
                num += st2.top().second;
                st2.pop();
            }
            st2.push(make_pair(j, num));
        }
    }
    vector<int> V;
    while (!st2.empty()) {
        V.push_back(st2.top().second);
        st2.pop();
    }
    cout << ans << endl;
    cout << V.size();
    for (int i = V.size() - 1; i >= 0; --i) {
        cout << ' ' << V.at(i);
    }
    cout << endl;

    return 0;
}
