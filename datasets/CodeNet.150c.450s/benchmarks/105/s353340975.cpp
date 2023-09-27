#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define REP(i,n) for(ll i = 0; i<(ll)(n); i++)
#define REPS(i,n) for (ll i = 1; i<=(ll)(n); i++)
#define REPD(i,n) for(ll i=(ll)(n)-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=(a);i<=(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>=(b);i--)
#define pb push_back
#define MOD 1000000007
#define MOD2 998244353
#define PI 3.141592653
#define INF 100000000000000 //14

int main(){
    ll t, n; cin >> t;
    REP(i,t){
        cin >> n;
        vector<ll> a(n);
        REP(k,n) cin >> a[k];
        string s; cin >> s;
        vector<ll> nl={0};
        bool jud = true;
        FORD(j,n-1,0){
            if (s[j]=='0'){
                ll x = a[j];
                REP(k,nl.size()){
                    x = min(x^nl[k],x);
                }
                REP(k,nl.size()){
                    nl[k]=min(nl[k]^x,nl[k]);
                }
                nl.pb(x);
            }
            else{
                ll x = a[j];
                REP(k,nl.size()){
                    x = min(x^nl[k],x);
                }
                if (x!=0){
                    jud = false;
                    break;
                }
            }
            /*cout << j << endl;
            REP(i,nl.size()) cout << nl[i] << " ";
            cout << endl;*/
        }
        if (jud) cout << 0 << endl;
        else cout << 1 << endl;
    }
}