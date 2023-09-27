#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, a, b) for (int i = a; i < b; i++)
//'A' = 65, 'Z' = 90, 'a' = 97, 'z' = 122

int main()
{
    int n;
    cin >> n;
    int s[n];
    rep(i, 0, n) cin >> s[i];
    int q;
    cin >> q;
    int t[q];
    rep(i, 0, q) cin >> t[i];

    int ans = 0;
    rep(i, 0, q) {
        rep(j, 0, n) {
            if (t[i] == s[j]) {
                ans ++;
                break;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

