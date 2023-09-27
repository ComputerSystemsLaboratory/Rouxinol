#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

#define ll long long

const int N = 5e3;

void solve(){
	ll n,a[N];
	string s;	
	cin >> n; 
	for(int i = 0; i < n; i++) cin >> a[i];
	cin >> s;
	vector<ll> p;
	for(int i = n-1; i >= 0; i--){
		int len = p.size();
		for(int j = 0; j < len; j++){
			//cout << *j; 
			a[i] = min(a[i],a[i]^p[j]);
		}
		if(a[i]){
			if(s[i] == '1'){
			cout << 1 << endl;
			return;
		}
		p.push_back(a[i]);
	}
}	
	cout << 0 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--) solve();
} 
