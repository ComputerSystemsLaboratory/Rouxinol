#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int m, size_, ans;
string str;
map<string, bool> mp;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> m;

    while (m--) {
        cin >> str;

        size_ = str.size();
        ans = 0;

        for (int i = 1; i < size_; ++i) {
            string u, v, ru, rv;
            u = str.substr(0, i);
            v = str.substr(i, size_ - i);
            ru = u;
            rv = v;
            reverse(ru.begin(), ru.end());
            reverse(rv.begin(), rv.end());

            //cout << u << " " << v << " " << ru << " " << rv << endl;

            if (!mp[u + v]) {
                ans++;
                mp[u + v] = true;
            }
            if (!mp[u + rv]) {
                ans++;
                mp[u + rv] = true;
            }
            if (!mp[ru + v]) {
                ans++;
                mp[ru + v] = true;
            }
            if (!mp[ru + rv]) {
                ans++;
                mp[ru + rv] = true;
            }
            if (!mp[v + u]) {
                ans++;
                mp[v + u] = true;
            }
            if (!mp[v + ru]) {
                ans++;
                mp[v + ru] = true;
            }
            if (!mp[rv + u]) {
                ans++;
                mp[rv + u] = true;
            }
            if (!mp[rv + ru]) {
                ans++;
                mp[rv + ru] = true;
            }
        }

        cout << ans << endl;
        mp.clear();
    }

    return 0;
}