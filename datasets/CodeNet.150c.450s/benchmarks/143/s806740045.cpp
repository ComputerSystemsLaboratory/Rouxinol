#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i = 0;i<((ll)(n));i++)
#define reg(i,a,b) for(ll i = ((ll)(a));i<=((ll)(b));i++)
#define irep(i,n) for(ll i = ((ll)(n)-1);i>=0;i--)
#define ireg(i,a,b) for(ll i = ((ll)(b));i>=((ll)(a));i--)
template<class T = int> using V = vector<T>;
template<class T = int> using VV = V< V<T> >;
template<class T = int> void print(vector<T> v){for(auto a:v)cout<<a<<" ";cout<<endl;}

/*
*/

ll n,a[100010],q,b[100010],c[100010],sum=0;
map<ll,ll> mp;

int main(void){
	cin>>n;
	rep(i,n)cin>>a[i];
	cin>>q;
	rep(i,q)cin>>b[i]>>c[i];
	rep(i,n){
		mp[a[i]]++;
		sum+=a[i];
	}
	rep(i,q){
		sum = sum + mp[b[i]]*(c[i]-b[i]);
		mp[c[i]]+=mp[b[i]];
		mp[b[i]]=0;
		cout<<sum<<endl;
	}
	return 0;
}