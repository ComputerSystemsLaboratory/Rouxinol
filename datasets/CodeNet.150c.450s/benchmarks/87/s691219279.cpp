#include "bits/stdc++.h"
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

using ll = long long;

void check(vector<vector<int>> s) {
    rep(i, s.size()) {
        rep(j, s[i].size()) {
            cout << s[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

int main() {
    int H;
    cin >> H;
    while (H > 0) {
        vector<vector<int>> s(H, vector<int>(6, 0));
        rep(i, H) {
            rep(j, 5) {
                cin >> s[i][j];
            }
        }
        int ans = 0;
        bool f = true;
        while (f) {
            f = false;
            //3つ以上並んだところを消す
            rep(i, H) {
                int l = 0, r = 0;
                rep(j, 5) {
                    if (s[i][j] != 0 && s[i][j] == s[i][j + 1]) {
                        r = j + 1;
                    } else {
                        if (l + 1 < r) {
                            f = true;
                            ans += (r - l + 1) * s[i][l];
                            for (int k = l; k <= r; k++) {
                                s[i][k] = 0;
                            }
                        }
                        l = j + 1;
                        r = j + 1;
                    }
                }
            }
            //check(s);
            //石落下
            bool g = true;
            while (g) {
                g = false;
                rep(j, 5) {
                    for (int i = H - 1; i > 0; i--) {
                        if (s[i][j] == 0) {
                            for (int k = i; k > 0; k--) {
                                s[k][j] = s[k - 1][j];
                                if (s[k][j] > 0) g = true;
                            }
                            s[0][j] = 0;
                        }
                    }
                }
            }
            //check(s);
        }
        cout << ans << "\n";
        cin >> H;
    }
}
