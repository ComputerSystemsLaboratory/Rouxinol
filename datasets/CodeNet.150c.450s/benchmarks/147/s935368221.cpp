#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define pb push_back
 
#define sec second
#define fir first
#define mo 1000000007
#define inf 1e18
#define rep(i, s, n) for (ll i = s; i < n; i = i + 1)
#define rrep(i,s,n) for(ll i=s;i>=n;i--)

ll mod(ll n) { return (n % (ll)mo + (ll)mo)%(ll)mo;}
int main(){
	ll n;
	cin>>n;
	
	vector<ll> cnt(60005,0);
	
	rep(x,1,101){
		rep(y,1,101){
			rep(z,1,101){
				ll a = x*x + y*y + z*z + x*y + y*z + z*x;
				++cnt[a];
			}
		}
	}
	rep(i,1,n+1){
		cout<<cnt[i]<<endl;
	}
}
		 