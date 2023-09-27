#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll N,M;
    while(cin >> N >> M){
        if(N == 0)return 0;
        vector<pair<ll, ll>> v;
        for(int i = 0;i < N;i++){
            ll a,b;cin >> a >> b;
            v.push_back({b, a});
        }
        sort(v.begin(), v.end(), greater<pair<ll, ll>>());
        for(int i = 0;i < N;i++){
            if(v[i].second >= M){
                v[i].second -= M;
                M = 0;
            }else{
                M -= v[i].second;
                v[i].second = 0;
            }
        }
        ll ans = 0;
        for(int i = 0;i < N;i++)ans += v[i].first * v[i].second;
        cout<<ans<<endl;
    }
}

