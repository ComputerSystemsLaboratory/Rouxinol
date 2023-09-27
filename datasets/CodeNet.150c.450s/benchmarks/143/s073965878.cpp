#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<cstdio>

using namespace std;

#define ll long long
#define rep(i, n) for(ll i = 0; i < n; i++)
#define P pair<ll, ll>

typedef vector<ll> vec;
typedef vector<vec> mat;

int main(){
    ll n;
    cin >> n;
    ll a[n];
    ll num[100001];
    ll sm = 0;
    rep(i, 100001) num[i] = 0;
    rep(i, n){
        cin >> a[i];
        num[a[i]]++;
        sm += a[i];
    }
    ll q;
    cin >> q;
    ll ans[q];
    rep(i, q){
        ll b, c;
        cin >> b >> c;
        sm = sm - b * num[b] + c * num[b];
        num[c] += num[b];
        num[b] = 0;
        ans[i] = sm;
    }
    // cout << sm << endl;
    rep(i, q){
        cout << ans[i] << endl;
    }
}