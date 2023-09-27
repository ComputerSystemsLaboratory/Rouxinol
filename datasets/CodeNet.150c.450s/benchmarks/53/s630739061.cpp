#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0; i<n; i++)
typedef long long ll;
typedef long long unsigned int llu;
ll MOD = 1000000007;
ll INF = 1000000009;

vector<ll> v;

void primefactorize(ll x){
    ll tmp = x;
    ll i = 2;
    while(i*i<=x){
        if(tmp%i==0){
            v.emplace_back(i);
            tmp /= i;
        }
        else{
            i++;
        }
    }
    if(tmp!=1) v.emplace_back(tmp);
}

void solve(){

    int n;
    cin >> n;
    primefactorize(n);
    cout << n << ": ";
    rep(i,v.size()){
        if(i!=v.size()-1){
            cout << v[i] << " ";
        }
        else{
            cout << v[i];
        }
    }
    cout << endl;
}


int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  solve();
  return 0;
}

