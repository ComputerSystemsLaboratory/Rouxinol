#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(x) x.begin(),x.end()
typedef long long ll;
ll mod = 1000000007;
ll inf = 1e18;
int main(){

    int n;
    cin >> n;
    vector<int> v(100010);
    int a;
    rep(i,n){
        cin >> a;
        v[a]++;
    }

    ll sum=0;
    rep(i,100010) sum+=i*v[i];

    int q;
    cin >> q;
    int b,c;
    rep(i,q){
        cin >> b >> c;
        v[c]+=v[b];
        sum+=(c-b)*v[b];
        cout << sum << endl;
        v[b]=0;
    }

    // cout << sum << endl;
    
    return 0;
}