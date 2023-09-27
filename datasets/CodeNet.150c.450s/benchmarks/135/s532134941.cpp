#include<bits/stdc++.h>

#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
 
using namespace std;

using ll = long long;

vector<int> v, v1;

int main(){
	int n, m;
	while(cin >> n >> m){
		if(n == 0)return 0;
		vector<int> h, w;
		map<int, ll> mp1, mp2;
		for(int i = 0;i < n;i++){
			int a;cin >> a;
			h.push_back(a);
			//mp1[a]++;
		}
		for(int i = 0;i < m;i++){
			int a;cin >> a;
			w.push_back(a);
			//mp2[a]++;
		}
		vector<ll> ruiseki1, ruiseki2;
		ruiseki1.push_back(0);
		ruiseki2.push_back(0);
		for(int i = 0;i < n;i++)ruiseki1.push_back(ruiseki1.back() + h[i]);
		for(int i = 0;i < m;i++)ruiseki2.push_back(ruiseki2.back() + w[i]);
		for(int i = 0;i < n;i++){
			for(int j = i+1;j < n+1;j++){
				mp1[ruiseki1[j] - ruiseki1[i]]++;
			}
		}
		for(int i = 0;i < m;i++){
			for(int j = i+1;j < m+1;j++){
				mp2[ruiseki2[j] - ruiseki2[i]]++;
			}
		}
		ll ans = 0;
		for(auto a : mp1){
			if(a.first == 0)continue;
			ans += mp2[a.first] * a.second;
		}
		cout<<ans<<endl;
	}
}

