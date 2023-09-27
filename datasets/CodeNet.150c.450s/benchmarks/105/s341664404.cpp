#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>

using ll = long long int;
const int INF = (1<<30);
const ll INFLL = (1ll<<60);
const ll MOD = (ll)(1e9+7);

#define l_ength size

void mul_mod(ll& a, ll b){
	a *= b;
	a %= MOD;
}

void add_mod(ll& a, ll b){
	a = (a<MOD)?a:(a-MOD);
	b = (b<MOD)?b:(b-MOD);
	a += b;
	a = (a<MOD)?a:(a-MOD);
}

ll a[111],b[111];

void mat(int n){
	int i,j,r=0;
	for(j=59; j>=0; --j){
		for(i=r; i<n; ++i){
			if(b[i]&(1ll<<j)){
				break;
			}
		}
		if(i==n){
			continue;
		}
		if(i>r){
			b[r] ^= b[i];
		}
		for(i=r+1; i<n; ++i){
			if(b[i]&(1ll<<j)){
				b[i] ^= b[r];
			}
		}
		++r;
	}
}

bool check(ll x, int n){
	int i;
	for(i=0; i<n; ++i){
		if((b[i]^x)<x){
			x ^= b[i];
		}
		// std::cout << b[i] << " " << x << std::endl;
	}
	return ((x)?false:true);
}

int main(void){
	int t,n,i,m;
	bool flag;
	std::string s;
	std::cin >> t;
	while(t--){
		std::cin >> n;
		m = 0;
		flag = true;
		for(i=0; i<n; ++i){
			std::cin >> a[i];
		}
		std::cin >> s;
		for(i=0; i<n; ++i){
			s[i] -= '0';
		}
		std::reverse(a,a+n);
		std::reverse(s.begin(),s.end());
		for(i=0; i<n; ++i){
			if(s[i]){
				if(!check(a[i],m)){
					std::cout << "1" << std::endl;
					flag = false;
					break;
				}
			}else{
				b[m] = a[i]; ++m;
				mat(m);
			}
		}
		if(flag){
			std::cout << "0" << std::endl;
		}
	}
	return 0;
}
