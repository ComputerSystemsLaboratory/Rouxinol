#include <bits/stdc++.h>

#define rep(i, a, b) for (int i = a; i < (int)(b); ++i)
#define rrep(i, a, b) for (int i = b - 1; i >= (int)(a); --i)

using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

constexpr int MAX_NUM = 20000;


int main() {
    string s;
    cin >> s;

    stack<int> s1;
    stack<pair<int, int>> s2;
    int sum = 0;

    for (auto itr = s.begin(); itr != s.end(); ++itr) {
        char c = *itr;

        if (c == '\\') {
            s1.push(itr - s.begin());
        } else if (c == '/') {
            if (!s1.empty()) {
                int left = s1.top(); s1.pop();

                int area = (itr - s.begin()) - left;
                sum += area;

                while (!s2.empty() && left < s2.top().first) {
                    area += s2.top().second; s2.pop();
                }
                s2.emplace(left, area);
            }
        }
    }

    vi ans;
    while(!s2.empty()) { ans.push_back(s2.top().second); s2.pop(); }
    reverse(ans.begin(), ans.end());

    cout << sum << endl;
    cout << ans.size();
    rep(i, 0, ans.size()) {
        cout << " " << ans[i];
    }
    cout << endl;
    return 0;
}
