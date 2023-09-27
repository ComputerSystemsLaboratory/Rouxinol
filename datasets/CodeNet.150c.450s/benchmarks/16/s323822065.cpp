#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    stack<int> pos;
    stack<pair<int, int>> area;
    for (int i = 0, n = s.size(); i < n; ++i) {
        if (s[i] == '\\')
            pos.push(i);
        else if (s[i] == '/' && !pos.empty()) {
            int idx = pos.top(); pos.pop();
            int num = i - idx;

            while (!area.empty()) {
                auto now = area.top();
                if (now.first < idx)
                    break;
                area.pop();
                num += now.second;
            }

            area.push(make_pair(idx, num));
        }
    }


    int sum = 0;
    vector<int> L;
    while (!area.empty()) {
        auto now = area.top(); area.pop();
        sum += now.second;
        L.emplace_back(now.second);
    }

    // Output
    cout << sum << "\n";
    cout << L.size();
    for (int i = L.size() - 1; i >= 0; --i)
        cout << " " << L[i];
    cout << "\n";

    return 0;
}