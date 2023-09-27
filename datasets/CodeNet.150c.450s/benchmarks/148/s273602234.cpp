#include <bits/stdc++.h>
using namespace std;

using ll = long long;
//print(fixed << setprecision(10));
#define rep(i,n) for(ll i = 0; i < (n); i++)
#define repk(i,n,k) for(ll i = k; i < (n); i++)
#define all(n) n.begin(), n.end()
#define print(n) cout << n << endl
double PI = acos(-1.0);
int INF = 1e9;
ll LINF = 1e18;
ll MOD = 1e9+7;


int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    ll n;
    cin >> n;
    string s;
    vector<ll> cnt(4,0);
    rep(i,n){
        cin >> s;
        if(s=="AC") cnt[0]++;
        else if(s=="WA") cnt[1]++;
        else if(s=="TLE") cnt[2]++;
        else cnt[3]++;
    }
    print("AC x "<<cnt[0]<<"\nWA x "<<cnt[1]<<"\nTLE x "<<cnt[2]<<"\nRE x "<<cnt[3]);
    return 0;
}