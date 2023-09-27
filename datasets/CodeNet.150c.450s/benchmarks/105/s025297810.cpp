#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define REP(i,n) for (ll i = 0; i < (n); ++i)
#define RREP(i, n) for (ll i = (n) - 1; i >= 0; --i)
#define ALL(v) (v).begin(), (v).end()
template<class T>
using reverse_priority_queue = priority_queue<T, vector<T>, greater<T>>;


void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    REP(i, n){ cin >> a.at(i); }
    string s;
    cin >> s;
    if(s.back() == '1'){
        cout << 1 << endl;
        return;
    }

    vector<ll> z;
    RREP(i, s.size()){
        if(s.at(i) == '0'){
            z.push_back(a.at(i));
        }else{
            if(s.at(i + 1) == '0'){
                sort(ALL(z));
                RREP(j, z.size()){
                    if(z.at(j) == 0){ continue; }
                    ll k;
                    for(k = 60; k >= 0; --k){
                        if((z.at(j) >> k) & 1){
                            break;
                        }
                    }
                    REP(l, z.size()){
                        if(l == j){ continue; }
                        if((z.at(l) >> k) & 1){
                            z.at(l) ^= z.at(j);
                        }
                    }
                }
                sort(ALL(z));
            }

            ll y = a.at(i);
            RREP(j, z.size()){
                if(z.at(j) == 0){ continue; }
                ll k;
                for(k = 60; k >= 0; --k){
                    if((z.at(j) >> k) & 1){
                        break;
                    }
                }
                if((y >> k) & 1){
                    y ^= z.at(j);
                }
            }
            if(y != 0){
                cout << 1 << endl;
                return;
            }
        }
    }
    cout << 0 << endl;
}

int main(){
    ll t;
    cin >> t;
    REP(i, t){
        solve();
    }
    return 0;
}
