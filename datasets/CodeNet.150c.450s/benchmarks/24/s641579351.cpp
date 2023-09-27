#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;
int main(){
    while(1){
        ll N, M;
        cin >> N >> M;
        if(!N && !M) break;
        pair<ll, ll> po[N];
        ll ans = 0;
        for(ll i = 0; i < N; i++){
            cin >> po[i].first >> po[i].second;
            ans += po[i].first * po[i].second;
        }
        sort(po, po + N, [](auto a, auto b){return a.second > b.second;});
        for(ll i = 0; i < N; i++){
            ll num = min(M, po[i].first);
            ans -= po[i].second * num;
            M -= num;
        }
        cout << ans << endl;
    }
    return 0;
}
