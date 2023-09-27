#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

#define ALL(v) begin(v),end(v)

typedef long long LL;
typedef vector<LL> vll;

int solve(){
	int n;
	cin >> n;
	vll as(n);
	for(int i = 0; i < n; ++i){
		cin >> as[i];
	}
	string s;
	cin >> s;
	vll bs;
	for(int i = n - 1; i >= 0; --i){
		LL a = as[i];
		for(LL x : bs){
			if((a ^ x) < a){ a ^= x; }
		}
		if(s[i] == '0'){
			if(a != 0){
				bs.insert(lower_bound(ALL(bs), a, greater<LL>()), a);
			}
		}
		else{
			if(a != 0){ return 1; }
		}
	}
	return 0;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for(int i = 0; i < t; ++i){
		cout << solve() << '\n';
	}
}
