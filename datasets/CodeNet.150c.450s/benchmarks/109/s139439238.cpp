#include <bits/stdc++.h>
 
#define rep(i,n) for(ll i=0;i<n;++i)
#define ALL(a) (a).begin(),(a).end()
 
using namespace std;
using ll  = long long;
using pll = pair<ll, ll>;
 
const ll MOD  = 1e9+7;
const ll LINF = 1LL << 60;
const int INF = 1e9 + 7;

ll time2sec(string time){
    ll hour, min, sec;

    hour = 10*(time[0]-'0') + (time[1]-'0');
    min  = 10*(time[3]-'0') + (time[4]-'0');
    sec  = 10*(time[6]-'0') + (time[7]-'0');

    return 3600*hour + 60*min + sec;

}

int main(){
    while(true){
        ll n;
        cin >> n;
        if(n == 0)break;

        ll cnt[100000] = {};
        rep(i, n){
            string s, g;
            cin >> s >> g;

            cnt[time2sec(s)]++;
            cnt[time2sec(g)]--;
        }

        rep(i, 86400)cnt[i+1] += cnt[i];

        ll ans = 0;
        rep(i, 86410)ans = max(ans, cnt[i]);

        cout << ans << endl;
    }
}
