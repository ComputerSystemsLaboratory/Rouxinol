#include <bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
#define pb push_back
#define pii pair < int , int >
#define F first
#define S second
#define endl '\n'
#define int long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math")
#define kill(x) return cout<<x<<'\n', 0;
using namespace std;
const int N=220;
ll a[N];
int Main(){
    ll n;
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> a[i];
    }
    string s;
    cin >> s;
    vector <int> ad;
    for (int i=n;i;i--){
        ll x=a[i];
        for (auto u : ad){
            ll z= (u & (-u));
            if (x & z){
                x ^= u;
            }
        }
        /*
        if (a[2]==2){
                ll z=2;
        z &= -2;
            cout << " " << z << endl;
        }
        */
        if (x!=0){
            ad.pb(x);
            if (s[i-1]=='1'){
                kill(1);
            }
        }
    }
    kill(0);
}
int32_t main(){
    ll t;
    cin >> t;
    while(t--) Main();
}
