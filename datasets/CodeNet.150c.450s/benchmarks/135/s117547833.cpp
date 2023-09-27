#include<iostream>
#include<map>
#include<vector>

using namespace std;
using ll = long long;

int main() {
    while(1) {
        int n, m;
        cin >> n >> m;
        if (n == 0) break;
        map<int, int> mp;
        vector<int> h;

        for (int i = 0; i < n; ++i) {
            int hi;
            cin >> hi;
            if (mp.find(hi) != mp.end()) {
                mp[hi]++;
            } else {
                mp[hi] = 1;
            }

            int hij = hi;
            for (int j = h.size() - 1; j >= 0; j--) {
                hij += h[j];
                if (mp.find(hij) != mp.end()) {
                    mp[hij]++;
                } else {
                    mp[hij] = 1;
                }
            }

            h.push_back(hi);
        }

        vector<int> w;
        ll ans = 0;
        for (int i = 0; i < m; ++i) {
            int wi;
            cin >> wi;

            if (mp.find(wi) != mp.end()) {
                ans += mp[wi];
            }

            int wij = wi;
            for (int j = w.size() - 1; j >= 0; j--) {
                wij += w[j];
                if (mp.find(wij) != mp.end()) {
                    ans += mp[wij];
                }
            }

            w.push_back(wi);
        }

        cout << ans << endl;
    }

    
}