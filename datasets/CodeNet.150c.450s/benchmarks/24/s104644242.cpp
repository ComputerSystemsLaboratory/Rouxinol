#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
using P = pair<int, int>;

int main () {
    while(1) {
        int n, m;
        cin >> n >> m;
        if (n == 0) break;
        vector<P> v;
        for (int i = 0; i < n; ++i) {
            int d, p;
            cin >> d >> p;
            v.push_back(P(p, d));
        }

        sort(v.begin(), v.end(), greater<P>()); 
        for (P& pd : v) {
            if (pd.second <= m) {
                m -= pd.second;
                pd.second = 0;
            } else {
                pd.second -= m;
                m = 0;
                break;
            }
        }


        int ans = 0;
        for (P pd : v) {
            ans += pd.first * pd.second;
        }
        cout << ans << endl;
    }
}
