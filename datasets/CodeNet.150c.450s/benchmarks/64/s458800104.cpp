#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    //sort(begin(v), end(v));
    //v.erase(unique(begin(v), end(v)), end(v));

    int q;
    cin >> q;
    for (int l = 0; l < q; ++l) {
        int m;
        cin >> m;

        // cout << m << endl;
        vector<bool> dp(m + 1);
        for (int i : v) {
            vector<int> pos;
            if (m == 100026) {
                cout << i << endl;
            }
            for (int j = 0; j < dp.size(); ++j) {
                if (dp[j]) {
                    pos.push_back(j);
                    pos.push_back(j + i);
                }
                else if (i == j) {
                    pos.push_back(j);
                }
            }
            dp = vector<bool>(m + 1);
            for (int j : pos) {
                if (m == 100026)
                    cout << j << ' ';
                if (j < dp.size()) {
                    dp[j] = true;
                }
            }
            if (m == 100026)
                cout << endl;
            if (m == 100026) {
                for (int k = 0; k < dp.size(); ++k) {
                    if (dp[k]) {
                        cout << k << ' ';
                    }
                }
                cout << endl;
            }
        }
        // for (bool i : dp) {
        //    cout << boolalpha << i << ' ';
        //}
        // cout << endl;
        //cout << m << ' ';
        if (dp[m]) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
}