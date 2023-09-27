#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(i = 0;i < n;++i)
#define all(v) v.begin(), v.end()
using ll = long long;

int main()
{
    ll i,j;
    ll n,q;
    cin >> n >> q;
    ll k = sqrt(n);
    ll m = (n-1)/k + 1;

    vector<ll> hei(m, 0);
    vector<ll> a(n);

    for(i = 0;i < q;++i){
        ll com;
        cin >> com;
        if(com == 0){
            ll x,y;
            cin >> x >> y;
            --x;
            a.at(x) += y;
            hei.at(x/k) += y;
        }else{
            ll x,y;
            cin >> x >> y;
            --x;    --y;
            ll ans = 0;
            if(x/k == y/k){
                for(j = x;j <= y;++j) ans += a.at(j);
            }else{
                while(x%k != 0){
                    ans += a.at(x);
                    ++x;
                }
                while(y%k != 0){
                    ans += a.at(y);
                    --y;
                }
                ans += a.at(y--);
                while(x/k <= y/k){
                    ans += hei.at(x/k);
                    x += k;
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}
