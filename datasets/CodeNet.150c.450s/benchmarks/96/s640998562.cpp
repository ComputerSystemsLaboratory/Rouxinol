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

    vector<string> out{ "",
                        ".,!? ",
                        "abc",
                        "def",
                        "ghi",
                        "jkl",
                        "mno",
                        "pqrs",
                        "tuv",
                        "wxyz"};

    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        string ans = "";
        int base;
        int cnt = 0;
        rep(i, s.size()) {
            if (i >= 1 && s[i - 1] != '0' && s[i] == '0') {
                ans += out[base][(cnt - 1) % (int)out[base].size()];
                cnt = 0;
            } else if (s[i] != '0') {
                base = s[i] - '0';
                cnt++;
            }
        }

        cout << ans << endl;
        
    }

}