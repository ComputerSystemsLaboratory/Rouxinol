#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n, m;

    while(cin >> n >> m, n) {
        vector< int > h(1500), w(1500);
        for(int i = 0; i < n; i++) cin >> h[i];
        for(int i = 0; i < m; i++) cin >> w[i];

        int maxi = 0;
        vector< int > ww, hh;
        for(int i = 0; i < m; i++) {
            int sumw = 0;
            for(int j = i; j < m; j++) {
                sumw += w[j];
                maxi = max(maxi, sumw);
                ww.push_back(sumw);
            }
        }
        for(int i = 0; i < n; i++) {
            int sumh = 0;
            for(int j = i; j < n; j++) {
                sumh += h[j];
                maxi = max(maxi, sumh);
                hh.push_back(sumh);
            }
        }

        sort(hh.begin(), hh.end());
        sort(ww.begin(), ww.end());
        long long ans = 0;
        for(int i = 1; i <= maxi; i++) {
            ans += (long long)(upper_bound(hh.begin(), hh.end(), i) - lower_bound(hh.begin(), hh.end(), i)) * (upper_bound(ww.begin(), ww.end(), i) - lower_bound(ww.begin(), ww.end(), i));
        }
        cout << ans << endl;
    }
}

