#include <bits/stdc++.h>
using ll = long long;
using namespace std;
ll GCD(ll a, ll b){ return a ? GCD(b % a, a) : b; }
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    map<int,int> m;
    ll sum = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        m[a[i]]++;
        sum+=a[i];
    }
    int q;
    cin>>q;
    vector<int> b(q),c(q);
    for(int i=0; i<q; i++) cin>>b[i]>>c[i];
    for(int i=0; i<q; i++){
        ll minus = (ll)b[i] * m[b[i]];
        ll plus = (ll)c[i] * m[b[i]];
        m[c[i]] += m[b[i]];
        m[b[i]] = 0;
        sum -= minus;
        sum += plus;
        cout << sum << endl;
    }
}