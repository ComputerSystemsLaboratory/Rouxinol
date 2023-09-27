#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(){
    int D;
    cin >> D;
    vector<int> c(27, 0);
    rep(j, 26) cin >> c[j+1];
    int s[D+1][27];
    rep(i, D){
        rep(j, 26){
            cin >> s[i+1][j+1];
        }
    }
    vector<int> t(D+1, 0);
    rep(i, D) cin >> t[i+1];

    int ans = 0;
    vector<int> lastday(27, 0);

    for(int day = 1; day <= D; day++){
        ans += s[day][t[day]];
        lastday[t[day]] = day;
        for(int j = 1; j <= 26; j++){
            ans -= c[j] * (day - lastday[j]); 
        }
        cout << ans << endl;
    }

    // rep(i, 365){
    //     cout << (i % 26) + 1 << endl;
    // }

    return 0;
}
