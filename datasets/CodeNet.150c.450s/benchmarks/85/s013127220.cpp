#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<ll> r(100);
vector<ll> c(100);
vector<vector<ll>> dp(101, vector<ll>(101,-1));

ll solve(ll a, ll b)
{
    if(dp.at(a).at(b) != -1){
        return dp.at(a).at(b);
    }
    if(b-a == 1){
        return dp.at(a).at(b) = 0;
    }else if(b-a == 2){
        return dp.at(a).at(b) = r.at(a)*c.at(a)*c.at(b-1);
    }else{
        vector<ll> tmp;
        ll i;
        for(i = a+1;i <= b-1;++i){
            ll tmp1 = solve(a, i);
            ll tmp2 = solve(i, b);
            tmp.push_back(tmp1 + tmp2 + r.at(a)*r.at(i)*c.at(b-1));
        }
        sort(tmp.begin(), tmp.end());
        return dp.at(a).at(b) = tmp.front();
    }
}

int main()
{
    ll i,j;
    ll n;
    cin >> n;
    for(i = 0;i < n;++i){
        cin >> r.at(i) >> c.at(i);
    }
    ll ans = solve(0,n);
    cout << ans << endl;
    return 0;
}

