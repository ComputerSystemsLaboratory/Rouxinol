#include <bits/stdc++.h>
using namespace std;
#define int long long   // <-----!!!!!!!!!!!!!!!!!!!

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n)-1;i>=0;i--)
#define rrep2(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define all(a) (a).begin(),(a).end()

typedef long long ll;
typedef pair<int, int> P;

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    while (cin >> n, n) {
        int pre = 0;    // floor
        vector<int> a(2, 0);
        int ans = 0;
        rep(i, n) {
            string s;
            cin >> s;
            a[s[0] == 'r'] = s[1] == 'u';
            if (a[0] != pre && a[1] != pre) {
                ans++;
                pre ^= 1;
            }
        }
        cout << ans << endl;
    }
}