#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define ll long long
inline int roundup(int a, int b) { return (((a + (b -1)) / b)); }
using namespace std;

signed main(void) {
    int n, ac, wa, tle, re;
    ac = wa = tle = re = 0;
    string s;

    scanf("%d", &n);
    for(int i=0; i<n;++i) {
        cin >> s;
        if(s == "AC") {
            ac++;
        } else if(s == "WA") {
            wa++;
        } else if(s == "TLE") {
            tle++;
        } else if(s == "RE") {
            re++;
        }
    }
    cout << "AC x " <<  ac << '\n';
    cout << "WA x " << wa << '\n';
    cout << "TLE x " << tle << '\n';
    cout << "RE x " << re << '\n';
    return 0;
}