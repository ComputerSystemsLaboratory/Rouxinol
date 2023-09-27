#include "bits/stdc++.h"
using namespace std;
using ll = long long;

template <typename TYPE>
void print_vec(const vector<TYPE>& v, int num=0){
  if(num == 0) num = (int)v.size();
	for(int i=0; i<num; i++){
		cout << v[i] << " ";
	}
	cout << endl;
}

template <typename TYPE>
void print_vec2(const vector<vector<TYPE>>& v){
  cout << endl; cout << "       ";
  for(int i=0; i<v[0].size(); i++) cout << i << "   "; 
  cout << endl;
	for(int i=0; i<v.size(); i++){
		cout << "i=" << i << ":   ";
		for(int j=0; j<v[i].size(); j++){
			if(v[i][j] == 0) cout << "\x1B[0m" << v[i][j] << "   ";
      else cout << "\x1B[31m" << v[i][j] << "   ";//https://stackoverrun.com/ja/q/12618775
		}
		cout << "\x1B[0m" << endl;
	}
}


//https://qiita.com/drken/items/3b4fdf0a78e7a138cd9a#4-%E7%B4%AF%E4%B9%97-an
ll modpow(ll a, ll n, ll MOD){// a^n mod を計算する
	//2分累乗法 計算量O(logN)
	ll res = 1;
	// while(n > 0){
	// 	if(n & 1) res = res * a % MOD;
	// 	a = a * a % MOD;
	// 	n = n >> 1;
	// }
	bitset<30> bit(n);//10^9 < 2^30 なので30としました．
	for(int i=0; i<(int)bit.size(); i++){
		if(bit[i]) res = res * a % MOD;
		a = a * a % MOD;
	}
	return res;
}
int main(){
	ll m, n;
	cin >> m >> n;
	const ll MOD = 1e9 + 7;
	// ll ans = 1;
	// for(int i=0; i<n; i++){
	// 	ans = (ans%MOD * m)%MOD;
	// }
	// cout << ans << endl;
	cout << modpow(m, n, MOD) << endl;

	return 0;
}


