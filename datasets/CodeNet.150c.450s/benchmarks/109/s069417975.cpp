#include "bits/stdc++.h"
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

using ll = long long;

int main() {
    int n;
    cin >> n;
    while (n > 0) {
        string s, t;
        vector<int> d(24 * 60 * 60, 0);
        rep(i, n) {
            cin >> s >> t;
            int a = stoi(s.substr(0, 2)) * 3600 + stoi(s.substr(3, 2)) * 60 + stoi(s.substr(6, 2));
            d[a]++;
            a = stoi(t.substr(0, 2)) * 3600 + stoi(t.substr(3, 2)) * 60 + stoi(t.substr(6, 2));
            d[a]--;
        }
        int ans = 0, a = 0;
        rep(i, 24 * 60 * 60) {
            a += d[i];
            ans = max(ans, a);
        }
        cout << ans << "\n";
        cin >> n;
    }
}
