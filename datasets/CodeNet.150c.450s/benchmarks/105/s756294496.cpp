//agc045_a.cpp
//Sun Jul  5 18:44:30 2020

#include <iostream>
#include <string>
#include <queue>
#include <map>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>
#define INTINF 2147483647
#define LLINF 9223372036854775807
#define MOD 1000000007
#define rep(i,n) for (int i=0;i<(n);++i)

using namespace std;
using ll=long long;
typedef pair<int,int> P;

int main(){
	int t;
	cin >> t;

	rep(i,t){
		int n;
		cin >> n;
		ll a[n];
		rep(j,n) cin >> a[j];
		string s;
		cin >> s;

		vector<ll> xors;
		int ans = 0;
		for (int j=n-1;j>=0;j--){
			ll x = a[j];
			rep(k,xors.size()){
				x = min(x,x^xors[k]);
			}
			if (x){
				if (s[j]=='0'){
					xors.push_back(x);
				}else {
					ans = 1;
					break;
				}
			}
		}
		cout << ans << endl;
	}

}