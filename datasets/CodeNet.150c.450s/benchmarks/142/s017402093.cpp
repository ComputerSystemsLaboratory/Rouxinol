#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;
#define rep(i, n)  for (int i = 0; i <  (int)(n); i++)
#define rep1(i, n) for (int i = 1; i <= (int)(n); i++)
#define all(x) (x).begin(), (x).end()
const ll INF = ll(1e18)+1;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n,k;
    cin >> n >> k;
    vector<ll> ai(n);
    rep(i,n) cin >> ai[i];

    rep(i,n-k){
        if(ai[i] < ai[k+i]) cout << "Yes\n";
        else cout << "No\n";
    }
}