#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
#define rep(i,n) for (ll i = 0; i < (n); ++i)
#define vcout(v) rep(i,v.size()) cout << v[i] << " "; cout << endl
#define mcout(m) rep(j,m.size()){vcout(m[j]);}

// 素因数分解
map<ll, ll> prime_factor(ll n){
	map<ll, ll> res;
	for(ll i = 2; i*i <= n; i++){
		while(n % i == 0){
			res[i]++;
			n /= i;
		}
	}
	if(n > 1) res[n]++;
	return res;
}
void mainsolve(){

	ll n;
	cin >> n;
	map<ll,ll> pf = prime_factor(n);
	cout << n << ":";
	
	for(auto itr = pf.begin(); itr != pf.end(); itr++){
		P now = *itr;
		rep(j,now.second){
		    cout << " ";
		    cout << now.first;
		}
	}
	cout << endl;
	return;
}

int main(){
	
	//ll TC;cin>>TC;rep(I,TC){cout<<"case:"<<I+1<<"---"<<endl; // comment out!
		mainsolve();
	//} // comment out!
	return 0;
}
