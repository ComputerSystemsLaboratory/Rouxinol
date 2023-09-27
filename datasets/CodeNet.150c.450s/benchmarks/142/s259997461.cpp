#include <bits/stdc++.h>
using ll = long long;

signed main(){
	int n, K;
	std::cin >> n >> K;
	std::vector<ll> a(n);
	for(int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	std::vector<bool> ans(n - K);
	for(int i = 0; i < n - K; i++){
		if(a[i] < a[i + K]) ans[i] = true;
		else ans[i] = false;
	}
	for(auto ok : ans){
		if(ok) std::cout << "Yes" << std::endl;
		else std::cout << "No" << std::endl;
	}
}