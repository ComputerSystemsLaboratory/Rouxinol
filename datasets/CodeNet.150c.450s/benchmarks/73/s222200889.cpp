#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
#define all(x) x.begin(),x.end()
#define rep(i,j,n) for (long long i = j; i < (long long)(n); i++)
#define _GLIBCXX_DEBUG
#define MOD 1000000007
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
//(a+b-1)/b
//cout << fixed << setprecision();
//priority_queue<ll, vector<ll>, greater<ll>> q;

class BIT
{
private:
	vl bit;
	ll n;
public:
	BIT(ll k){
		n=k;
		bit.resize(n+10,0);
	}
	void add(ll ind,ll a){
		for(ll i=ind; i<=n ; i+=i&-i){
			bit[i]+=a;
		}
	}
	ll get_sum(ll a){
		ll ret=0;
		for(ll i=a; i>0; i-=(i&-i)){
			ret+=bit[i];
		}
		return ret;
	}
	ll get_sum(ll l,ll r){
		ll ret1=get_sum(l-1);
		ll ret2=get_sum(r);
		return ret2-ret1;
	}
};

signed main(){
	ll n; cin>>n;
	BIT bit(n);
	ll q; cin>>q;
	while(q--){
		ll ty; cin>>ty;
		if(ty==0){
			ll ind,a;
			cin>>ind>>a;
			bit.add(ind,a);
		}
		else{
			ll l,r; cin>>l>>r;
			cout<<bit.get_sum(l,r)<<endl;
		}
	}
	
	
	return 0;
}
