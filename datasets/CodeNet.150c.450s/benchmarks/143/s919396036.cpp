/*
   Author : tarang
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
const int MOD = 1000000007;
#define PI = acos(-1)
using namespace std ;
int a[106];
int main(){
	fastio ;
    ll n ; cin >> n ;
    vector<ll> v(n);
    map<ll ,ll> mp;
    ll sum = 0 ;
    for(ll i =  0 ; i < n ; i++){
    	  cin >> v[i];
    	  mp[v[i]]++;
    	  sum += v[i];
	}
	ll q ; cin >> q ;
	while(q--){
		ll a,b;
		cin >> a >> b ;
		ll z = mp[a];
		mp[a] = 0 ;
		mp[b] += z ;
		ll ans = (sum - a*z + b*z);
		sum = ans ;
		cout << ans << endl;
	}
}
