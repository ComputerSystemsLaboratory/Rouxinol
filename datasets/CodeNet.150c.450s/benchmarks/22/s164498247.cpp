#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(i = 0;i < n;++i)
#define all(v) v.begin(), v.end()
using ll = long long;

int main()
{
    ll i,j;
    ll INF = 1e18;
    
    ll v,e,r;
    cin >> v >> e >> r;

    vector<ll> s(e);
    vector<ll> t(e);
    vector<ll> d(e);
    for(i = 0;i < e;++i){
        cin >> s.at(i) >> t.at(i) >> d.at(i);
    }
    
    vector<ll> vdist(v,INF);
    ll top = r;
    vdist.at(top) = 0;
    rep(j, v){
        bool update = false;
        for(i = 0;i < e;++i){
            if(vdist.at(s.at(i)) != INF && vdist.at(t.at(i)) > vdist.at(s.at(i)) + d.at(i)){
                vdist.at(t.at(i)) = vdist.at(s.at(i)) + d.at(i);
                update = true;
            }
        }
        if(!update) break;
        else if(j == v-1){
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }
    

    for(i = 0;i < v;++i){
        if(vdist.at(i) >= 1e14) cout << "INF" << endl;
        else cout << vdist.at(i) << endl;
    }

    return 0;
}
