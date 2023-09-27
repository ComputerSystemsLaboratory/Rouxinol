#include<bits/stdc++.h>
#define Rushia_mywife ios::sync_with_stdio(0);cin.tie(0);
#define rep(i,head,n) for(int i=(head);i<n;i++)
#define int long long
#define F first
#define S second
#define pb push_back
#define p2(n) (1<<(n))
#define lg2(n) __lg(n)
using namespace std;
using pii = pair<long long,long long>;
using ld = long double;
mt19937 mt_rand(time(0));
const int mod = 1000000007;
const int hnum = 998244353;
const ld PI = acos(-1);
const int N = 2e5+10;

int n,k;
int a[N];

void solve(){
    cin >> n >> k;
    rep(i,0,n)
        cin >> a[i];
    rep(i,k,n){
        if(a[i]>a[i-k])
            cout << "Yes\n";
        else  
            cout << "No\n";
    }
}

signed main(){
    Rushia_mywife
    solve();
}