#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,n) for(int i=1;i<=n;i++)
typedef long long ll;

vector<pair<ll,int>> factorize(ll n){
	vector<pair<ll,int>> res;
	for (ll i = 2; i*i <= n ; ++i) {
		if(n%i!=0) continue;
		res.emplace_back(i,0);
		while(n % i == 0){
			n /= i;
			res.back().second++;
		}
	}
	if( n != 1){
		res.emplace_back(n,1);
	}
	return res;
}

int main(){
	int n;
	cin >> n;
	auto v = factorize(n);
	
	cout << n << ": ";
	
	for (auto u :v){
		rep(j,u.second){
			if(j == u.second-1 && u == v[v.size()-1]){
				cout << u.first << endl;
			}else{
				cout << u.first << " ";
			}
		}
	}

	return 0;
}


