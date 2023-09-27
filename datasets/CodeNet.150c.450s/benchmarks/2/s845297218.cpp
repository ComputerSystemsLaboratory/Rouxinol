#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> int_pair;
typedef pair<ll,ll> ll_pair;
#define pb push_back
#define FOR(I,A,B) for(ll I = (A); I < (B); ++I)
const int N=100;
const int W=10000;

vector<ll> a;
ll partition(ll p,ll r){
	ll x = a[r];
	ll i = p - 1;
	FOR(j,p,r){
		if(a[j]<=x){
			i = i+1;
			swap(a[i],a[j]);
		}	
	}
	swap(a[i+1],a[r]);
	return i+1;
}

int main(){
	ll n;
	cin>>n;
	FOR(i,0,n){
		ll k;
		cin>>k;
		a.pb(k);
	}
	ll i = partition(0,a.size()-1);
	FOR(j,0,a.size()){
		if(i==j){
			cout<<"["<<a[j]<<"]";
		}else{
			cout<<a[j];
		}
		if(j!=a.size()-1)cout<<" ";
	}
	cout<<endl;
}
