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
    cin >> n;
    while (n--) {
        int y, m, d;
        cin >> y >> m >> d;
        int ans = 0;
        while (y < 1000) {
            while (m <= 10) {
                int dlim = 20 - (y % 3 != 0 && m % 2 == 0);
                while (d <= dlim) {
                    ans++;
                    d++;
                }
                m++;
                d = 1;
            }
            y++;
            m = 1;
            d = 1;
        }
        cout << ans << endl;
    }

}