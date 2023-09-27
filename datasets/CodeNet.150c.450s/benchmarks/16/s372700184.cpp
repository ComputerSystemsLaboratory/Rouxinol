#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define pb(x) push_back(x)
#define mp(x, y) make_pair(x, y)
#define all(x) (x).begin(),(x).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repd(i, n) for (int i = n-1; i >= 0; i--)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define repd2(i, s, n) for (int i = n-1; i >= (s); i--)

int main() {
    char ch;
    int sum = 0;
    stack<int> S1;
    stack<pair<int, int>> S2;
    for (int i = 0; cin >> ch; i++) {
        if (ch == '\\') S1.push(i);
        else if(ch == '/' && S1.size() > 0) {
            int j = S1.top(); S1.pop();
            sum += i - j;
            int a = i - j;
            while (S2.size() > 0 && S2.top().first > j) {
                a += S2.top().second; S2.pop();
            }
            S2.push(mp(j, a));
        }
    }

    vector<int> ans;
    while(S2.size() > 0) {
        ans.pb(S2.top().second);
        S2.pop();
    }
    reverse(all(ans));
    cout << sum << endl;
    cout << ans.size();

    rep(i, ans.size()) {
        cout << " ";
        cout << ans[i];
    }

    cout << endl;

    return 0;
}
