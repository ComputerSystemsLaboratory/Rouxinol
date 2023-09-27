#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;
using v1 = vector<int>;
using vl = vector<long long>;
using v2 = vector<vector<int>>;
using v3 = vector<vector<char>>;

int main(){
	ll n;
	cin >> n;
	ll on = n;
	cout << n << ":";
	ll a = static_cast<ll>(sqrt(n));
	for(ll i = 2; i <=a; i++){
		while(n%i == 0){
			n /= i;
			cout << " " << i;
		}
		if(n == 1) break;
	}
	if(n != 1) cout << " " << n;
	cout << endl;
}

