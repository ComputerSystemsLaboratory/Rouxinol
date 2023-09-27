#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(i = 0;i < n;++i)
#define all(v) v.begin(), v.end()
using ll = long long;

int main()
{
    ll i,j;
    while(true){
        ll n;
        cin >> n;
        if(n == 0) return 0;
        vector<ll> times(1e5,0);
        for(i = 0;i < n;++i){
            string hatsu,tyaku;
            cin >> hatsu >> tyaku;
            ll h1 = (hatsu.at(0) - '0')*10 + (hatsu.at(1) - '0');
            ll m1 = (hatsu.at(3) - '0')*10 + (hatsu.at(4) - '0');
            ll s1 = (hatsu.at(6) - '0')*10 + (hatsu.at(7) - '0');
            ll tmp1 = h1*60*60 + m1*60 + s1;

            ll h2 = (tyaku.at(0) - '0')*10 + (tyaku.at(1) - '0');
            ll m2 = (tyaku.at(3) - '0')*10 + (tyaku.at(4) - '0');
            ll s2 = (tyaku.at(6) - '0')*10 + (tyaku.at(7) - '0');
            ll tmp2 = h2*60*60 + m2*60 + s2;
            ++times.at(tmp1); --times.at(tmp2);
        }
        for(i = 0;i < times.size()-1;++i){
            times.at(i+1) += times.at(i);
        }
        sort(all(times));
        cout << times.back() << endl;
    }
    return 0;
}
